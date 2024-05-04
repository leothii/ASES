/********************************************************************************
** Form generated from reading UI file 'tclist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCLIST_H
#define UI_TCLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tclist
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QGroupBox *groupBox;
    QListWidget *teacherListWidget;
    QLabel *label;
    QListWidget *courseListWidget;
    QLabel *label_3;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *logoutButton;
    QTableWidget *tableWidget;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *line_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tclist)
    {
        if (tclist->objectName().isEmpty())
            tclist->setObjectName("tclist");
        tclist->resize(424, 800);
        tclist->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(tclist);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 511, 991));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 100, 401, 541));
        groupBox->setTabletTracking(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        teacherListWidget = new QListWidget(groupBox);
        teacherListWidget->setObjectName("teacherListWidget");
        teacherListWidget->setGeometry(QRect(20, 120, 221, 361));
        QFont font;
        font.setUnderline(false);
        teacherListWidget->setFont(font);
        teacherListWidget->setFocusPolicy(Qt::StrongFocus);
        teacherListWidget->setLayoutDirection(Qt::LeftToRight);
        teacherListWidget->setAutoFillBackground(true);
        teacherListWidget->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        teacherListWidget->setFrameShape(QFrame::Box);
        teacherListWidget->setFrameShadow(QFrame::Plain);
        teacherListWidget->setDragDropMode(QAbstractItemView::InternalMove);
        teacherListWidget->setAlternatingRowColors(true);
        teacherListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        teacherListWidget->setTextElideMode(Qt::ElideMiddle);
        teacherListWidget->setFlow(QListView::TopToBottom);
        teacherListWidget->setProperty("isWrapping", QVariant(true));
        teacherListWidget->setUniformItemSizes(true);
        teacherListWidget->setWordWrap(true);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 80, 63, 20));
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:#000000;"));
        courseListWidget = new QListWidget(groupBox);
        courseListWidget->setObjectName("courseListWidget");
        courseListWidget->setGeometry(QRect(230, 120, 151, 361));
        courseListWidget->setFont(font);
        courseListWidget->setFocusPolicy(Qt::StrongFocus);
        courseListWidget->setLayoutDirection(Qt::LeftToRight);
        courseListWidget->setAutoFillBackground(true);
        courseListWidget->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; \n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        courseListWidget->setFrameShape(QFrame::Box);
        courseListWidget->setFrameShadow(QFrame::Plain);
        courseListWidget->setDragDropMode(QAbstractItemView::InternalMove);
        courseListWidget->setAlternatingRowColors(true);
        courseListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        courseListWidget->setTextElideMode(Qt::ElideMiddle);
        courseListWidget->setFlow(QListView::TopToBottom);
        courseListWidget->setProperty("isWrapping", QVariant(true));
        courseListWidget->setUniformItemSizes(true);
        courseListWidget->setWordWrap(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 80, 81, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:#000000;"));
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 0, 461, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 20, 141, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Product Sans Black")});
        font2.setPointSize(11);
        label_2->setFont(font2);
        label_2->setTabletTracking(false);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        logoutButton = new QPushButton(groupBox);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(20, 500, 83, 29));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(100, 290, 256, 192));
        tableWidget->setStyleSheet(QString::fromUtf8("color:black;"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(-30, 0, 461, 61));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 0, 61, 61));
        QFont font3;
        font3.setPointSize(1);
        label_7->setFont(font3);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/wvsu_logo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 10, 211, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(8);
        font4.setBold(false);
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_8->setIndent(0);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 40, 101, 16));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setItalic(true);
        label_9->setFont(font5);
        label_9->setAcceptDrops(false);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setWordWrap(true);
        label_9->setIndent(0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 20, 121, 20));
        label_5->setFont(font2);
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
        tclist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tclist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        tclist->setMenuBar(menubar);
        statusbar = new QStatusBar(tclist);
        statusbar->setObjectName("statusbar");
        tclist->setStatusBar(statusbar);

        retranslateUi(tclist);

        QMetaObject::connectSlotsByName(tclist);
    } // setupUi

    void retranslateUi(QMainWindow *tclist)
    {
        tclist->setWindowTitle(QCoreApplication::translate("tclist", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("tclist", "Course", nullptr));
        label_3->setText(QCoreApplication::translate("tclist", "Teacher", nullptr));
        label_2->setText(QCoreApplication::translate("tclist", "FACULTY LIST", nullptr));
        logoutButton->setText(QCoreApplication::translate("tclist", "Back", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("tclist", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("tclist", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("tclist", "DASHBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tclist: public Ui_tclist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCLIST_H
