/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_Signup
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *lineEdit_Value_4;
    QLineEdit *lineEdit_Value_2;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_Value_3;
    QLineEdit *lineEdit_Value_5;
    QFrame *frame;
    QLineEdit *lineEdit_Value_6;
    QLabel *label_7;
    QPushButton *SignButton;
    QPushButton *backButton;
    QLineEdit *lineEdit_Value_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(424, 800);
        Signup->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Signup);
        centralwidget->setObjectName("centralwidget");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 210, 131, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 150, 131, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 270, 111, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_Value_4 = new QLineEdit(centralwidget);
        lineEdit_Value_4->setObjectName("lineEdit_Value_4");
        lineEdit_Value_4->setGeometry(QRect(110, 350, 191, 31));
        lineEdit_Value_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        lineEdit_Value_2 = new QLineEdit(centralwidget);
        lineEdit_Value_2->setObjectName("lineEdit_Value_2");
        lineEdit_Value_2->setGeometry(QRect(110, 230, 191, 31));
        lineEdit_Value_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(130, 110, 231, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 330, 131, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 390, 131, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_Value_3 = new QLineEdit(centralwidget);
        lineEdit_Value_3->setObjectName("lineEdit_Value_3");
        lineEdit_Value_3->setGeometry(QRect(110, 290, 191, 31));
        lineEdit_Value_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        lineEdit_Value_5 = new QLineEdit(centralwidget);
        lineEdit_Value_5->setObjectName("lineEdit_Value_5");
        lineEdit_Value_5->setGeometry(QRect(110, 410, 191, 31));
        lineEdit_Value_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        lineEdit_Value_5->setEchoMode(QLineEdit::Password);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 90, 291, 501));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 8px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_Value_6 = new QLineEdit(frame);
        lineEdit_Value_6->setObjectName("lineEdit_Value_6");
        lineEdit_Value_6->setGeometry(QRect(50, 380, 191, 31));
        lineEdit_Value_6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 360, 131, 16));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        SignButton = new QPushButton(frame);
        SignButton->setObjectName("SignButton");
        SignButton->setGeometry(QRect(170, 440, 71, 29));
        SignButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(50, 440, 71, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        lineEdit_Value_1 = new QLineEdit(frame);
        lineEdit_Value_1->setObjectName("lineEdit_Value_1");
        lineEdit_Value_1->setGeometry(QRect(50, 80, 191, 31));
        lineEdit_Value_1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        Signup->setCentralWidget(centralwidget);
        frame->raise();
        label_4->raise();
        label_8->raise();
        label_3->raise();
        lineEdit_Value_4->raise();
        lineEdit_Value_2->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_Value_3->raise();
        lineEdit_Value_5->raise();
        label_9->raise();
        menubar = new QMenuBar(Signup);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Signup->setMenuBar(menubar);
        statusbar = new QStatusBar(Signup);
        statusbar->setObjectName("statusbar");
        Signup->setStatusBar(statusbar);

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QMainWindow *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "Student Number", nullptr));
        label_8->setText(QCoreApplication::translate("Signup", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Firstname", nullptr));
        label_9->setText(QCoreApplication::translate("Signup", "Create An Account", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Lastname", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "Confirm Password", nullptr));
        SignButton->setText(QCoreApplication::translate("Signup", "Sign Up", nullptr));
        backButton->setText(QCoreApplication::translate("Signup", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
