/********************************************************************************
** Form generated from reading UI file 'evalstats.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALSTATS_H
#define UI_EVALSTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Evalstats
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *CancelButton;
    QFrame *frame_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_6;
    QFrame *line_4;
    QFrame *line_5;
    QGroupBox *groupBox_4;
    QFrame *frame_5;
    QLabel *label_23;
    QLabel *label_16;
    QComboBox *ESbox;
    QLabel *label_14;
    QComboBox *Sbox;
    QFrame *line_6;
    QPushButton *UpdateButton;
    QLabel *label_13;
    QLineEdit *AYedit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Evalstats)
    {
        if (Evalstats->objectName().isEmpty())
            Evalstats->setObjectName("Evalstats");
        Evalstats->resize(424, 800);
        centralwidget = new QWidget(Evalstats);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -10, 511, 991));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        CancelButton = new QPushButton(frame);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setGeometry(QRect(220, 460, 83, 29));
        CancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(-30, 0, 461, 61));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(frame_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(390, 0, 61, 61));
        QFont font;
        font.setPointSize(1);
        label_10->setFont(font);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/wvsu_logo.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(frame_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(170, 10, 211, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(8);
        font1.setBold(false);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11->setWordWrap(true);
        label_11->setIndent(0);
        label_12 = new QLabel(frame_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(290, 40, 101, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(true);
        label_12->setFont(font2);
        label_12->setAcceptDrops(false);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12->setWordWrap(true);
        label_12->setIndent(0);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 20, 121, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Product Sans Black")});
        font3.setPointSize(11);
        label_6->setFont(font3);
        label_6->setTabletTracking(false);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4 = new QFrame(frame_4);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(40, 40, 118, 20));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(frame_4);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(160, 0, 16, 61));
        line_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        groupBox_4 = new QGroupBox(frame);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 150, 401, 291));
        groupBox_4->setTabletTracking(false);
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
"border-radius: 10px;"));
        frame_5 = new QFrame(groupBox_4);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(-10, 0, 511, 51));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_23 = new QLabel(frame_5);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(110, 20, 231, 16));
        label_23->setFont(font3);
        label_23->setTabletTracking(false);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 80, 131, 16));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        ESbox = new QComboBox(groupBox_4);
        ESbox->setObjectName("ESbox");
        ESbox->setGeometry(QRect(30, 100, 121, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(242, 242, 242, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(134, 134, 134, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush3(QColor(85, 85, 85, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        ESbox->setPalette(palette);
        ESbox->setStyleSheet(QString::fromUtf8("/* QComboBox base style */\n"
"QComboBox {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    border-radius: 4px; /* Rounded corners */\n"
"    padding: 2px;\n"
"    background-color: #f2f2f2; /* Light gray background */\n"
"    color: black; /* Text color */\n"
"}\n"
"\n"
"/* Style the drop-down button */\n"
"QComboBox::drop-down {\n"
"    border: none; /* No border around the drop-down button */\n"
"    background-color: #377ab7; /* Blue background for the button */\n"
"    width: 20px; /* Width of the drop-down button */\n"
"}\n"
"\n"
"/* QComboBox down arrow style */\n"
"QComboBox::down-arrow {\n"
"    	\n"
"	image: url(:/assets/assets/dropdown.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray background for drop"
                        "down */\n"
