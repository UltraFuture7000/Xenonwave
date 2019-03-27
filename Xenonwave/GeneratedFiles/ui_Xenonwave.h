/********************************************************************************
** Form generated from reading UI file 'Xenonwave.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XENONWAVE_H
#define UI_XENONWAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XenonwaveClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QWidget *page_2;
    QGridLayout *gridLayout_8;
    QListWidget *listWidget_4;
    QLabel *label_7;
    QLabel *label_8;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QLabel *label_5;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_5;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *page_7;
    QDockWidget *dockWidget_6;
    QWidget *dockWidgetContents_7;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_3;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_13;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_14;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *XenonwaveClass)
    {
        if (XenonwaveClass->objectName().isEmpty())
            XenonwaveClass->setObjectName(QString::fromUtf8("XenonwaveClass"));
        XenonwaveClass->resize(1200, 900);
        XenonwaveClass->setMinimumSize(QSize(1200, 800));
        QFont font;
        font.setFamily(QString::fromUtf8("Malgun Gothic"));
        font.setPointSize(12);
        XenonwaveClass->setFont(font);
        XenonwaveClass->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        XenonwaveClass->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(XenonwaveClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
" border: 2px solid gray;\n"
" border-radius: 10px;\n"
"height: 25px;\n"
"color: white;\n"
"}\n"
"\n"
"QMenu {\n"
"background-color: rgb(32, 32, 32);\n"
"color: rgb(162, 162, 162);\n"
"font: 12pt  'Roboto Lt';\n"
"}\n"
"\n"
"QMenu::item::disabled {\n"
" color: rgb(80, 80, 80);\n"
"}\n"
"\n"
"QMenu::item:selected{\n"
" background-color: rgb(64, 64, 64);\n"
" color: rgb(255, 255, 255);\n"
" } \n"
"\n"
"QMenu::item:pressed{\n"
" background-color: rgb(80, 80, 80);\n"
" color: rgb(255, 255, 255);\n"
" } "));

        gridLayout_6->addWidget(lineEdit, 0, 0, 1, 1);

        listWidget = new QListWidget(page);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"border: 0px;"));
        listWidget->setSortingEnabled(false);

        gridLayout_6->addWidget(listWidget, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_8 = new QGridLayout(page_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        listWidget_4 = new QListWidget(page_2);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));

        gridLayout_8->addWidget(listWidget_4, 2, 0, 1, 1);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"font-weight: bold;"));

        gridLayout_8->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"font-weight: bold;"));

        gridLayout_8->addWidget(label_8, 3, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"font-weight: bold;"));

        gridLayout_9->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"font-weight: bold;"));

        gridLayout_9->addWidget(label_5, 0, 0, 1, 1);

        listWidget_2 = new QListWidget(page_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        gridLayout_9->addWidget(listWidget_2, 1, 0, 1, 1);

        listWidget_3 = new QListWidget(page_2);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));

        gridLayout_9->addWidget(listWidget_3, 3, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_9, 0, 0, 1, 1);

        listWidget_5 = new QListWidget(page_2);
        listWidget_5->setObjectName(QString::fromUtf8("listWidget_5"));

        gridLayout_8->addWidget(listWidget_5, 4, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        stackedWidget->addWidget(page_7);

        horizontalLayout_2->addWidget(stackedWidget);

        XenonwaveClass->setCentralWidget(centralWidget);
        dockWidget_6 = new QDockWidget(XenonwaveClass);
        dockWidget_6->setObjectName(QString::fromUtf8("dockWidget_6"));
        dockWidget_6->setMinimumSize(QSize(1124, 151));
        dockWidget_6->setMaximumSize(QSize(524287, 500));
        dockWidget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 25, 25);\n"
"color: black;"));
        dockWidget_6->setAllowedAreas(Qt::BottomDockWidgetArea);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_7);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_2 = new QPushButton(dockWidgetContents_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/back.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
""));
        pushButton_2->setIconSize(QSize(30, 30));
        pushButton_2->setCheckable(false);

        gridLayout_2->addWidget(pushButton_2, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(dockWidgetContents_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/pause.png);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_3->setIconSize(QSize(50, 40));
        pushButton_3->setAutoDefault(true);

        gridLayout_2->addWidget(pushButton_3, 2, 5, 1, 1);

        label_2 = new QLabel(dockWidgetContents_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"border: 0px;"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 4, 7, 1, 1);

        pushButton_5 = new QPushButton(dockWidgetContents_7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/loop1.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(72, 72, 72);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(53, 161, 255);\n"
"}\n"
""));
        pushButton_5->setIconSize(QSize(30, 30));
        pushButton_5->setCheckable(true);

        gridLayout_2->addWidget(pushButton_5, 2, 7, 1, 1);

        label_4 = new QLabel(dockWidgetContents_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font1.setPointSize(9);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"border: 0px;"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        label_4->setMargin(0);
        label_4->setIndent(-90);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        pushButton = new QPushButton(dockWidgetContents_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/50682-200.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(53, 161, 255);\n"
"}\n"
""));
        pushButton->setIconSize(QSize(30, 30));
        pushButton->setCheckable(true);

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(dockWidgetContents_7);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/forward.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
""));
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setCheckable(false);

        gridLayout_2->addWidget(pushButton_4, 2, 6, 1, 1);

        horizontalSlider_2 = new QSlider(dockWidgetContents_7);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 14px;\n"
"border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(53, 161, 255);\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(32, 32, 32);\n"
"border: 0px;\n"
"width: 18px;\n"
"radius: 5px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 18px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: white;\n"
"border: 0px;\n"
"width: 18px;\n"
"radius: 5px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: rgb(185, 185, 185);\n"
"border: 0px;\n"
"width: 18px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: rgb(185, 185, 185);\n"
"border: 0px;\n"
"width: 18px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 8px;"
                        "\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        horizontalSlider_2->setMaximum(0);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 3, 5, 1, 1);

        label = new QLabel(dockWidgetContents_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"border: 0px;"));

        gridLayout_2->addWidget(label, 4, 2, 1, 1);

        label_3 = new QLabel(dockWidgetContents_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(150, 70));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Xenonwave/D:/Downloads/Screen Shot 2018-11-30 at 5.43.26 pm.png")));
        label_3->setScaledContents(true);

        gridLayout_2->addWidget(label_3, 2, 0, 2, 1);


        horizontalLayout->addLayout(gridLayout_2);

        dockWidget_6->setWidget(dockWidgetContents_7);
        XenonwaveClass->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_6);
        dockWidget = new QDockWidget(XenonwaveClass);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(198, 565));
        dockWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 25, 25);\n"
"color: black;\n"
""));
        dockWidget->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_5 = new QGridLayout(dockWidgetContents);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_13 = new QPushButton(dockWidgetContents);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/trending.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_13->setIconSize(QSize(50, 50));
        pushButton_13->setCheckable(true);

        gridLayout_5->addWidget(pushButton_13, 6, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_10 = new QPushButton(dockWidgetContents);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/settings_cog.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_10->setIconSize(QSize(50, 50));
        pushButton_10->setCheckable(false);

        gridLayout_4->addWidget(pushButton_10, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(dockWidgetContents);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/info.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_11->setIconSize(QSize(50, 50));
        pushButton_11->setCheckable(false);

        gridLayout_4->addWidget(pushButton_11, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 13, 0, 1, 1);

        pushButton_12 = new QPushButton(dockWidgetContents);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/radio.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_12->setIconSize(QSize(50, 50));
        pushButton_12->setCheckable(true);

        gridLayout_5->addWidget(pushButton_12, 5, 0, 1, 1);

        pushButton_7 = new QPushButton(dockWidgetContents);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/search.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_7->setIconSize(QSize(50, 50));
        pushButton_7->setCheckable(true);

        gridLayout_5->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(dockWidgetContents);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/playlists.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_6->setIconSize(QSize(50, 50));
        pushButton_6->setCheckable(true);

        gridLayout_5->addWidget(pushButton_6, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(dockWidgetContents);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/home.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_8->setIconSize(QSize(50, 50));
        pushButton_8->setCheckable(true);
        pushButton_8->setChecked(true);

        gridLayout_5->addWidget(pushButton_8, 2, 0, 1, 1);

        pushButton_14 = new QPushButton(dockWidgetContents);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/recommended.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_14->setIconSize(QSize(50, 50));
        pushButton_14->setCheckable(true);

        gridLayout_5->addWidget(pushButton_14, 7, 0, 1, 1);

        pushButton_9 = new QPushButton(dockWidgetContents);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: 0px;\n"
"qproperty-icon: url(:/Xenonwave/Resources/songs.png);\n"
"color: rgb(162, 162, 162);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
""));
        pushButton_9->setIconSize(QSize(50, 50));
        pushButton_9->setCheckable(true);

        gridLayout_5->addWidget(pushButton_9, 4, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        XenonwaveClass->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);
        dockWidget->raise();
        dockWidget_6->raise();

        retranslateUi(XenonwaveClass);

        stackedWidget->setCurrentIndex(0);
        pushButton_3->setDefault(true);


        QMetaObject::connectSlotsByName(XenonwaveClass);
    } // setupUi

    void retranslateUi(QMainWindow *XenonwaveClass)
    {
        XenonwaveClass->setWindowTitle(QCoreApplication::translate("XenonwaveClass", "Xenonwave", nullptr));
        label_7->setText(QCoreApplication::translate("XenonwaveClass", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("XenonwaveClass", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("XenonwaveClass", "Trending", nullptr));
        label_5->setText(QCoreApplication::translate("XenonwaveClass", "Frequently played", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label_2->setText(QCoreApplication::translate("XenonwaveClass", "-0:32", nullptr));
        pushButton_5->setText(QString());
        label_4->setText(QCoreApplication::translate("XenonwaveClass", "Qt Tests", nullptr));
        pushButton->setText(QString());
        pushButton_4->setText(QString());
        label->setText(QCoreApplication::translate("XenonwaveClass", "1:30", nullptr));
        label_3->setText(QString());
        dockWidget->setWindowTitle(QString());
        pushButton_13->setText(QCoreApplication::translate("XenonwaveClass", "         Trending", nullptr));
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QCoreApplication::translate("XenonwaveClass", "              Radio", nullptr));
        pushButton_7->setText(QCoreApplication::translate("XenonwaveClass", "         Search", nullptr));
        pushButton_6->setText(QCoreApplication::translate("XenonwaveClass", "   My Playlists", nullptr));
        pushButton_8->setText(QCoreApplication::translate("XenonwaveClass", "           Home", nullptr));
        pushButton_14->setText(QCoreApplication::translate("XenonwaveClass", " Recommended", nullptr));
        pushButton_9->setText(QCoreApplication::translate("XenonwaveClass", "     My Library", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XenonwaveClass: public Ui_XenonwaveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XENONWAVE_H
