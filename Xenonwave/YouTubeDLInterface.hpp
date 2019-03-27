#ifndef _YOUTUBEDLINTERFACE_HPP_
#define _YOUTUBEDLINTERFACE_HPP_

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <functional>
#include <thread>

#ifdef WINDOWS
#define popen _popen
#define pclose _pclose
#endif

namespace YouTubeDLInterface {
	inline void getLink(std::string cmd, std::function<void(const char*)> completeCallback) {
		std::array<char, 128> buffer;
		std::string result;
		std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd.c_str(), "r"), pclose);
		if (!pipe) {
			throw std::runtime_error("popen() failed!");
		}
		while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
			result += buffer.data();
		}

		completeCallback(result.c_str());
	}

	inline void getLinkAndDoSomething(QString url, std::function<void(const char*)> completeCallback) {
		//std::string command("youtube-dl -4 --no-check-certificate --youtube-skip-dash-manifest --no-playlist -f 18 --audio-quality 0 --audio-format mp3 -g ");
		std::string command("youtube-dl -4 --no-check-certificate --youtube-skip-dash-manifest --no-playlist -f 251 --audio-quality 0 --audio-format mp3 -g ");
		std::string s = url.toStdString();
		command += s;

		const char *cmd = command.c_str();
		int p = 0;
		std::thread linkProcessThread(getLink, command, completeCallback);
		linkProcessThread.detach();
	}
}


#endif // _YOUTUBEDLINTERFACE_HPP_