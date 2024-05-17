/********************************************************************************
** Form generated from reading UI file 'index.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_H
#define UI_INDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Index
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QFrame *frame;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *nextButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Index)
    {
        if (Index->objectName().isEmpty())
            Index->setObjectName("Index");
        Index->resize(424, 800);
        Index->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Index);
        centralwidget->setObjectName("centralwidget");
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(200, 580, 83, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 60, 381, 601));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 160, 341, 331));
        QFont font;
        font.setFamilies({QString::fromUtf8("Product Sans")});
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("/* QTextEdit base style */\n"
"QTextEdit {\n"
"    background-color: #e0e0e0; /* Slightly darker than #f2f2f2 */\n"
"    color: black; /* Text color */\n"
"    border: 1px solid #d0d0d0; /* Border color */\n"
"    padding: 4px; /* Padding inside QTextEdit */\n"
"    border-radius: 10px; /* Rounded corners */\n"
"}\n"
"\n"
"/* Style for the scrollbar */\n"
"QScrollBar:vertical {\n"
"    border: none; /* No border around scrollbar */\n"
"    background-color: #d0d0d0; /* A little darker than the background color */\n"
"    width: 12px; /* Width of the scrollbar */\n"
"    margin: 0; /* No margin */\n"
"}\n"
"\n"
"/* Handle style for the vertical scrollbar */\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #b0b0b0; /* Handle color, darker than scrollbar */\n"
"    border-radius: 6px; /* Rounded corners */\n"
"    min-height: 20px; /* Minimum height of the handle */\n"
"}\n"
"\n"
"/* Handle style when hovering over the scrollbar */\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #a0a0"
                        "a0; /* Slightly darker handle when hovered */\n"
"}\n"
"\n"
"/* Style for the up and down buttons of the scrollbar */\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    border: none; /* No border */\n"
"    background-color: transparent; /* Transparent background */\n"
"    height: 0; /* No height */\n"
"}\n"
"\n"
"/* Style for the up and down arrows */\n"
"QScrollBar::add-line:vertical:hover,\n"
"QScrollBar::sub-line:vertical:hover {\n"
"    background: transparent; /* Transparent background on hover */\n"
"}\n"
"\n"
"/* Style for the empty space around the handle */\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {\n"
"    background-color: #d0d0d0; /* Background color to match the scrollbar */\n"
"}\n"
""));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 361, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(13);
        font1.setBold(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(55, 122, 183);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 10, 81, 81));
        QFont font2;
        font2.setPointSize(1);
        label_2->setFont(font2);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/wvsu_logo.png")));
        label_2->setScaledContents(true);
        nextButton = new QPushButton(frame);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(280, 520, 81, 29));
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        Index->setCentralWidget(centralwidget);
        frame->raise();
        backButton->raise();
        menubar = new QMenuBar(Index);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Index->setMenuBar(menubar);
        statusbar = new QStatusBar(Index);
        statusbar->setObjectName("statusbar");
        Index->setStatusBar(statusbar);

        retranslateUi(Index);

        QMetaObject::connectSlotsByName(Index);
    } // setupUi

    void retranslateUi(QMainWindow *Index)
    {
        Index->setWindowTitle(QCoreApplication::translate("Index", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("Index", "Back", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Index", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Product Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\"><a name=\"docs-internal-guid-22bf4921-7fff-80af-7d44-d5707123632d\"></a><span style=\" font-family:'Roboto','sans-serif'; font-size:12pt; font-weight:700; color:#202124; background-color:transparent;\">D</span><span style=\" font-family:'Roboto','sans-serif'; font-size:12pt; font-weight:700; color:#202124; background-color:transparent;\">ear Students,</span></p>\n"
"<p style=\" m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI';\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\"><span style=\" font-family:'Roboto','sans-serif'; font-size:10.5pt; color:#202124; background-color:transparent;\">We would like to hear feedback from you on how teachers are handling classes. Please be honest in evaluating and see to it that you have evaluated ALL your subject teachers in ALL COURSES they handle. This means that a teacher can be evaluated more than once by you.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI';\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138"
                        "%;\"><span style=\" font-family:'Roboto','sans-serif'; font-size:10.5pt; color:#202124; background-color:transparent;\">Although filling out your name is required, rest assured that your identity will be hidden from your teachers. This information will allow us to monitor who among you have evaluated the teachers. The results are managed by the Office of Instruction and can be viewed by the Dean and the Department/Division Chair with your email address and name hidden from them. The\302\240 data gathered will be treated with utmost confidentiality.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI';\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:138%;\"><span style=\" font-family:'Roboto','sans-serif'; font-size:10.5pt; color:#202124; background-color:transparent;\">Thank you for you"
                        "r honest assessment and comments.</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Index", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_2->setText(QString());
        nextButton->setText(QCoreApplication::translate("Index", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index: public Ui_Index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_H
