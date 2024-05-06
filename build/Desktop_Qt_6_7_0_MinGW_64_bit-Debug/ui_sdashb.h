/********************************************************************************
** Form generated from reading UI file 'sdashb.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDASHB_H
#define UI_SDASHB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sdashb
{
public:
    QWidget *centralwidget;
    QLabel *StudentName;
    QLabel *Welcome;
    QFrame *frame;
    QFrame *frame_2;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *name;
    QLabel *studentNum;
    QLabel *email;
    QProgressBar *progressBar;
    QLabel *label_6;
    QGroupBox *groupBox;
    QPushButton *EvaluateButton;
    QLabel *AcadYear;
    QLabel *StatusBar;
    QLabel *label;
    QPushButton *EditButton;
    QLabel *AcadYear_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *Emessage;
    QPushButton *HistoryButton;
    QFrame *line;
    QPushButton *logoutButton;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *line_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sdashb)
    {
        if (Sdashb->objectName().isEmpty())
            Sdashb->setObjectName("Sdashb");
        Sdashb->resize(424, 800);
        Sdashb->setTabletTracking(false);
        Sdashb->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Sdashb);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
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
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 470, 381, 271));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        calendarWidget = new QCalendarWidget(frame_2);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(10, 20, 344, 195));
        calendarWidget->setAutoFillBackground(false);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 330, 401, 121));
        groupBox_2->setTabletTracking(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 61, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ProfileIcon.png")));
        label_2->setScaledContents(true);
        name = new QLabel(groupBox_2);
        name->setObjectName("name");
        name->setGeometry(QRect(80, 10, 311, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Louis George Cafe")});
        font3.setPointSize(11);
        name->setFont(font3);
        name->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        studentNum = new QLabel(groupBox_2);
        studentNum->setObjectName("studentNum");
        studentNum->setGeometry(QRect(80, 30, 321, 20));
        studentNum->setFont(font3);
        studentNum->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        email = new QLabel(groupBox_2);
        email->setObjectName("email");
        email->setGeometry(QRect(80, 50, 321, 20));
        email->setFont(font3);
        email->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(140, 80, 211, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Coolvetica")});
        progressBar->setFont(font4);
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
        label_6->setGeometry(QRect(20, 80, 111, 20));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 120, 401, 191));
        groupBox->setTabletTracking(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        EvaluateButton = new QPushButton(groupBox);
        EvaluateButton->setObjectName("EvaluateButton");
        EvaluateButton->setGeometry(QRect(150, 140, 101, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Product Sans Light")});
        font5.setPointSize(10);
        EvaluateButton->setFont(font5);
        EvaluateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        AcadYear = new QLabel(groupBox);
        AcadYear->setObjectName("AcadYear");
        AcadYear->setGeometry(QRect(20, 10, 361, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Product Sans Light")});
        font6.setPointSize(18);
        font6.setBold(false);
        AcadYear->setFont(font6);
        AcadYear->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear->setWordWrap(true);
        StatusBar = new QLabel(groupBox);
        StatusBar->setObjectName("StatusBar");
        StatusBar->setGeometry(QRect(20, 90, 221, 33));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Product Sans")});
        font7.setPointSize(13);
        font7.setBold(true);
        StatusBar->setFont(font7);
        StatusBar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 90, 121, 41));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Product Sans")});
        font8.setPointSize(12);
        label->setFont(font8);
        label->setStyleSheet(QString::fromUtf8("color: green;"));
        EditButton = new QPushButton(groupBox);
        EditButton->setObjectName("EditButton");
        EditButton->setGeometry(QRect(20, 140, 101, 31));
        EditButton->setFont(font5);
        EditButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        AcadYear_2 = new QLabel(groupBox);
        AcadYear_2->setObjectName("AcadYear_2");
        AcadYear_2->setGeometry(QRect(20, 40, 231, 31));
        AcadYear_2->setFont(font6);
        AcadYear_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AcadYear_2->setWordWrap(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 90, 121, 41));
        label_3->setFont(font8);
        label_3->setStyleSheet(QString::fromUtf8("color: red;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 90, 16, 41));
        label_4->setFont(font8);
        label_4->setStyleSheet(QString::fromUtf8("color: BLACK;"));
        Emessage = new QLabel(groupBox);
        Emessage->setObjectName("Emessage");
        Emessage->setGeometry(QRect(130, 170, 141, 20));
        QFont font9;
        font9.setPointSize(8);
        font9.setItalic(true);
        Emessage->setFont(font9);
        Emessage->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
""));
        Emessage->setAlignment(Qt::AlignCenter);
        HistoryButton = new QPushButton(groupBox);
        HistoryButton->setObjectName("HistoryButton");
        HistoryButton->setGeometry(QRect(280, 140, 101, 31));
        HistoryButton->setFont(font5);
        HistoryButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 310, 391, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        logoutButton = new QPushButton(frame);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(320, 80, 83, 29));
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
        QFont font10;
        font10.setPointSize(1);
        label_7->setFont(font10);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/wvsu_logo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 10, 211, 31));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Times New Roman")});
        font11.setPointSize(8);
        font11.setBold(false);
        label_8->setFont(font11);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_8->setIndent(0);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 40, 101, 16));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Times New Roman")});
        font12.setPointSize(8);
        font12.setBold(false);
        font12.setItalic(true);
        label_9->setFont(font12);
        label_9->setAcceptDrops(false);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setWordWrap(true);
        label_9->setIndent(0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 20, 121, 20));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Product Sans Black")});
        font13.setPointSize(11);
        label_5->setFont(font13);
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
        Sdashb->setCentralWidget(centralwidget);
        frame->raise();
        StudentName->raise();
        Welcome->raise();
        statusbar = new QStatusBar(Sdashb);
        statusbar->setObjectName("statusbar");
        Sdashb->setStatusBar(statusbar);

        retranslateUi(Sdashb);

        QMetaObject::connectSlotsByName(Sdashb);
    } // setupUi

    void retranslateUi(QMainWindow *Sdashb)
    {
        Sdashb->setWindowTitle(QCoreApplication::translate("Sdashb", "MainWindow", nullptr));
        StudentName->setText(QCoreApplication::translate("Sdashb", "Name", nullptr));
        Welcome->setText(QCoreApplication::translate("Sdashb", "Welcome,", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QString());
        name->setText(QCoreApplication::translate("Sdashb", "Name: ", nullptr));
        studentNum->setText(QCoreApplication::translate("Sdashb", "Student #:", nullptr));
        email->setText(QCoreApplication::translate("Sdashb", "Email:", nullptr));
        label_6->setText(QCoreApplication::translate("Sdashb", "Rating Progress:", nullptr));
        groupBox->setTitle(QString());
        EvaluateButton->setText(QCoreApplication::translate("Sdashb", "Evaluate", nullptr));
        AcadYear->setText(QCoreApplication::translate("Sdashb", "<html><head/><body><p>Academic Year: 2024-2025<br/></p></body></html>", nullptr));
        StatusBar->setText(QCoreApplication::translate("Sdashb", "Evaluation Status:", nullptr));
        label->setText(QCoreApplication::translate("Sdashb", "ONGOING", nullptr));
        EditButton->setText(QCoreApplication::translate("Sdashb", "Edit Profile", nullptr));
        AcadYear_2->setText(QCoreApplication::translate("Sdashb", "<html><head/><body><p>Second Semester</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Sdashb", "ENDED", nullptr));
        label_4->setText(QCoreApplication::translate("Sdashb", "/", nullptr));
        Emessage->setText(QCoreApplication::translate("Sdashb", "Error", nullptr));
        HistoryButton->setText(QCoreApplication::translate("Sdashb", "History", nullptr));
        logoutButton->setText(QCoreApplication::translate("Sdashb", "Log Out", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Sdashb", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_9->setText(QCoreApplication::translate("Sdashb", "Lapaz, Iloilo CIty", nullptr));
        label_5->setText(QCoreApplication::translate("Sdashb", "DASHBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sdashb: public Ui_Sdashb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDASHB_H
