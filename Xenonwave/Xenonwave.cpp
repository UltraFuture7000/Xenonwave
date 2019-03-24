#include "Xenonwave.h"
#include <qfontdatabase.h>
#include <QTimer>
#include <QTime>
#include <QKeyEvent>
#include <QListWidget>
#include <QIcon>
#include "Search.hpp"

Xenonwave::Xenonwave(QWidget *parent)
	: QMainWindow(parent)
{	

	

	ui.setupUi(this);



	QTimer *timer = new QTimer(this);
	QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update()));

	QObject::connect(ui.listWidget, SIGNAL(itemClicked(QListWidgetItem*)), 
									this, 
									SLOT(searchBoxItemClicked(QListWidgetItem*)));

	timer->start(20);

	qApp->installEventFilter(this);
}

void Xenonwave::update() {

	if (shouldReloadSearchResults) {
		ui.listWidget->repaint();
	}
	
}

bool Xenonwave::eventFilter(QObject * obj, QEvent * event)
{
	
	if (obj == ui.lineEdit && event->type() == QEvent::KeyPress)
	{
		QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
		if (Qt::Key_Enter == keyEvent->key())
		{
			
		}
		if (Qt::Key_Return == keyEvent->key())
		{
			doSearch(ui.lineEdit->text().toLocal8Bit().constData(), [&](std::vector<SearchResult> vec) {
			ui.listWidget->clear();

				for (auto &searchResult : vec) {

					QListWidgetItem *item = new QListWidgetItem(QIcon(""),
						QString::fromStdString(searchResult.name));

					ui.listWidget->addItem(item);
					
				}

	
				ui.listWidget->setResizeMode(QListView::Adjust);
				ui.listWidget->setSpacing(30);
				ui.listWidget->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
				ui.listWidget->setIconSize(QSize(90, 70));
			},
			[&](std::vector<SearchResult> vec, std::string tempPath) 
			{
				QTime dieTime = QTime::currentTime().addSecs(1.5);
				while (QTime::currentTime() < dieTime)
					QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

				

				for (int row = 0; row < ui.listWidget->count(); row++)
				{
					QListWidgetItem *item = ui.listWidget->item(row);
					

					item->setIcon(QIcon(
						QString::fromStdString(tempPath)
						+ QString::number(row)
					));
					shouldReloadSearchResults = true;
				}
			

			}
			);
			return false;
		}
	}
	return false;
}


void Xenonwave::searchBoxItemClicked(QListWidgetItem *item) {
	QMenu *menu = new QMenu();
	menu->setStyleSheet("QMenu { background-color: rgb(32, 32, 32);\
						color: rgb(162, 162, 162); font: 12pt 'Roboto Lt';\
						} QMenu::item::disabled { color: rgb(80, 80, 80); } \
						QMenu::item:selected{ background-color: rgb(64, 64, 64);\
						color: rgb(255, 255, 255); } QMenu::item:pressed{ background\
						-color: rgb(80, 80, 80); color: rgb(255, 255, 255); }");

	QAction *playAction = new QAction("Play this song", this);
	QAction *playlistAction = new QAction("Add this to a playlist...", this);
	QAction *libraryAction = new QAction("Add this to my library", this);
	QAction *moreFromAuthor = new QAction("Show more from this author", this);


	menu->addAction(playAction);
	menu->addSeparator();
	menu->addAction(playlistAction);
	menu->addAction(libraryAction);
	menu->addSeparator();
	menu->addAction(moreFromAuthor);
	menu->exec(QCursor::pos() + QPoint(20, 20));
	
}