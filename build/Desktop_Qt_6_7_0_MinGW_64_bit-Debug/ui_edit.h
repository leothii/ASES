/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *UpdateButton;
    QPushButton *CancelButton;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *Program;
    QLabel *label_4;
    QComboBox *ALbox;
    QLabel *label_9;
    QComboBox *YLbox;
    QLabel *label_10;
    QComboBox *Sbox;
    QLineEdit *Firstname;
    QLabel *label_5;
    QLineEdit *Middlename;
    QLabel *label_11;
    QLineEdit *Lastname;
    QLabel *label_12;
    QLineEdit *Password;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *StudentNo;
    QLabel *label_13;
    QLineEdit *Email;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(424, 800);
        centralwidget = new QWidget(Edit);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 20, 361, 671));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 8px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        UpdateButton = new QPushButton(frame);
        UpdateButton->setObjectName("UpdateButton");
        UpdateButton->setGeometry(QRect(270, 630, 71, 29));
        UpdateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        CancelButton = new QPushButton(frame);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setGeometry(QRect(170, 630, 71, 29));
        CancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 450, 111, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 320, 131, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Program = new QLineEdit(frame);
        Program->setObjectName("Program");
        Program->setGeometry(QRect(30, 350, 241, 31));
        Program->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 390, 131, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        ALbox = new QComboBox(frame);
        ALbox->addItem(QString());
        ALbox->addItem(QString());
        ALbox->addItem(QString());
        ALbox->setObjectName("ALbox");
        ALbox->setGeometry(QRect(30, 290, 121, 21));
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
        ALbox->setPalette(palette);
        ALbox->setStyleSheet(QString::fromUtf8("/* QComboBox base style */\n"
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
"    	image: url(:/new/prefix1/icons8-expand-arrow-100.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray background f"
                        "or dropdown */\n"
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
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(110, 20, 151, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        YLbox = new QComboBox(frame);
        YLbox->addItem(QString());
        YLbox->addItem(QString());
        YLbox->addItem(QString());
        YLbox->addItem(QString());
        YLbox->addItem(QString());
        YLbox->setObjectName("YLbox");
        YLbox->setGeometry(QRect(30, 420, 121, 21));
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
        YLbox->setPalette(palette1);
        YLbox->setStyleSheet(QString::fromUtf8("/* QComboBox base style */\n"
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
"	image: url(:/new/prefix1/icons8-expand-arrow-100.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray background for d"
                        "ropdown */\n"
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
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 260, 131, 21));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Sbox = new QComboBox(frame);
        Sbox->addItem(QString());
        Sbox->addItem(QString());
        Sbox->addItem(QString());
        Sbox->addItem(QString());
        Sbox->addItem(QString());
        Sbox->addItem(QString());
        Sbox->setObjectName("Sbox");
        Sbox->setGeometry(QRect(30, 480, 121, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        Sbox->setPalette(palette2);
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
"	image: url(:/new/prefix1/icons8-expand-arrow-100.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray background for d"
                        "ropdown */\n"
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
        Firstname = new QLineEdit(frame);
        Firstname->setObjectName("Firstname");
        Firstname->setEnabled(true);
        Firstname->setGeometry(QRect(30, 90, 131, 31));
        Firstname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        Firstname->setReadOnly(true);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 70, 111, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Middlename = new QLineEdit(frame);
        Middlename->setObjectName("Middlename");
        Middlename->setGeometry(QRect(200, 90, 131, 31));
        Middlename->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(200, 70, 111, 16));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Lastname = new QLineEdit(frame);
        Lastname->setObjectName("Lastname");
        Lastname->setGeometry(QRect(30, 160, 151, 31));
        Lastname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 140, 111, 16));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Password = new QLineEdit(frame);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(30, 540, 241, 31));
        Password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        Password->setEchoMode(QLineEdit::Password);
        Password->setPlaceholderText(QString::fromUtf8("Password"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 510, 131, 21));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(170, 580, 111, 16));
        QFont font1;
        font1.setPointSize(7);
        font1.setItalic(true);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(55, 122, 183);\n"
