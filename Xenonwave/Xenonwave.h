#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Xenonwave.h"

#include "SearchListWidget.h"
#include <queue>
#include <functional>
#include "Song.hpp"

class Xenonwave : public QMainWindow
{
	Q_OBJECT

public:
	Song currentSong;
	Xenonwave(QWidget *parent = Q_NULLPTR);
	Ui::XenonwaveClass ui;

private:
	bool shouldReloadSearchResults;
	bool eventFilter(QObject *obj, QEvent *event);

private slots:
	void searchBoxItemClicked(QListWidgetItem *item);
	void update();
	void positionSliderMoved();
};
