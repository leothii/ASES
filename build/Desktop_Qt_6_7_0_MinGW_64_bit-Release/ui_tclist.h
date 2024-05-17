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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tclist
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QListWidget *teacherListWidget;
    QListWidget *courseListWidget;
    QPushButton *backButton;
    QLabel *label_3;
    QLabel *label_4;
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
        frame->setGeometry(QRect(20, 80, 381, 631));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 361, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(13);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(55, 122, 183);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 10, 81, 81));
        QFont font1;
        font1.setPointSize(1);
        label_2->setFont(font1);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/wvsu_logo.png")));
        label_2->setScaledContents(true);
        teacherListWidget = new QListWidget(frame);
        teacherListWidget->setObjectName("teacherListWidget");
        teacherListWidget->setGeometry(QRect(20, 190, 191, 361));
        QFont font2;
        font2.setUnderline(false);
        teacherListWidget->setFont(font2);
        teacherListWidget->setFocusPolicy(Qt::StrongFocus);
        teacherListWidget->setLayoutDirection(Qt::LeftToRight);
        teacherListWidget->setAutoFillBackground(true);
        teacherListWidget->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        teacherListWidget->setFrameShape(QFrame::Box);
        teacherListWidget->setFrameShadow(QFrame::Plain);
        teacherListWidget->setDragDropMode(QAbstractItemView::InternalMove);
        teacherListWidget->setAlternatingRowColors(true);
        teacherListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        teacherListWidget->setTextElideMode(Qt::ElideNone);
        teacherListWidget->setFlow(QListView::TopToBottom);
        teacherListWidget->setProperty("isWrapping", QVariant(true));
        teacherListWidget->setUniformItemSizes(true);
        teacherListWidget->setWordWrap(false);
        teacherListWidget->setSortingEnabled(true);
        courseListWidget = new QListWidget(frame);
        courseListWidget->setObjectName("courseListWidget");
        courseListWidget->setGeometry(QRect(230, 190, 141, 361));
        courseListWidget->setFont(font2);
        courseListWidget->setFocusPolicy(Qt::StrongFocus);
        courseListWidget->setLayoutDirection(Qt::LeftToRight);
        courseListWidget->setAutoFillBackground(true);
        courseListWidget->setStyleSheet(QString::fromUtf8("color:black;\n"
"  border-bottom: 1px solid #ccc; /* Border between rows */\n"
" border-right: 1px solid #ccc; /* Border between rows */\n"
" border-top: 1px solid #ccc; \n"
" border-left: 1px solid #ccc; /* Border between rows */\n"
"    padding: 5px; /* Padding for each item */\n"
"    text-align: center;"));
        courseListWidget->setFrameShape(QFrame::Box);
        courseListWidget->setFrameShadow(QFrame::Plain);
        courseListWidget->setDragDropMode(QAbstractItemView::InternalMove);
        courseListWidget->setAlternatingRowColors(true);
        courseListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        courseListWidget->setTextElideMode(Qt::ElideNone);
        courseListWidget->setFlow(QListView::TopToBottom);
        courseListWidget->setProperty("isWrapping", QVariant(true));
        courseListWidget->setUniformItemSizes(true);
        courseListWidget->setWordWrap(true);
        courseListWidget->setSortingEnabled(true);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(40, 660, 83, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 240, 81, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(false);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color:#000000;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 240, 63, 20));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color:#000000;"));
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
        label->setText(QCoreApplication::translate("tclist", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_2->setText(QString());
        backButton->setText(QCoreApplication::translate("tclist", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("tclist", "Teacher", nullptr));
        label_4->setText(QCoreApplication::translate("tclist", "Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tclist: public Ui_tclist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCLIST_H
