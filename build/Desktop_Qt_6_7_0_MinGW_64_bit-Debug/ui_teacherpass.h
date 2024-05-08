/********************************************************************************
** Form generated from reading UI file 'teacherpass.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERPASS_H
#define UI_TEACHERPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacherpass
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_2;
    QFrame *frame;
    QPushButton *resetButton;
    QPushButton *backButton;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *Emessage;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Teacherpass)
    {
        if (Teacherpass->objectName().isEmpty())
            Teacherpass->setObjectName("Teacherpass");
        Teacherpass->resize(424, 800);
        centralwidget = new QWidget(Teacherpass);
        centralwidget->setObjectName("centralwidget");
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 400, 191, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 190, 291, 401));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 8px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        resetButton = new QPushButton(frame);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(190, 330, 83, 29));
        resetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 330, 83, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 70, 81, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 190, 161, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Emessage = new QLabel(frame);
        Emessage->setObjectName("Emessage");
        Emessage->setGeometry(QRect(120, 40, 63, 20));
        Emessage->setStyleSheet(QString::fromUtf8("color: red;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 250, 161, 21));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(60, 270, 191, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, -60, 81, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(60, 150, 91, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 130, 81, 20));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(160, 160, 81, 16));
        QFont font;
        font.setPointSize(8);
        font.setItalic(true);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: #377ab7;"));
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(120, 280, 191, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        Teacherpass->setCentralWidget(centralwidget);
        frame->raise();
        lineEdit_2->raise();
        lineEdit_1->raise();
        menubar = new QMenuBar(Teacherpass);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Teacherpass->setMenuBar(menubar);
        statusbar = new QStatusBar(Teacherpass);
        statusbar->setObjectName("statusbar");
        Teacherpass->setStatusBar(statusbar);

        retranslateUi(Teacherpass);

        QMetaObject::connectSlotsByName(Teacherpass);
    } // setupUi

    void retranslateUi(QMainWindow *Teacherpass)
    {
        Teacherpass->setWindowTitle(QCoreApplication::translate("Teacherpass", "MainWindow", nullptr));
        resetButton->setText(QCoreApplication::translate("Teacherpass", "Reset", nullptr));
        backButton->setText(QCoreApplication::translate("Teacherpass", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("Teacherpass", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("Teacherpass", "New Password", nullptr));
        Emessage->setText(QString());
        label_7->setText(QCoreApplication::translate("Teacherpass", "Confirm New Password", nullptr));
        label_5->setText(QCoreApplication::translate("Teacherpass", "Email", nullptr));
        label_8->setText(QCoreApplication::translate("Teacherpass", "Verification", nullptr));
        label_9->setText(QCoreApplication::translate("Teacherpass", "Resend OTP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacherpass: public Ui_Teacherpass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERPASS_H
