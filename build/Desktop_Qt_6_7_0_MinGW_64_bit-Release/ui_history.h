/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_History
{
public:
    QWidget *centralwidget;
    QLabel *StudentName;
    QLabel *Welcome;
    QFrame *frame;
    QGroupBox *groupBox_2;
    QListWidget *Ratedlist;
    QFrame *frame_2;
    QLabel *label_22;
    QListWidget *Courselist;
    QListWidget *Overalllist;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *History)
    {
        if (History->objectName().isEmpty())
            History->setObjectName("History");
        History->resize(424, 800);
        centralwidget = new QWidget(History);
        centralwidget->setObjectName("centralwidget");
        StudentName = new QLabel(centralwidget);
        StudentName->setObjectName("StudentName");
        StudentName->setGeometry(QRect(100, 80, 231, 33));
        QFont font;
        font.setFamilies({QString::fromUtf8("Product Sans")});
        font.setPointSize(15);
        font.setUnderline(false);
        StudentName->setFont(font);
        StudentName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Welcome = new QLabel(centralwidget);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(10, 80, 111, 33));
        Welcome->setSizeIncrement(QSize(6, 5));
        Welcome->setBaseSize(QSize(9, 10));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Product Sans")});
        font1.setPointSize(15);
        Welcome->setFont(font1);
        Welcome->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 511, 991));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 80, 401, 451));
        groupBox_2->setTabletTracking(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        Ratedlist = new QListWidget(groupBox_2);
        Ratedlist->setObjectName("Ratedlist");
        Ratedlist->setGeometry(QRect(10, 90, 221, 351));
        QFont font2;
        font2.setUnderline(false);
        Ratedlist->setFont(font2);
        Ratedlist->setFocusPolicy(Qt::StrongFocus);
        Ratedlist->setLayoutDirection(Qt::LeftToRight);
        Ratedlist->setAutoFillBackground(true);
        Ratedlist->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        Ratedlist->setFrameShape(QFrame::Box);
        Ratedlist->setFrameShadow(QFrame::Plain);
        Ratedlist->setDragDropMode(QAbstractItemView::NoDragDrop);
        Ratedlist->setAlternatingRowColors(true);
        Ratedlist->setSelectionMode(QAbstractItemView::SingleSelection);
        Ratedlist->setTextElideMode(Qt::ElideNone);
        Ratedlist->setFlow(QListView::TopToBottom);
        Ratedlist->setProperty("isWrapping", QVariant(true));
        Ratedlist->setUniformItemSizes(true);
        Ratedlist->setWordWrap(false);
        Ratedlist->setSortingEnabled(false);
        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-20, 10, 511, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(90, 20, 261, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Product Sans Black")});
        font3.setPointSize(11);
        label_22->setFont(font3);
        label_22->setTabletTracking(false);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Courselist = new QListWidget(groupBox_2);
        Courselist->setObjectName("Courselist");
        Courselist->setGeometry(QRect(230, 90, 91, 351));
        Courselist->setFont(font2);
        Courselist->setFocusPolicy(Qt::StrongFocus);
        Courselist->setLayoutDirection(Qt::LeftToRight);
        Courselist->setAutoFillBackground(true);
        Courselist->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        Courselist->setFrameShape(QFrame::Box);
        Courselist->setFrameShadow(QFrame::Plain);
        Courselist->setDragDropMode(QAbstractItemView::NoDragDrop);
        Courselist->setAlternatingRowColors(true);
        Courselist->setSelectionMode(QAbstractItemView::SingleSelection);
        Courselist->setTextElideMode(Qt::ElideNone);
        Courselist->setFlow(QListView::TopToBottom);
        Courselist->setProperty("isWrapping", QVariant(true));
        Courselist->setLayoutMode(QListView::Batched);
        Courselist->setUniformItemSizes(true);
        Courselist->setWordWrap(false);
        Courselist->setSortingEnabled(false);
        Overalllist = new QListWidget(groupBox_2);
        Overalllist->setObjectName("Overalllist");
        Overalllist->setGeometry(QRect(320, 90, 71, 351));
        Overalllist->setFont(font2);
        Overalllist->setFocusPolicy(Qt::StrongFocus);
        Overalllist->setLayoutDirection(Qt::LeftToRight);
        Overalllist->setAutoFillBackground(true);
        Overalllist->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        Overalllist->setFrameShape(QFrame::Box);
        Overalllist->setFrameShadow(QFrame::Plain);
        Overalllist->setDragDropMode(QAbstractItemView::NoDragDrop);
        Overalllist->setAlternatingRowColors(true);
        Overalllist->setSelectionMode(QAbstractItemView::SingleSelection);
        Overalllist->setTextElideMode(Qt::ElideNone);
        Overalllist->setFlow(QListView::TopToBottom);
        Overalllist->setProperty("isWrapping", QVariant(true));
        Overalllist->setLayoutMode(QListView::Batched);
        Overalllist->setUniformItemSizes(true);
        Overalllist->setWordWrap(false);
        Overalllist->setSortingEnabled(false);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 70, 81, 16));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setItalic(true);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: black;"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 70, 51, 16));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: black;"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 70, 81, 16));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: black;"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(-30, 0, 461, 61));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 0, 61, 61));
        QFont font5;
        font5.setPointSize(1);
        label_7->setFont(font5);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/wvsu_logo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 10, 211, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setPointSize(8);
        font6.setBold(false);
        label_8->setFont(font6);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_8->setIndent(0);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 40, 101, 16));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Times New Roman")});
        font7.setPointSize(8);
        font7.setBold(false);
        font7.setItalic(true);
        label_9->setFont(font7);
        label_9->setAcceptDrops(false);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setWordWrap(true);
        label_9->setIndent(0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 20, 121, 20));
        label_5->setFont(font3);
        label_5->setTabletTracking(false);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2 = new QFrame(frame_3);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(40, 40, 118, 20));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(frame_3);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(160, 0, 16, 61));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_7->raise();
        label_8->raise();
        label_9->raise();
        line_2->raise();
        line_3->raise();
        label_5->raise();
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 550, 71, 31));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        History->setCentralWidget(centralwidget);
        menubar = new QMenuBar(History);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        History->setMenuBar(menubar);
        statusbar = new QStatusBar(History);
        statusbar->setObjectName("statusbar");
        History->setStatusBar(statusbar);

        retranslateUi(History);

        QMetaObject::connectSlotsByName(History);
    } // setupUi

    void retranslateUi(QMainWindow *History)
    {
        History->setWindowTitle(QCoreApplication::translate("History", "MainWindow", nullptr));
        StudentName->setText(QCoreApplication::translate("History", "Name", nullptr));
        Welcome->setText(QCoreApplication::translate("History", "Welcome,", nullptr));
        groupBox_2->setTitle(QString());
        label_22->setText(QCoreApplication::translate("History", "RECENTLY RATED TEACHER/S", nullptr));
        label_3->setText(QCoreApplication::translate("History", "Fullname", nullptr));
        label_4->setText(QCoreApplication::translate("History", "Course", nullptr));
        label_6->setText(QCoreApplication::translate("History", "Rate", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("History", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("History", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("History", "DASHBOARD", nullptr));
        backButton->setText(QCoreApplication::translate("History", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class History: public Ui_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
