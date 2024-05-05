/********************************************************************************
** Form generated from reading UI file 'teacherlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERLG_H
#define UI_TEACHERLG_H

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

class Ui_TeacherLg
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QCheckBox *checkBox;
    QPushButton *loginButton;
    QPushButton *backButton;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *Emessage;
    QPushButton *PassButton;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TeacherLg)
    {
        if (TeacherLg->objectName().isEmpty())
            TeacherLg->setObjectName("TeacherLg");
        TeacherLg->resize(424, 800);
        centralwidget = new QWidget(TeacherLg);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 220, 291, 401));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 8px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(60, 200, 181, 21));
        QFont font;
        font.setPointSize(8);
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
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(160, 260, 83, 29));
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
        backButton->setGeometry(QRect(160, 310, 83, 29));
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
        label_1->setGeometry(QRect(60, 70, 81, 20));
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 161, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Emessage = new QLabel(frame);
        Emessage->setObjectName("Emessage");
        Emessage->setGeometry(QRect(120, 40, 63, 20));
        Emessage->setStyleSheet(QString::fromUtf8("color: red;"));
        PassButton = new QPushButton(frame);
        PassButton->setObjectName("PassButton");
        PassButton->setGeometry(QRect(150, 140, 111, 21));
        QFont font1;
        font1.setPointSize(8);
        font1.setItalic(true);
        PassButton->setFont(font1);
        PassButton->setStyleSheet(QString::fromUtf8("color:#377ab7;\n"
"border: none; \n"
"background-color: transparent; "));
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(120, 310, 191, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 380, 191, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        TeacherLg->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TeacherLg);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        TeacherLg->setMenuBar(menubar);
        statusbar = new QStatusBar(TeacherLg);
        statusbar->setObjectName("statusbar");
        TeacherLg->setStatusBar(statusbar);

        retranslateUi(TeacherLg);

        QMetaObject::connectSlotsByName(TeacherLg);
    } // setupUi

    void retranslateUi(QMainWindow *TeacherLg)
    {
        TeacherLg->setWindowTitle(QCoreApplication::translate("TeacherLg", "MainWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("TeacherLg", "Remember me", nullptr));
        loginButton->setText(QCoreApplication::translate("TeacherLg", "Log in", nullptr));
        backButton->setText(QCoreApplication::translate("TeacherLg", "Back", nullptr));
        label_1->setText(QCoreApplication::translate("TeacherLg", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("TeacherLg", "Password", nullptr));
        Emessage->setText(QString());
        PassButton->setText(QCoreApplication::translate("TeacherLg", "Forgot Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherLg: public Ui_TeacherLg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERLG_H
