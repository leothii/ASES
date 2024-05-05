/********************************************************************************
** Form generated from reading UI file 'messagelist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGELIST_H
#define UI_MESSAGELIST_H

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

class Ui_Messagelist
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *backButton;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *line_3;
    QGroupBox *groupBox_3;
    QFrame *frame_2;
    QLabel *label_22;
    QListWidget *messageList;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Messagelist)
    {
        if (Messagelist->objectName().isEmpty())
            Messagelist->setObjectName("Messagelist");
        Messagelist->resize(424, 800);
        centralwidget = new QWidget(Messagelist);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 511, 991));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 560, 83, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(-30, 0, 461, 61));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 0, 61, 61));
        QFont font;
        font.setPointSize(1);
        label_7->setFont(font);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/wvsu_logo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 10, 211, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(8);
        font1.setBold(false);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_8->setIndent(0);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 40, 101, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(true);
        label_9->setFont(font2);
        label_9->setAcceptDrops(false);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setWordWrap(true);
        label_9->setIndent(0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 20, 121, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Product Sans Black")});
        font3.setPointSize(11);
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
        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 100, 401, 441));
        groupBox_3->setTabletTracking(false);
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        frame_2 = new QFrame(groupBox_3);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 0, 511, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 20, 191, 16));
        label_22->setFont(font3);
        label_22->setTabletTracking(false);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        messageList = new QListWidget(groupBox_3);
        messageList->setObjectName("messageList");
        messageList->setGeometry(QRect(10, 60, 381, 371));
        QFont font4;
        font4.setUnderline(false);
        messageList->setFont(font4);
        messageList->setFocusPolicy(Qt::StrongFocus);
        messageList->setLayoutDirection(Qt::LeftToRight);
        messageList->setAutoFillBackground(true);
        messageList->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        messageList->setFrameShape(QFrame::Box);
        messageList->setFrameShadow(QFrame::Plain);
        messageList->setDragDropMode(QAbstractItemView::InternalMove);
        messageList->setAlternatingRowColors(true);
        messageList->setSelectionMode(QAbstractItemView::SingleSelection);
        messageList->setTextElideMode(Qt::ElideNone);
        messageList->setFlow(QListView::TopToBottom);
        messageList->setProperty("isWrapping", QVariant(true));
        messageList->setUniformItemSizes(true);
        messageList->setWordWrap(false);
        messageList->setSortingEnabled(true);
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 60, 401, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        Messagelist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Messagelist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Messagelist->setMenuBar(menubar);
        statusbar = new QStatusBar(Messagelist);
        statusbar->setObjectName("statusbar");
        Messagelist->setStatusBar(statusbar);

        retranslateUi(Messagelist);

        QMetaObject::connectSlotsByName(Messagelist);
    } // setupUi

    void retranslateUi(QMainWindow *Messagelist)
    {
        Messagelist->setWindowTitle(QCoreApplication::translate("Messagelist", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("Messagelist", "Back", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Messagelist", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("Messagelist", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("Messagelist", "DASHBOARD", nullptr));
        groupBox_3->setTitle(QString());
        label_22->setText(QCoreApplication::translate("Messagelist", "MESSAGES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Messagelist: public Ui_Messagelist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGELIST_H