""));
        StudentNo = new QLineEdit(frame);
        StudentNo->setObjectName("StudentNo");
        StudentNo->setGeometry(QRect(200, 160, 131, 31));
        StudentNo->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(200, 140, 131, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Email = new QLineEdit(frame);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(30, 220, 301, 31));
        Email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; /* Background color: white */\n"
"    color: #000000;            /* Text color: black */\n"
"    border: 1px solid #337ab7; /* Border color: same blue as QPushButton */\n"
"    border-radius: 4px;        /* Optional: round the corners */\n"
"    padding: 4px;              /* Optional: add some padding */\n"
"}\n"
""));
        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 200, 111, 16));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Edit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Edit);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Edit->setMenuBar(menubar);
        statusbar = new QStatusBar(Edit);
        statusbar->setObjectName("statusbar");
        Edit->setStatusBar(statusbar);

        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QMainWindow *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "MainWindow", nullptr));
        UpdateButton->setText(QCoreApplication::translate("Edit", "Update", nullptr));
        CancelButton->setText(QCoreApplication::translate("Edit", "Cancel", nullptr));
        label_3->setText(QCoreApplication::translate("Edit", "Section", nullptr));
        label_8->setText(QCoreApplication::translate("Edit", "Program", nullptr));
        label_4->setText(QCoreApplication::translate("Edit", "Year Level", nullptr));
        ALbox->setItemText(0, QCoreApplication::translate("Edit", "<Select>", "Select Role"));
        ALbox->setItemText(1, QCoreApplication::translate("Edit", "Undergraduate", nullptr));
        ALbox->setItemText(2, QCoreApplication::translate("Edit", "Graduate", nullptr));

#if QT_CONFIG(accessibility)
        ALbox->setAccessibleName(QCoreApplication::translate("Edit", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        label_9->setText(QCoreApplication::translate("Edit", "Update Account", nullptr));
        YLbox->setItemText(0, QCoreApplication::translate("Edit", "<Select>", "Select Role"));
        YLbox->setItemText(1, QCoreApplication::translate("Edit", "1st Year", nullptr));
        YLbox->setItemText(2, QCoreApplication::translate("Edit", "2nd Year", nullptr));
        YLbox->setItemText(3, QCoreApplication::translate("Edit", "3rd Year", nullptr));
        YLbox->setItemText(4, QCoreApplication::translate("Edit", "4th Year", nullptr));

#if QT_CONFIG(accessibility)
        YLbox->setAccessibleName(QCoreApplication::translate("Edit", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        label_10->setText(QCoreApplication::translate("Edit", "Academic Level", nullptr));
        Sbox->setItemText(0, QCoreApplication::translate("Edit", "<Select>", "Select Role"));
        Sbox->setItemText(1, QCoreApplication::translate("Edit", "A", nullptr));
        Sbox->setItemText(2, QCoreApplication::translate("Edit", "B", nullptr));
        Sbox->setItemText(3, QCoreApplication::translate("Edit", "C", nullptr));
        Sbox->setItemText(4, QCoreApplication::translate("Edit", "D", nullptr));
        Sbox->setItemText(5, QCoreApplication::translate("Edit", "E", nullptr));

#if QT_CONFIG(accessibility)
        Sbox->setAccessibleName(QCoreApplication::translate("Edit", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        label_5->setText(QCoreApplication::translate("Edit", "Firstname", nullptr));
        label_11->setText(QCoreApplication::translate("Edit", "Middlename", nullptr));
        label_12->setText(QCoreApplication::translate("Edit", "Lastname", nullptr));
        label_6->setText(QCoreApplication::translate("Edit", "Verification", nullptr));
        label_7->setText(QCoreApplication::translate("Edit", "Forgot Password", nullptr));
        label_13->setText(QCoreApplication::translate("Edit", "Student No.", nullptr));
        label_14->setText(QCoreApplication::translate("Edit", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