"    selection-background-color: #2b6698; /* Darker blue for selection */\n"
"    selection-color: white; /* White text color for selected items */\n"
"    outline: none; /* No outline */\n"
"    color: black; /* Text color for non-highlighted items */\n"
"}\n"
"\n"
"/* Style each item in the dropdown list */\n"
"QComboBox QAbstractItemView::item {\n"
"    padding: 4px 8px; /* Add padding to each item */\n"
"    color: black; /* Ensure text color contrasts with background */\n"
"}\n"
"\n"
"/* Hover effect for items in the dropdown list */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    background-color: #377ab7; /* Blue background on hover */\n"
"    color: white; /* White text color */\n"
"}\n"
"\n"
"/* Style for selected items in the dropdown list */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    background-color: #2b6698; /* Darker blue for selection */\n"
"    color: white; /* White text color */\n"
"}\n"
""));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 140, 131, 16));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Sbox = new QComboBox(groupBox_4);
        Sbox->setObjectName("Sbox");
        Sbox->setGeometry(QRect(30, 160, 121, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        Sbox->setPalette(palette1);
        Sbox->setStyleSheet(QString::fromUtf8("/* QComboBox base style */\n"
"QComboBox {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    border-radius: 4px; /* Rounded corners */\n"
"    padding: 2px;\n"
"    background-color: #f2f2f2; /* Light gray background */\n"
"    color: black; /* Text color */\n"
"}\n"
"\n"
"/* Style the drop-down button */\n"
"QComboBox::drop-down {\n"
"    border: none; /* No border around the drop-down button */\n"
"    background-color: #377ab7; /* Blue background for the button */\n"
"    width: 20px; /* Width of the drop-down button */\n"
"}\n"
"\n"
"/* QComboBox down arrow style */\n"
"QComboBox::down-arrow {\n"
"    	\n"
"	image: url(:/assets/assets/dropdown.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray background for drop"
                        "down */\n"
"    selection-background-color: #2b6698; /* Darker blue for selection */\n"
"    selection-color: white; /* White text color for selected items */\n"
"    outline: none; /* No outline */\n"
"    color: black; /* Text color for non-highlighted items */\n"
"}\n"
"\n"
"/* Style each item in the dropdown list */\n"
"QComboBox QAbstractItemView::item {\n"
"    padding: 4px 8px; /* Add padding to each item */\n"
"    color: black; /* Ensure text color contrasts with background */\n"
"}\n"
"\n"
"/* Hover effect for items in the dropdown list */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    background-color: #377ab7; /* Blue background on hover */\n"
"    color: white; /* White text color */\n"
"}\n"
"\n"
"/* Style for selected items in the dropdown list */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    background-color: #2b6698; /* Darker blue for selection */\n"
"    color: white; /* White text color */\n"
"}\n"
""));
        line_6 = new QFrame(frame);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(10, 60, 401, 20));
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        UpdateButton = new QPushButton(frame);
        UpdateButton->setObjectName("UpdateButton");
        UpdateButton->setGeometry(QRect(320, 460, 83, 29));
        UpdateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}\n"
""));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 340, 131, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AYedit = new QLineEdit(centralwidget);
        AYedit->setObjectName("AYedit");
        AYedit->setGeometry(QRect(40, 360, 241, 31));
        AYedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        Evalstats->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Evalstats);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Evalstats->setMenuBar(menubar);
        statusbar = new QStatusBar(Evalstats);
        statusbar->setObjectName("statusbar");
        Evalstats->setStatusBar(statusbar);

        retranslateUi(Evalstats);

        QMetaObject::connectSlotsByName(Evalstats);
    } // setupUi

    void retranslateUi(QMainWindow *Evalstats)
    {
        Evalstats->setWindowTitle(QCoreApplication::translate("Evalstats", "MainWindow", nullptr));
        CancelButton->setText(QCoreApplication::translate("Evalstats", "Cancel", nullptr));
        label_10->setText(QString());
        label_11->setText(QCoreApplication::translate("Evalstats", "WEST VISAYAS STATE UNIVERSITY\n"
"MAIN CAMPUS", nullptr));
        label_12->setText(QCoreApplication::translate("Evalstats", "Lapaz, Iloilo CIty", nullptr));
        label_6->setText(QCoreApplication::translate("Evalstats", "DASHBOARD", nullptr));
        groupBox_4->setTitle(QString());
        label_23->setText(QCoreApplication::translate("Evalstats", "EVALUATION SYSTEM INFO", nullptr));
        label_16->setText(QCoreApplication::translate("Evalstats", "Evaluation Status", nullptr));
#if QT_CONFIG(accessibility)
        ESbox->setAccessibleName(QCoreApplication::translate("Evalstats", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        ESbox->setPlaceholderText(QString());
        label_14->setText(QCoreApplication::translate("Evalstats", "Semester", nullptr));
#if QT_CONFIG(accessibility)
        Sbox->setAccessibleName(QCoreApplication::translate("Evalstats", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        UpdateButton->setText(QCoreApplication::translate("Evalstats", "Update", nullptr));
        label_13->setText(QCoreApplication::translate("Evalstats", "Academic Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Evalstats: public Ui_Evalstats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALSTATS_H
