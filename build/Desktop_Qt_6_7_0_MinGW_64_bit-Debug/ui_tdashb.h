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
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *pemail;
    QLabel *pname;
    QLabel *wName_2;
    QLabel *label_12;
    QPushButton *logoutButton;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *line_3;
    QGroupBox *groupBox_2;
    QProgressBar *progressBar;
    QLabel *label_6;
    QLabel *AcadYear_2;
    QLabel *AcadYear;
    QLabel *label;
    QLabel *StatusBar;
    QLabel *label_4;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QLabel *wName_6;
    QLabel *rate;
    QFrame *frame_2;
    QLabel *label_22;
    QLabel *label_19;
    QLabel *label_24;
    QLabel *label_20;
    QGroupBox *groupBox_4;
    QPushButton *viewButton;
    QLabel *wName_7;
    QLabel *wName_8;
    QLabel *wName_9;
    QLabel *wName_10;
    QLabel *wName_11;
    QLabel *wName_12;
    QLabel *cA;
    QLabel *cB;
    QLabel *cC;
    QLabel *cD;
    QFrame *line;
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
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 250, 401, 91));
        groupBox->setTabletTracking(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(20, 10, 71, 71));
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
        QFont font2;
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferDefault);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        label_2->setFont(font2);
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
        pemail = new QLabel(groupBox);
        pemail->setObjectName("pemail");
        pemail->setGeometry(QRect(170, 50, 211, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Product Sans")});
        font3.setPointSize(10);
        pemail->setFont(font3);
        pemail->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pname = new QLabel(groupBox);
        pname->setObjectName("pname");
        pname->setGeometry(QRect(170, 20, 221, 33));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Product Sans")});
        font4.setPointSize(10);
        font4.setUnderline(false);
        pname->setFont(font4);
        pname->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        wName_2 = new QLabel(groupBox);
        wName_2->setObjectName("wName_2");
        wName_2->setGeometry(QRect(120, 20, 51, 33));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Product Sans")});
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setUnderline(false);
        wName_2->setFont(font5);
        wName_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(120, 50, 51, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Product Sans")});
        font6.setPointSize(10);
        font6.setBold(true);
        label_12->setFont(font6);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
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
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Product Sans Black")});
        font10.setPointSize(11);
        label_5->setFont(font10);
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
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 70, 401, 171));
        groupBox_2->setTabletTracking(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(150, 140, 211, 21));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Coolvetica")});
        progressBar->setFont(font11);
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
        label_6->setFont(font11);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear_2 = new QLabel(groupBox_2);
        AcadYear_2->setObjectName("AcadYear_2");
        AcadYear_2->setGeometry(QRect(20, 40, 231, 31));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Product Sans Light")});
        font12.setPointSize(18);
        font12.setBold(false);
        AcadYear_2->setFont(font12);
        AcadYear_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear_2->setWordWrap(true);
        AcadYear = new QLabel(groupBox_2);
        AcadYear->setObjectName("AcadYear");
        AcadYear->setGeometry(QRect(20, 10, 361, 31));
        AcadYear->setFont(font12);
        AcadYear->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear->setWordWrap(true);
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 90, 111, 41));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Product Sans")});
        font13.setPointSize(12);
        label->setFont(font13);
        label->setStyleSheet(QString::fromUtf8("color: green;"));
        StatusBar = new QLabel(groupBox_2);
        StatusBar->setObjectName("StatusBar");
        StatusBar->setGeometry(QRect(20, 90, 181, 33));
        QFont font14;
        font14.setFamilies({QString::fromUtf8("Product Sans")});
        font14.setPointSize(13);
        font14.setBold(true);
        StatusBar->setFont(font14);
        StatusBar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 90, 16, 41));
        label_4->setFont(font13);
        label_4->setStyleSheet(QString::fromUtf8("color: BLACK;"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 90, 121, 41));
        label_3->setFont(font13);
        label_3->setStyleSheet(QString::fromUtf8("color: red;"));
        progressBar->raise();
        label_6->raise();
        AcadYear_2->raise();
        AcadYear->raise();
        StatusBar->raise();
        label_4->raise();
        label_3->raise();
        label->raise();
        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 360, 401, 271));
        groupBox_3->setTabletTracking(false);
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        wName_6 = new QLabel(groupBox_3);
        wName_6->setObjectName("wName_6");
        wName_6->setGeometry(QRect(20, 100, 221, 33));
        wName_6->setFont(font5);
        wName_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        rate = new QLabel(groupBox_3);
        rate->setObjectName("rate");
        rate->setGeometry(QRect(130, 60, 91, 41));
        QFont font15;
        font15.setFamilies({QString::fromUtf8("Product Sans")});
        font15.setPointSize(29);
        font15.setBold(true);
        rate->setFont(font15);
        rate->setStyleSheet(QString::fromUtf8("color: rgb(0, 139, 67)\n"
""));
        frame_2 = new QFrame(groupBox_3);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 0, 511, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 20, 191, 16));
        label_22->setFont(font10);
        label_22->setTabletTracking(false);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName("label_19");
        label_19->setEnabled(false);
        label_19->setGeometry(QRect(260, 140, 141, 121));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_19->setPalette(palette1);
        label_19->setFont(font2);
        label_19->setMouseTracking(true);
        label_19->setAcceptDrops(true);
        label_19->setToolTipDuration(-1);
        label_19->setAutoFillBackground(false);
        label_19->setStyleSheet(QString::fromUtf8("Qlabel{\n"
"background-color: rgba(0, 0, 0, 0);\n"
"}"));
        label_19->setFrameShape(QFrame::NoFrame);
        label_19->setTextFormat(Qt::AutoText);
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/115746_data_icon.png")));
        label_19->setScaledContents(true);
        label_19->setWordWrap(true);
        label_19->setOpenExternalLinks(true);
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(210, 60, 91, 41));
        label_24->setFont(font15);
        label_24->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(250, 110, 171, 16));
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(20, 140, 231, 121));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        viewButton = new QPushButton(groupBox_4);
        viewButton->setObjectName("viewButton");
        viewButton->setGeometry(QRect(70, 80, 121, 31));
        viewButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 138, 0);  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        wName_7 = new QLabel(groupBox_4);
        wName_7->setObjectName("wName_7");
        wName_7->setGeometry(QRect(10, 10, 71, 16));
        QFont font16;
        font16.setFamilies({QString::fromUtf8("Product Sans")});
        font16.setPointSize(8);
        font16.setBold(true);
        font16.setUnderline(false);
        wName_7->setFont(font16);
        wName_7->setStyleSheet(QString::fromUtf8("color: black;"));
        wName_8 = new QLabel(groupBox_4);
        wName_8->setObjectName("wName_8");
        wName_8->setGeometry(QRect(20, 40, 51, 16));
        wName_8->setFont(font16);
        wName_8->setStyleSheet(QString::fromUtf8("color: black;"));
        wName_9 = new QLabel(groupBox_4);
        wName_9->setObjectName("wName_9");
        wName_9->setGeometry(QRect(110, 10, 16, 16));
        QFont font17;
        font17.setFamilies({QString::fromUtf8("Product Sans")});
        font17.setPointSize(8);
        font17.setBold(false);
        font17.setUnderline(false);
        wName_9->setFont(font17);
        wName_9->setStyleSheet(QString::fromUtf8("color: black;"));
        wName_10 = new QLabel(groupBox_4);
        wName_10->setObjectName("wName_10");
        wName_10->setGeometry(QRect(140, 10, 16, 16));
        wName_10->setFont(font17);
        wName_10->setStyleSheet(QString::fromUtf8("color: black;"));
        wName_11 = new QLabel(groupBox_4);
        wName_11->setObjectName("wName_11");
        wName_11->setGeometry(QRect(170, 10, 16, 16));
        wName_11->setFont(font17);
        wName_11->setStyleSheet(QString::fromUtf8("color: black;"));
        wName_12 = new QLabel(groupBox_4);
        wName_12->setObjectName("wName_12");
        wName_12->setGeometry(QRect(200, 10, 16, 16));
        wName_12->setFont(font17);
        wName_12->setStyleSheet(QString::fromUtf8("color: black;"));
        cA = new QLabel(groupBox_4);
        cA->setObjectName("cA");
        cA->setGeometry(QRect(106, 40, 20, 16));
        cA->setFont(font17);
        cA->setStyleSheet(QString::fromUtf8("color: black;"));
        cA->setAlignment(Qt::AlignCenter);
        cB = new QLabel(groupBox_4);
        cB->setObjectName("cB");
        cB->setGeometry(QRect(135, 40, 21, 16));
        cB->setFont(font17);
        cB->setStyleSheet(QString::fromUtf8("color: black;"));
        cB->setAlignment(Qt::AlignCenter);
        cC = new QLabel(groupBox_4);
        cC->setObjectName("cC");
        cC->setGeometry(QRect(170, 40, 16, 16));
        cC->setFont(font17);
        cC->setStyleSheet(QString::fromUtf8("color: black;"));
        cC->setAlignment(Qt::AlignCenter);
        cD = new QLabel(groupBox_4);
        cD->setObjectName("cD");
        cD->setGeometry(QRect(200, 40, 16, 16));
        cD->setFont(font17);
        cD->setStyleSheet(QString::fromUtf8("color: black;"));
        cD->setAlignment(Qt::AlignCenter);
        wName_6->raise();
        frame_2->raise();
        label_19->raise();
        rate->raise();
        label_24->raise();
        label_20->raise();
        groupBox_4->raise();
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 340, 401, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
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
        groupBox->setTitle(QString());
        label_2->setText(QString());
        pemail->setText(QCoreApplication::translate("Tdashb", "********@wvsu.edu.ph", nullptr));
        pname->setText(QCoreApplication::translate("Tdashb", "Juan Dela Cruz", nullptr));
        wName_2->setText(QCoreApplication::translate("Tdashb", "Name:", nullptr));
        label_12->setText(QCoreApplication::translate("Tdashb", "Email:", nullptr));
        logoutButton->setText(QCoreApplication::translate("Tdashb", "Log Out", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Tdashb", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("Tdashb", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("Tdashb", "DASHBOARD", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Tdashb", "Rating Progress:", nullptr));
        AcadYear_2->setText(QCoreApplication::translate("Tdashb", "<html><head/><body><p>Second Semester</p></body></html>", nullptr));
        AcadYear->setText(QCoreApplication::translate("Tdashb", "<html><head/><body><p>Academic Year: 2024-2025<br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Tdashb", "ONGOING", nullptr));
        StatusBar->setText(QCoreApplication::translate("Tdashb", "Evaluation Status:", nullptr));
        label_4->setText(QCoreApplication::translate("Tdashb", "/", nullptr));
        label_3->setText(QCoreApplication::translate("Tdashb", "ENDED", nullptr));
        groupBox_3->setTitle(QString());
        wName_6->setText(QCoreApplication::translate("Tdashb", "Descriptive Interpretation:", nullptr));
        rate->setText(QCoreApplication::translate("Tdashb", "4.5", nullptr));
        label_22->setText(QCoreApplication::translate("Tdashb", "EVALUATION DATA", nullptr));
        label_19->setText(QString());
        label_24->setText(QCoreApplication::translate("Tdashb", "/ 5", nullptr));
        label_20->setText(QCoreApplication::translate("Tdashb", "OUSTANDING", nullptr));
        groupBox_4->setTitle(QString());
        viewButton->setText(QCoreApplication::translate("Tdashb", "View Messages", nullptr));
        wName_7->setText(QCoreApplication::translate("Tdashb", "CATEGORY", nullptr));
        wName_8->setText(QCoreApplication::translate("Tdashb", "RATING", nullptr));
        wName_9->setText(QCoreApplication::translate("Tdashb", "A", nullptr));
        wName_10->setText(QCoreApplication::translate("Tdashb", "B", nullptr));
        wName_11->setText(QCoreApplication::translate("Tdashb", "C", nullptr));
        wName_12->setText(QCoreApplication::translate("Tdashb", "D", nullptr));
        cA->setText(QCoreApplication::translate("Tdashb", "A", nullptr));
        cB->setText(QCoreApplication::translate("Tdashb", "A", nullptr));
        cC->setText(QCoreApplication::translate("Tdashb", "A", nullptr));
        cD->setText(QCoreApplication::translate("Tdashb", "A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tdashb: public Ui_Tdashb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDASHB_H
