/********************************************************************************
** Form generated from reading UI file 'form5.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM5_H
#define UI_FORM5_H

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

class Ui_Form5
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *submitButton;
    QPushButton *backButton;
    QFrame *frame_2;
    QLabel *label;
    QFrame *frame_7;
    QTextEdit *textEdit;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Form5)
    {
        if (Form5->objectName().isEmpty())
            Form5->setObjectName("Form5");
        Form5->resize(424, 800);
        centralwidget = new QWidget(Form5);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -20, 441, 791));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 8px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        submitButton = new QPushButton(frame);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(330, 470, 71, 29));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(230, 470, 71, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-20, 20, 461, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 191, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Product Sans Black")});
        font.setPointSize(11);
        label->setFont(font);
        label->setTabletTracking(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 140, 401, 301));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);\n"
"border-radius: 15px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame_7);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 20, 331, 241));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 241, 41));
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Form5->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Form5);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Form5->setMenuBar(menubar);
        statusbar = new QStatusBar(Form5);
        statusbar->setObjectName("statusbar");
        Form5->setStatusBar(statusbar);

        retranslateUi(Form5);

        QMetaObject::connectSlotsByName(Form5);
    } // setupUi

    void retranslateUi(QMainWindow *Form5)
    {
        Form5->setWindowTitle(QCoreApplication::translate("Form5", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("Form5", "Submit", nullptr));
        backButton->setText(QCoreApplication::translate("Form5", "Back", nullptr));
        label->setText(QCoreApplication::translate("Form5", "FEEDBACK", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("Form5", "Write a brief comment about your teacher...", nullptr));
        label_2->setText(QCoreApplication::translate("Form5", "Remarks/Comments/Suggestions: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form5: public Ui_Form5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM5_H
