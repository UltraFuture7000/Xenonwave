/*
	ClipGrab³
	Copyright (C) Philipp Schmieder
	http://clipgrab.de
	feedback [at] clipgrab [dot] de
	This file is part of ClipGrab.
	ClipGrab is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	ClipGrab is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	You should have received a copy of the GNU General Public License
	along with ClipGrab.  If not, see <http://www.gnu.org/licenses/>.
*/



#ifndef video_YOUTUBE_H
#define video_YOUTUBE_H

#include <qglobal.h>
#include <QtWebEngineWidgets>
#include <QtWebEngine>
#include <QtWebView>
#include <QtGui>
#include <QFile>
#include "http_handler.h"

struct fmtQuality
{
	QString quality;
	int resolution;
	QString video;
	QString audio;
	QStringList videoSegments;
	QStringList audioSegments;

	fmtQuality(QString quality, int resolution, QString video, QString audio = "")
	{
		this->quality = quality;
		this->resolution = resolution;
		this->video = video;
		if (!audio.isEmpty())
		{
			this->audio = audio;
		}
	}
};

struct jsMethod
{
	QString name;
	QString code;
};


class YouTubeVideo
{
	Q_OBJECT

private:
	QString _originalUrl;
	QUrl _url;
	QString _maxfmt;
	http_handler *handler;
	QStringList qualityLinks;
	QString parseSignature(QString s) {
		QWebEnginePage* page = new QWebEnginePage();
		page->setHtml("<script>" + this->js + "</script>");
		s = page->mainFrame()->evaluateJavaScript(this->signatureMethodName + "(\"" + s + "\")").toString();
		qDebug() << "parsed signature: " << s;
		view->deleteLater();
	}
	QString getFmtLink(QStringList, QString fmt) {
		QRegExp urlExpression;
		urlExpression = QRegExp("(http[s]?[^,]+)");

		QRegExp itagExpression;
		itagExpression = QRegExp("[,]?itag=([^,]+)");

		for (int i = 0; i < qualityLinks.size(); i++)
		{
			bool urlExpressionMatch = (urlExpression.indexIn(qualityLinks.at(i)) > -1);
			bool itagExpressionMatch = (itagExpression.indexIn(qualityLinks.at(i)) > -1);

			if (urlExpressionMatch && itagExpressionMatch && itagExpression.cap(1) == fmt)
			{
				return qualityLinks.at(i);
				
			}
		}
		return "";
	}
	QString getUrlFromFmtLink(QString link) {
		QRegExp urlExpression;
		urlExpression = QRegExp("(http[s]?[^,]+)");

		if (urlExpression.indexIn(link) > -1)
		{
#if QT_VERSION < QT_VERSION_CHECK(5,0,0)
			QString url = QUrl::fromEncoded(QUrl::fromEncoded(urlExpression.cap(1).toAscii()).toString().toAscii()).toString();
#else
			QString url = QUrl::fromPercentEncoding(QUrl::fromPercentEncoding(urlExpression.cap(1).toUtf8()).toUtf8());
#endif

			QRegExp sigExpression;
			sigExpression = QRegExp("(?:^|[^a-zA-Z])[,]?s(ig)?=([^,]+)");

			if (sigExpression.indexIn(link) > -1)
			{
				QString signature;
				if (sigExpression.cap(1) == "ig")
				{
					signature = sigExpression.cap(2);
				}
				else
				{
					signature = parseSignature(sigExpression.cap(2));
				}

				url = url.append("&signature=").append(signature);

			}

			QSettings settings;
			if (settings.value("UseRateBypass", true).toBool() && !url.contains("ratebypass"))
			{
				url = url.append("&ratebypass=yes");
			}

			return url;

		}

		return "";
	}
	QString getQualityFromFmtLink(QString link) {

	}
	void parseJS(QString js) {

	}
	void extractJSMethod(QString name, QString js) {

	}
	void parseDashMpd(QString) {

	}
	QList<jsMethod> jsMethods;
	QString signatureMethodName;
	QString loginFormError;
	QString html;
	QString js;
	QString dashmpd;
	QList<QStringList> dashQualityLinks;
	QMap<QString, QString> requiredDownloads;
	QString downloading;
	QDialog* passwordDialog;
	QList<fmtQuality> fmtQualities;
	QList<QRegExp> _urlRegExp;

public:
	virtual bool setUrl(QString url) {
		_originalUrl = url;

		if (_url.isEmpty())
		{
			url.replace("#!", "?");
			url.replace("youtube.com/embed/", "youtube.com/watch?v=");
			this->_url = QUrl(url);
			if (_url.isValid())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	inline YouTubeVideo() {
		this->_urlRegExp << QRegExp("http[s]?://\\w*\\.youtube\\.com/watch.*v\\=.*", Qt::CaseInsensitive);
		this->_urlRegExp << QRegExp("http[s]?://\\w*\\.youtube\\.com/view_play_list\\?p\\=.*&v\\=.*", Qt::CaseInsensitive);
		this->_urlRegExp << QRegExp("http[s]?://youtu.be/.*", Qt::CaseInsensitive);
		this->_urlRegExp << QRegExp("http[s]?://w*\\.youtube\\.com/embed/.*", Qt::CaseInsensitive);

		QSettings settings;
		QString serializedCookies = settings.value("youtubeCookies", "").toString();
		if (!serializedCookies.isEmpty())
		{
			QList<QNetworkCookie> cookies = this->handler->deserializeCookies(serializedCookies);
			this->handler->networkAccessManager->cookieJar()->setCookiesFromUrl(cookies, QUrl("https://www.youtube.com/"));
		}
	}
	
	virtual void parseVideo(QString) {

	}

public slots:
	//void handleLoginUrlChanged(const QUrl);
	//void handleLoginLoadFinished();
	//void handleLoginDialogRejected();
};

#endif // video_YOUTUBE_H