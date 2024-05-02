/********************************************************************************
** Form generated from reading UI file 'studentlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLG_H
#define UI_STUDENTLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentLg
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_1;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QFrame *frame;
    QLabel *label;
    QPushButton *signupButton;
    QCheckBox *checkBox;
    QLabel *label_4;
    QPushButton *loginButton;
    QPushButton *backButton;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *Emessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentLg)
    {
        if (StudentLg->objectName().isEmpty())
            StudentLg->setObjectName("StudentLg");
        StudentLg->resize(424, 800);
        centralwidget = new QWidget(StudentLg);
        centralwidget->setObjectName("centralwidget");
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(120, 260, 191, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 380, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(120, 400, 191, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 330, 191, 31));
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
        frame->setGeometry(QRect(60, 170, 301, 431));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 8px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 350, 111, 31));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        signupButton = new QPushButton(frame);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(170, 380, 83, 29));
        signupButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(60, 270, 181, 21));
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("/* QCheckBox base style */\n"
"color: rgb(0, 0, 0);\n"
"QCheckBox {\n"
"    spacing: 4px; /* Space between the checkbox and the text */\n"
"}\n"
"\n"
"/* Style for the checkbox indicator */\n"
"QCheckBox::indicator {\n"
"    width: 16px; /* Width of the checkbox indicator */\n"
"    height: 16px; /* Height of the checkbox indicator */\n"
"}\n"
"\n"
"/* Style for when the QCheckBox is checked */\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #377ab7; /* Blue background color when checked */\n"
"    border: 1px solid #377ab7; /* Border color matches the blue */\n"
"    border-radius: 4px; /* Rounded corners */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    border: 1px solid gray; /* Border color for unchecked state */\n"
"    border-radius: 4px; /* Rounded corners */\n"
"}\n"
"\n"
"/* Style for the checkmark when QCheckBox is checked */\n"
"QCheckBox::indicator:checked::after {\n"
"    content: \"\"; /* Required for the checkmark */\n"
"    background-color: #f2f2f2; /* White checkmark col"
                        "or */\n"
"    width: 8px; /* Width of the checkmark */\n"
"    height: 8px; /* Height of the checkmark */\n"
"    border-radius: 2px; /* Rounded corners for the checkmark */\n"
"    position: absolute; /* Position the checkmark */\n"
"    top: 4px; /* Positioning adjustment */\n"
"    left: 4px; /* Positioning adjustment */\n"
"}\n"
""));
        checkBox->setChecked(true);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 300, 111, 16));
        QFont font1;
        font1.setPointSize(7);
        font1.setItalic(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(55, 122, 183);\n"
""));
        label_4->setWordWrap(true);
        label_4->setOpenExternalLinks(true);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(170, 300, 83, 29));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(60, 380, 83, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        label_1 = new QLabel(frame);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(60, 70, 63, 20));
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 161, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Emessage = new QLabel(frame);
        Emessage->setObjectName("Emessage");
        Emessage->setGeometry(QRect(60, 30, 191, 21));
        QFont font2;
        font2.setPointSize(9);
        font2.setItalic(true);
        Emessage->setFont(font2);
        Emessage->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));
        Emessage->setAlignment(Qt::AlignCenter);
        StudentLg->setCentralWidget(centralwidget);
        frame->raise();
        lineEdit_1->raise();
        label_3->raise();
        lineEdit_3->raise();
        lineEdit_2->raise();
        menubar = new QMenuBar(StudentLg);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        StudentLg->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentLg);
        statusbar->setObjectName("statusbar");
        StudentLg->setStatusBar(statusbar);

        retranslateUi(StudentLg);

        QMetaObject::connectSlotsByName(StudentLg);
    } // setupUi

    void retranslateUi(QMainWindow *StudentLg)
    {
        StudentLg->setWindowTitle(QCoreApplication::translate("StudentLg", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("StudentLg", "Password", nullptr));
        label->setText(QCoreApplication::translate("StudentLg", "No Account Yet?", nullptr));
        signupButton->setText(QCoreApplication::translate("StudentLg", "Sign Up", nullptr));
        checkBox->setText(QCoreApplication::translate("StudentLg", "Remember me", nullptr));
        label_4->setText(QCoreApplication::translate("StudentLg", "Forgot Password", nullptr));
        loginButton->setText(QCoreApplication::translate("StudentLg", "Log in", nullptr));
        backButton->setText(QCoreApplication::translate("StudentLg", "Back", nullptr));
        label_1->setText(QCoreApplication::translate("StudentLg", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("StudentLg", "Student Number", nullptr));
        Emessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudentLg: public Ui_StudentLg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLG_H
