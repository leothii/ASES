/********************************************************************************
** Form generated from reading UI file 'adashb.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADASHB_H
#define UI_ADASHB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adashb
{
public:
    QWidget *centralwidget;
    QLabel *StudentName;
    QLabel *Welcome;
    QFrame *frame;
    QGroupBox *groupBox_2;
    QLineEdit *saddEdit;
    QLabel *label_13;
    QLabel *label_1;
    QLineEdit *taddEdit;
    QFrame *frame_2;
    QLabel *label_14;
    QPushButton *saddButton;
    QPushButton *taddButton;
    QPushButton *viewrButton_2;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *label_2;
    QLineEdit *taddEdit_2;
    QLineEdit *taddEdit_3;
    QLabel *label_10;
    QGroupBox *groupBox;
    QLabel *AcadYear_2;
    QLabel *AcadYear;
    QLabel *StatusBar;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QFrame *line;
    QPushButton *backButton;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *line_3;
    QProgressBar *progressBar;
    QFrame *line_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Adashb)
    {
        if (Adashb->objectName().isEmpty())
            Adashb->setObjectName("Adashb");
        Adashb->resize(424, 800);
        centralwidget = new QWidget(Adashb);
        centralwidget->setObjectName("centralwidget");
        StudentName = new QLabel(centralwidget);
        StudentName->setObjectName("StudentName");
        StudentName->setGeometry(QRect(100, 80, 231, 33));
        QFont font;
        font.setFamilies({QString::fromUtf8("Product Sans")});
        font.setPointSize(15);
        font.setUnderline(false);
        StudentName->setFont(font);
        StudentName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Welcome = new QLabel(centralwidget);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(10, 80, 111, 33));
        Welcome->setSizeIncrement(QSize(6, 5));
        Welcome->setBaseSize(QSize(9, 10));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Product Sans")});
        font1.setPointSize(15);
        Welcome->setFont(font1);
        Welcome->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 511, 991));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 280, 401, 381));
        groupBox_2->setTabletTracking(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        saddEdit = new QLineEdit(groupBox_2);
        saddEdit->setObjectName("saddEdit");
        saddEdit->setGeometry(QRect(40, 220, 211, 31));
        saddEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 200, 161, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_1 = new QLabel(groupBox_2);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(40, 50, 63, 20));
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        taddEdit = new QLineEdit(groupBox_2);
        taddEdit->setObjectName("taddEdit");
        taddEdit->setGeometry(QRect(40, 70, 211, 31));
        taddEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 401, 31));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);\n"
"border-radius: 8px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 10, 141, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Product Sans Black")});
        font2.setPointSize(11);
        label_14->setFont(font2);
        label_14->setTabletTracking(false);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        saddButton = new QPushButton(groupBox_2);
        saddButton->setObjectName("saddButton");
        saddButton->setGeometry(QRect(270, 220, 83, 29));
        saddButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        taddButton = new QPushButton(groupBox_2);
        taddButton->setObjectName("taddButton");
        taddButton->setGeometry(QRect(280, 130, 83, 29));
        taddButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        viewrButton_2 = new QPushButton(groupBox_2);
        viewrButton_2->setObjectName("viewrButton_2");
        viewrButton_2->setGeometry(QRect(130, 260, 121, 31));
        viewrButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 175, 0);  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        line_5 = new QFrame(groupBox_2);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(160, 310, 3, 61));
        line_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(groupBox_2);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(120, 290, 3, 61));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 110, 63, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        taddEdit_2 = new QLineEdit(groupBox_2);
        taddEdit_2->setObjectName("taddEdit_2");
        taddEdit_2->setGeometry(QRect(40, 130, 211, 31));
        taddEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        taddEdit_3 = new QLineEdit(groupBox_2);
        taddEdit_3->setObjectName("taddEdit_3");
        taddEdit_3->setGeometry(QRect(270, 70, 101, 31));
        taddEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 50, 63, 20));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 70, 401, 191));
        groupBox->setTabletTracking(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        AcadYear_2 = new QLabel(groupBox);
        AcadYear_2->setObjectName("AcadYear_2");
        AcadYear_2->setGeometry(QRect(10, 10, 231, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Product Sans Light")});
        font3.setPointSize(18);
        font3.setBold(false);
        AcadYear_2->setFont(font3);
        AcadYear_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear_2->setWordWrap(true);
        AcadYear = new QLabel(groupBox);
        AcadYear->setObjectName("AcadYear");
        AcadYear->setGeometry(QRect(10, 40, 361, 31));
        AcadYear->setFont(font3);
        AcadYear->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear->setWordWrap(true);
        StatusBar = new QLabel(groupBox);
        StatusBar->setObjectName("StatusBar");
        StatusBar->setGeometry(QRect(10, 100, 191, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Product Sans")});
        font4.setPointSize(13);
        font4.setBold(true);
        StatusBar->setFont(font4);
        StatusBar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 90, 121, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Product Sans")});
        font5.setPointSize(12);
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("color: red;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 90, 121, 41));
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: green;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 90, 16, 41));
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("color: BLACK;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 150, 111, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Coolvetica")});
        label_6->setFont(font6);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 260, 401, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 680, 83, 29));
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
        QFont font7;
        font7.setPointSize(1);
        label_7->setFont(font7);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/wvsu_logo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 10, 211, 31));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Times New Roman")});
        font8.setPointSize(8);
        font8.setBold(false);
        label_8->setFont(font8);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_8->setIndent(0);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 40, 101, 16));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Times New Roman")});
        font9.setPointSize(8);
        font9.setBold(false);
        font9.setItalic(true);
        label_9->setFont(font9);
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
        progressBar = new QProgressBar(frame);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(140, 220, 231, 21));
        progressBar->setFont(font6);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border-radius: 3px;               /* Border radius to match the other elements */\n"
