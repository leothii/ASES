/********************************************************************************
** Form generated from reading UI file 'tdashb.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDASHB_H
#define UI_TDASHB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tdashb
{
public:
    QWidget *centralwidget;
    QLabel *StudentName;
    QLabel *Welcome;
    QFrame *frame;
    QGroupBox *groupBox_2;
    QProgressBar *progressBar;
    QLabel *label_6;
    QLabel *AcadYear_2;
    QLabel *AcadYear;
    QLabel *label;
    QLabel *StatusBar;
    QLabel *label_4;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *line;
    QPushButton *logoutButton;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *line_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tdashb)
    {
        if (Tdashb->objectName().isEmpty())
            Tdashb->setObjectName("Tdashb");
        Tdashb->resize(424, 800);
        centralwidget = new QWidget(Tdashb);
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
        groupBox_2->setGeometry(QRect(10, 210, 401, 171));
        groupBox_2->setTabletTracking(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(150, 140, 211, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Coolvetica")});
        progressBar->setFont(font2);
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
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 140, 111, 20));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear_2 = new QLabel(groupBox_2);
        AcadYear_2->setObjectName("AcadYear_2");
        AcadYear_2->setGeometry(QRect(20, 40, 231, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Product Sans Light")});
        font3.setPointSize(18);
        font3.setBold(false);
        AcadYear_2->setFont(font3);
        AcadYear_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear_2->setWordWrap(true);
        AcadYear = new QLabel(groupBox_2);
        AcadYear->setObjectName("AcadYear");
        AcadYear->setGeometry(QRect(20, 10, 361, 31));
        AcadYear->setFont(font3);
        AcadYear->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear->setWordWrap(true);
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 90, 121, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Product Sans")});
        font4.setPointSize(12);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: green;"));
        StatusBar = new QLabel(groupBox_2);
        StatusBar->setObjectName("StatusBar");
        StatusBar->setGeometry(QRect(20, 90, 191, 33));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Product Sans")});
        font5.setPointSize(13);
        font5.setBold(true);
        StatusBar->setFont(font5);
        StatusBar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 90, 16, 41));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: BLACK;"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 90, 121, 41));
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: red;"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 70, 401, 121));
        groupBox->setTabletTracking(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(30, 20, 81, 81));
        QPalette palette;
        QBrush brush(QColor(218, 218, 218, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_2->setPalette(palette);
        QFont font6;
        font6.setKerning(true);
        font6.setStyleStrategy(QFont::PreferDefault);
        font6.setHintingPreference(QFont::PreferDefaultHinting);
        label_2->setFont(font6);
        label_2->setMouseTracking(true);
        label_2->setAcceptDrops(true);
        label_2->setToolTipDuration(-1);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("Qlabel{\n"
"background-color: rgba(0, 0, 0, 0);\n"
"}"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ProfileIcon.png")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(true);
        label_2->setOpenExternalLinks(true);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(140, 20, 63, 20));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Product Sans")});
        font7.setPointSize(10);
        label_10->setFont(font7);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(140, 40, 63, 20));
        label_11->setFont(font7);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 190, 401, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        logoutButton = new QPushButton(frame);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(310, 660, 83, 29));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QFont font8;
        font8.setPointSize(1);
        label_7->setFont(font8);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/wvsu_logo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 10, 211, 31));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Times New Roman")});
        font9.setPointSize(8);
        font9.setBold(false);
        label_8->setFont(font9);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_8->setIndent(0);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 40, 101, 16));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Times New Roman")});
        font10.setPointSize(8);
        font10.setBold(false);
        font10.setItalic(true);
        label_9->setFont(font10);
        label_9->setAcceptDrops(false);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setWordWrap(true);
        label_9->setIndent(0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 20, 121, 20));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Product Sans Black")});
        font11.setPointSize(11);
        label_5->setFont(font11);
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
        Tdashb->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tdashb);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Tdashb->setMenuBar(menubar);
        statusbar = new QStatusBar(Tdashb);
        statusbar->setObjectName("statusbar");
        Tdashb->setStatusBar(statusbar);

        retranslateUi(Tdashb);

        QMetaObject::connectSlotsByName(Tdashb);
    } // setupUi

    void retranslateUi(QMainWindow *Tdashb)
    {
        Tdashb->setWindowTitle(QCoreApplication::translate("Tdashb", "MainWindow", nullptr));
        StudentName->setText(QCoreApplication::translate("Tdashb", "Name", nullptr));
        Welcome->setText(QCoreApplication::translate("Tdashb", "Welcome,", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Tdashb", "Rating Progress:", nullptr));
        AcadYear_2->setText(QCoreApplication::translate("Tdashb", "<html><head/><body><p>Second Semester</p></body></html>", nullptr));
        AcadYear->setText(QCoreApplication::translate("Tdashb", "<html><head/><body><p>Academic Year: 2024-2025<br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Tdashb", "ONGOING", nullptr));
        StatusBar->setText(QCoreApplication::translate("Tdashb", "Evaluation Status:", nullptr));
        label_4->setText(QCoreApplication::translate("Tdashb", "/", nullptr));
        label_3->setText(QCoreApplication::translate("Tdashb", "ENDED", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QString());
        label_10->setText(QCoreApplication::translate("Tdashb", "Name:", nullptr));
        label_11->setText(QCoreApplication::translate("Tdashb", "ID #:", nullptr));
        logoutButton->setText(QCoreApplication::translate("Tdashb", "Log Out", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Tdashb", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("Tdashb", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("Tdashb", "DASHBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tdashb: public Ui_Tdashb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDASHB_H
