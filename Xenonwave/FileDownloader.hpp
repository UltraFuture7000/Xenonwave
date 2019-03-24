#pragma once
#include <stdio.h>
#include <curl/curl.h>
#include <thread>
#include <string>
#include <functional>


static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	((std::string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

static size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
	size_t written = fwrite(ptr, size, nmemb, stream);
	return written;
}

static void downloadFileInternal(	std::string url,
									std::string outFile,
									std::function<void()> completeCallback) {

	

	CURL *curl;
	FILE *fp;
	CURLcode res;
	

	const char* outFileName = outFile.c_str();
	const char* urlStr = url.c_str();

	if (!urlStr || !outFileName)
		return;

	curl = curl_easy_init();
	if (curl) {
		fp = fopen(outFileName, "wb");
		curl_easy_setopt(curl, CURLOPT_URL, urlStr);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
		res = curl_easy_perform(curl);
		/* always cleanup */
		curl_easy_cleanup(curl);
		fclose(fp);
	}

	try {
		completeCallback();
	}
	catch (...) {

	}
}

static void downloadFileInternalNoCallback(	const char* url,
											const char *outFile) {
	CURL *curl;
	FILE *fp;
	CURLcode res;
	curl = curl_easy_init();
	if (curl) {
		fp = fopen(outFile, "wb");
		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
		res = curl_easy_perform(curl);
		/* always cleanup */
		curl_easy_cleanup(curl);
		fclose(fp);
	}
}

static void downloadFile(	std::string url,
							std::string outFile,
							std::function<void()> completeCallback) {

	std::thread t1(downloadFileInternal, url, outFile, completeCallback);
	t1.detach();
}

static void downloadFileNoCallback (	const char* url,
										const char* outFile) {

	std::thread t1(downloadFileInternalNoCallback, url, outFile);
	t1.detach();
}

static std::string downloadData(std::string url) {
	CURL *curl;
	CURLcode res;
	std::string readBuffer;

	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);

		
	}
	return readBuffer;
}