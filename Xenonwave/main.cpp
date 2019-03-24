#include "Xenonwave.h"
#include <QtWidgets/QApplication>
#include "DiscordRPCWrapper.hpp"
#include <qresource.h>
#include <iostream>
#include <qfontdatabase.h>
#include <fstream>
#include <qlistwidget.h>
#include "FileDownloader.hpp"
#include <QBuffer>
#include <functional>
#include "bass.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Xenonwave w;

	//DiscordRPCInstance rpc;
	//rpc.init();

	QFontDatabase::addApplicationFont(":/Xenonwave/fonts/Roboto-Condensed.ttf");
	QFontDatabase::addApplicationFont(":/Xenonwave/fonts/Roboto-Regular.ttf");
	QFontDatabase::addApplicationFont(":/Xenonwave/fonts/Roboto-Thin.ttf");
	QFontDatabase::addApplicationFont(":/Xenonwave/fonts/Roboto-Light.ttf");
	QFontDatabase::addApplicationFont(":/Xenonwave/fonts/Roboto-Condensed.ttf");

	QFont Roboto("Roboto", 12, QFont::PreferAntialias);
	QFont RobotoCondensedMedium("Roboto Cn", 14, QFont::PreferAntialias);
	QFont RobotoCondensedSmall("Roboto Cn", 11, QFont::PreferAntialias);
	QFont RobotoLtTiny("Roboto Lt", 8, QFont::PreferAntialias);
	QFont RobotoLtSmall("Roboto Lt", 10, QFont::PreferAntialias);
	QFont RobotoLtLarge("Roboto Lt", 18, QFont::PreferAntialias);
	QFont RobotoLtStandard("Roboto Lt", 12, QFont::PreferAntialias);




	/*
	*			   *
	* FONT SETTING *
	*			   *
	*/

	/*FIRST SCREEN OF STACKED WIDGETS - SEARCH*/
	w.ui.lineEdit->setFont(RobotoLtStandard);
	w.ui.listWidget->setFont(RobotoLtStandard);

	/*SECOND SCREEN OF STACKED WIDGETS - HOME*/
	w.ui.label_5->setFont(RobotoCondensedMedium);
	w.ui.label_6->setFont(RobotoCondensedMedium);
	w.ui.label_7->setFont(RobotoCondensedMedium);
	w.ui.label_8->setFont(RobotoCondensedMedium);

	/* SIDEBAR */
	w.ui.pushButton_6->setFont(RobotoLtLarge);
	w.ui.pushButton_7->setFont(RobotoLtLarge);
	w.ui.pushButton_8->setFont(RobotoLtLarge);
	w.ui.pushButton_9->setFont(RobotoLtLarge);
	w.ui.pushButton_10->setFont(RobotoLtLarge);
	w.ui.pushButton_11->setFont(RobotoLtLarge);
	w.ui.pushButton_12->setFont(RobotoLtLarge);
	w.ui.pushButton_13->setFont(RobotoLtLarge);
	w.ui.pushButton_14->setFont(RobotoLtLarge);


	/* BOTTOM BAR */


	// Music name 
	w.ui.label_4->setFont(RobotoCondensedSmall);

	// Duration indicators
	w.ui.label->setFont(Roboto);
	w.ui.label_2->setFont(Roboto);

	//doSearch("helloworld");
	/*
	downloadFile("https://img.youtube.com/vi/yCC_b5WHLX0/0.jpg",
		"test.jpg",
		[&]() {

		QMenu widgetContextMenu;
		QIcon icon("test.jpg");
		for (int i = 0; i < 15; i++) {
			QListWidgetItem *item = new QListWidgetItem(icon, "Elektronomia - Sky High\nElektronomia NCS");
			w.ui.listWidget->addItem(item);

		}

		w.ui.listWidget->setFlow(QListView::LeftToRight);
		w.ui.listWidget->setResizeMode(QListView::Adjust);
		w.ui.listWidget->setGridSize(QSize(256, 256));
		w.ui.listWidget->setSpacing(50);
		w.ui.listWidget->setViewMode(QListView::IconMode);
		w.ui.listWidget->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
		w.ui.listWidget->setIconSize(QSize(160, 120));
	}
	);
	*/
	
	BASS_Init(-1, 44100, 0, 0, NULL);
	//qDebug() << BASS_ErrorGetCode();
	HSTREAM stream = BASS_StreamCreateFile(FALSE, argv[0], 0, 0, 0);
	//qDebug() << stream;
	//qDebug() << BASS_ErrorGetCode();
	BASS_ChannelPlay(stream, FALSE);
//	qDebug() << BASS_ErrorGetCode();

	w.show();
	return a.exec();
}
