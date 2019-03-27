#pragma once



#include <vector>
#include <iostream>

#include <bass.h>


#include <QImage>
#include <QPixmap>

#include "YouTubeDLInterface.hpp"


extern "C"
{
#include <libavformat/avformat.h>
}

enum LibAVErrorState {
	OK = 0,
	OpenInputFail = 1,
	HeaderReadFail = 2
};

enum StreamType {
	LocalFile = 0,
	YouTube = 1
};

class Song {
private:
	HSTREAM stream;
	AVFormatContext *formatCtx;
	LibAVErrorState errorState;
	const char *path;
	StreamType type;
public:

	inline double getPosition() {
		
		return BASS_ChannelBytes2Seconds(stream, BASS_ChannelGetPosition(stream, 0));
	}

	inline double getLength() {
		return BASS_ChannelBytes2Seconds(stream, BASS_ChannelGetLength(stream, 0));
	}

	inline void setPosition(int positionInSeconds) {
		BASS_ChannelSetPosition(stream, 
								BASS_ChannelSeconds2Bytes(stream, positionInSeconds),
								0);
	}

	inline QString getTitle() {
		if (!formatCtx)
			return nullptr;

		AVDictionaryEntry *tag = nullptr;
		tag = av_dict_get(formatCtx->metadata, "title", tag, AV_DICT_IGNORE_SUFFIX);
		if(tag != nullptr)
			return tag->value;
		return nullptr;
	}

	inline QPixmap getAlbumArt() {

		uint8_t *data = nullptr;
		unsigned int dataSize;

		if (!formatCtx)
			return nullptr;

		// find the first attached picture, if available
		for (int i = 0; i < formatCtx->nb_streams; i++)
			if (formatCtx->streams[i]->disposition & AV_DISPOSITION_ATTACHED_PIC) {
				AVPacket pkt = formatCtx->streams[i]->attached_pic;
				data = pkt.data;
				dataSize = pkt.size;
				av_free_packet(&pkt);
				break;
			}

		// No album art found
		if (!data)
			return nullptr;

		QByteArray imgData = QByteArray(reinterpret_cast<const char*>(data), dataSize);
		QImage img = QImage::fromData(imgData, "JPG");
		QPixmap qp = QPixmap::fromImage(img);
		qp = qp.scaled(QSize(150, 70));

		return qp;
	}
	
	inline void loadFromFile(const char *fileName, bool autoPlay = true) {
		/*Load the stream and play it*/
		stream = BASS_StreamCreateFile(0, fileName, 0, 0, BASS_STREAM_PRESCAN);
		if(autoPlay)
			play();
		/*Set path to the fileName*/
		path = fileName;
		/*Allocate context for libavformat*/
		formatCtx = avformat_alloc_context();
		/*Open the file with libav format*/

		/* Open the specified path */
		if (avformat_open_input(&formatCtx, fileName, NULL, NULL) != 0) {
			errorState = LibAVErrorState::OpenInputFail;
			av_free(formatCtx);
			return;
		}

		/* Read the format headers */
		if (formatCtx->iformat->read_header(formatCtx) < 0) {
			errorState = LibAVErrorState::HeaderReadFail;
			av_free(formatCtx);
			return;
		}

	}

	inline void loadFromYouTubeURL(QString url, bool autoPlay = true) {
		YouTubeDLInterface::getLinkAndDoSomething(
			url,
			[&](const char* url) {
			stream = BASS_WMA_StreamCreateURL(
				url,
				0,
				BASS_STREAM_PRESCAN,
				0,
				0);
			BASS_ChannelPlay(stream, false);
			
			}
		);
		
	}

	inline void play(bool looping = false) {
		BASS_ChannelPlay(stream, looping);
		
	}
};