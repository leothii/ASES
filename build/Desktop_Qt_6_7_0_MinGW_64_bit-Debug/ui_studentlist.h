/********************************************************************************
** Form generated from reading UI file 'studentlist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLIST_H
#define UI_STUDENTLIST_H

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

class Ui_Studentlist
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
    QListWidget *studentList;
    QListWidget *detailList;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Studentlist)
    {
        if (Studentlist->objectName().isEmpty())
            Studentlist->setObjectName("Studentlist");
        Studentlist->resize(424, 800);
        centralwidget = new QWidget(Studentlist);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 511, 991));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 630, 83, 29));
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
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/wvsu_logo.png")));
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
        groupBox_3->setGeometry(QRect(10, 100, 401, 501));
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
        label_22->setGeometry(QRect(140, 20, 191, 16));
        label_22->setFont(font3);
        label_22->setTabletTracking(false);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        studentList = new QListWidget(groupBox_3);
        studentList->setObjectName("studentList");
        studentList->setGeometry(QRect(10, 60, 381, 431));
        QFont font4;
        font4.setUnderline(false);
        studentList->setFont(font4);
        studentList->setFocusPolicy(Qt::StrongFocus);
        studentList->setLayoutDirection(Qt::LeftToRight);
        studentList->setAutoFillBackground(true);
        studentList->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        studentList->setFrameShape(QFrame::Box);
        studentList->setFrameShadow(QFrame::Plain);
        studentList->setDragDropMode(QAbstractItemView::InternalMove);
        studentList->setAlternatingRowColors(true);
        studentList->setSelectionMode(QAbstractItemView::SingleSelection);
        studentList->setTextElideMode(Qt::ElideNone);
        studentList->setFlow(QListView::TopToBottom);
        studentList->setProperty("isWrapping", QVariant(true));
        studentList->setUniformItemSizes(true);
        studentList->setWordWrap(false);
        studentList->setSortingEnabled(true);
        detailList = new QListWidget(groupBox_3);
        detailList->setObjectName("detailList");
        detailList->setGeometry(QRect(230, 60, 141, 431));
        detailList->setFont(font4);
        detailList->setFocusPolicy(Qt::StrongFocus);
        detailList->setLayoutDirection(Qt::LeftToRight);
        detailList->setAutoFillBackground(true);
        detailList->setStyleSheet(QString::fromUtf8("color:black;\n"
"    padding: 5px; /* Padding for each item */\n"
"border-top: 1px solid #ccc; /* Border between rows */\n"
"border-bottom: 1px solid #ccc; /* Border between rows */\n"
"    text-align: center;"));
        detailList->setFrameShape(QFrame::Box);
        detailList->setFrameShadow(QFrame::Plain);
        detailList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        detailList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        detailList->setDragDropMode(QAbstractItemView::InternalMove);
        detailList->setAlternatingRowColors(true);
        detailList->setSelectionMode(QAbstractItemView::SingleSelection);
        detailList->setTextElideMode(Qt::ElideNone);
        detailList->setFlow(QListView::TopToBottom);
        detailList->setProperty("isWrapping", QVariant(true));
        detailList->setUniformItemSizes(true);
        detailList->setWordWrap(false);
        detailList->setSortingEnabled(true);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 70, 81, 16));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setItalic(true);
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(55, 122, 183);"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 70, 51, 16));
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(55, 122, 183);"));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 60, 401, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        Studentlist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Studentlist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Studentlist->setMenuBar(menubar);
        statusbar = new QStatusBar(Studentlist);
        statusbar->setObjectName("statusbar");
        Studentlist->setStatusBar(statusbar);

        retranslateUi(Studentlist);

        QMetaObject::connectSlotsByName(Studentlist);
    } // setupUi

    void retranslateUi(QMainWindow *Studentlist)
    {
        Studentlist->setWindowTitle(QCoreApplication::translate("Studentlist", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("Studentlist", "Back", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Studentlist", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("Studentlist", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("Studentlist", "DASHBOARD", nullptr));
        groupBox_3->setTitle(QString());
        label_22->setText(QCoreApplication::translate("Studentlist", "STUDENT LIST", nullptr));
        label_3->setText(QCoreApplication::translate("Studentlist", "Fullname", nullptr));
        label_4->setText(QCoreApplication::translate("Studentlist", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Studentlist: public Ui_Studentlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLIST_H
