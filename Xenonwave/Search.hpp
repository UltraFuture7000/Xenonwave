#pragma once
#include <QBuffer>
#include <QMenu>
#include <QListWidget>
#include <QRegExp>

#include <sstream>
#include <functional>
#include <vector>
#include <thread>
#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>

#include "FileDownloader.hpp"

#ifdef max
#undef max
#undef min
#endif

struct SearchResult {
	std::string name;
	QIcon* iconPtr;
	std::string id;
};

static void dummyFunc() {}

std::vector<SearchResult> getResults(std::string searchTerm)
{
	// Search YouTube
	std::vector<SearchResult> s;
	std::string ytSearchLink = "https://www.youtube.com/results?search_query=";


	QString stringToProcess(QString::fromStdString(searchTerm));
	stringToProcess.replace(QString(" "), QString("%20"));
	stringToProcess.replace(QString("'"), QString("%#39;"));
	stringToProcess.replace(QString("\""), QString("%quot;"));


	searchTerm = stringToProcess.toUtf8().constData();

	std::string searchData = downloadData(ytSearchLink + searchTerm);

	size_t pos = searchData.find("watch?v=", 0);
	while (pos != std::string::npos)
	{
		SearchResult resultObj;
		
		// The ID is below
		resultObj.id = searchData.substr(pos + 8, 11);
		// 4000 to skip duplicates
		pos = searchData.find("watch?v=", pos + 4000);
		s.push_back(resultObj);
	}

		QRegularExpression
			reB("(?<=views\">).*?(?=</span></a><span class=\"accessible-description\")");

		int titleIterations = 0;
		QRegularExpressionMatchIterator iB = reB.globalMatch(QString::fromStdString(searchData));
		while (iB.hasNext()) {
			QRegularExpressionMatch match = iB.next();
			if (match.hasMatch()) {
				QString stringMatch = match.captured(0);
				/*Replace any special characters*/
				stringMatch.replace(QString("&#39;"), QString("'"));
				stringMatch.replace(QString("&amp;"), QString("&"));
				stringMatch.replace(QString("&quot;"), QString("\""));
				if (titleIterations >= s.size())
					return s;
				s.at(titleIterations).name = stringMatch.toUtf8().constData();
				titleIterations++;
			}
		}

	return s;

}


static void downloadAndSetIcons(	std::vector<SearchResult> vec,
									std::function<void(std::vector<SearchResult>, std::string)> iconSetCallback) {

	std::ostringstream tempPathOss;
	tempPathOss << std::experimental::filesystem::temp_directory_path();	

	for (int i = 0; i < vec.size(); i++) {
		std::string outName = tempPathOss.str() + "XW_" + std::to_string(i);
		std::ofstream tmpFile(outName);

		SearchResult res = vec.at(i);
		std::string thumbnailUrl = "https://img.youtube.com/vi/" + res.id + "/0.jpg";

		downloadFile(thumbnailUrl, outName, [](){});
	}
	
	iconSetCallback(vec, tempPathOss.str() + "XW_");
}

static void doSearchInternal(	std::string searchTerm,
								std::function<void(std::vector<SearchResult>)> completeCallback,
								std::function<void(std::vector<SearchResult>, std::string)> iconSetCallback) {

	std::vector<SearchResult> p = getResults(searchTerm);
	completeCallback(p);
	downloadAndSetIcons(p, iconSetCallback);
	
}

static void doSearch(	std::string searchTerm,
						std::function<void(std::vector<SearchResult>)> completeCallback,
						std::function<void(std::vector<SearchResult>, std::string)> iconSetCallback) {

	std::thread t1(doSearchInternal, searchTerm, completeCallback, iconSetCallback);
	t1.detach();

	
}