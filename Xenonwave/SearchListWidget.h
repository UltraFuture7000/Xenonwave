#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H

#include <QListWidget>

class SearchListWidget : public QListWidget
{
	Q_OBJECT
public:
	SearchListWidget(QWidget *parent = 0);
	~SearchListWidget();
private:
	void mousePressEvent(QMouseEvent *event);
signals:
	void rightClick(QPoint* pos);
};

#endif // MYLISTWIDGET_H