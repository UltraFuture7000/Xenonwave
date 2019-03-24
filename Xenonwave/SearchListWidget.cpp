#include "SearchListWidget.h"

#include <QMouseEvent>

SearchListWidget::SearchListWidget(QWidget *parent) :
	QListWidget(parent)
{

}

SearchListWidget::~SearchListWidget()
{

}

void SearchListWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::RightButton) {
		emit rightClick(&event->pos());
	}
	else {
		QListWidget::mousePressEvent(event);
	}
}