"    text-align: center;               /* Center align the text */\n"
"    color: rgb(0, 0, 0);                   /* Text color (white) */\n"
"    background-color: #d4d4d4;        /* Background color of the QProgressBar (neutral gray) */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #337ab7;        /* Progress bar color (blue) matching QPushButton */\n"
"    border-radius: 3px;               /* Rounded corners for the progress bar */\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk:hover {\n"
"    background-color: #285e8e;        /* Progress bar color on hover */\n"
"}\n"
""));
        progressBar->setValue(15);
        line_4 = new QFrame(frame);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(10, 580, 401, 20));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        Adashb->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Adashb);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Adashb->setMenuBar(menubar);
        statusbar = new QStatusBar(Adashb);
        statusbar->setObjectName("statusbar");
        Adashb->setStatusBar(statusbar);

        retranslateUi(Adashb);

        QMetaObject::connectSlotsByName(Adashb);
    } // setupUi

    void retranslateUi(QMainWindow *Adashb)
    {
        Adashb->setWindowTitle(QCoreApplication::translate("Adashb", "MainWindow", nullptr));
        StudentName->setText(QCoreApplication::translate("Adashb", "Name", nullptr));
        Welcome->setText(QCoreApplication::translate("Adashb", "Welcome,", nullptr));
        groupBox_2->setTitle(QString());
        saddEdit->setPlaceholderText(QCoreApplication::translate("Adashb", "Eg. MTH101", nullptr));
        label_13->setText(QCoreApplication::translate("Adashb", "Subject", nullptr));
        label_1->setText(QCoreApplication::translate("Adashb", "Email", nullptr));
        taddEdit->setText(QString());
        taddEdit->setPlaceholderText(QCoreApplication::translate("Adashb", "*****@wvsu.edu.ph", nullptr));
        label_14->setText(QCoreApplication::translate("Adashb", "ADD FACULTY", nullptr));
        saddButton->setText(QCoreApplication::translate("Adashb", "Add", nullptr));
        taddButton->setText(QCoreApplication::translate("Adashb", "Add", nullptr));
        viewrButton_2->setText(QCoreApplication::translate("Adashb", "View Curent List", nullptr));
        label_2->setText(QCoreApplication::translate("Adashb", "Name", nullptr));
        taddEdit_2->setPlaceholderText(QCoreApplication::translate("Adashb", "Eg. Juan Dela Cruz", nullptr));
        taddEdit_3->setPlaceholderText(QString());
        label_10->setText(QCoreApplication::translate("Adashb", "Password", nullptr));
        groupBox->setTitle(QString());
        AcadYear_2->setText(QCoreApplication::translate("Adashb", "<html><head/><body><p>Second Semester</p></body></html>", nullptr));
        AcadYear->setText(QCoreApplication::translate("Adashb", "<html><head/><body><p>Academic Year: 2024-2025<br/></p></body></html>", nullptr));
        StatusBar->setText(QCoreApplication::translate("Adashb", "Evaluation Status:", nullptr));
        label_3->setText(QCoreApplication::translate("Adashb", "ENDED", nullptr));
        label->setText(QCoreApplication::translate("Adashb", "ONGOING", nullptr));
        label_4->setText(QCoreApplication::translate("Adashb", "/", nullptr));
        label_6->setText(QCoreApplication::translate("Adashb", "Rating Progress:", nullptr));
        backButton->setText(QCoreApplication::translate("Adashb", "Back", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Adashb", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("Adashb", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("Adashb", "DASHBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adashb: public Ui_Adashb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADASHB_H
