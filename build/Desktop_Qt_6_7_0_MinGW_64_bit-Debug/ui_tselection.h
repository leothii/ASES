/********************************************************************************
** Form generated from reading UI file 'tselection.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSELECTION_H
#define UI_TSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tselection
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *backButton;
    QComboBox *Coursebox;
    QLabel *label_7;
    QPushButton *nextButton;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_5;
    QComboBox *Teacherbox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tselection)
    {
        if (tselection->objectName().isEmpty())
            tselection->setObjectName("tselection");
        tselection->resize(424, 800);
        centralwidget = new QWidget(tselection);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 190, 301, 271));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 15px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(120, 210, 71, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(51, 122, 183, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        backButton->setPalette(palette);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        Coursebox = new QComboBox(frame);
        Coursebox->addItem(QString());
        Coursebox->setObjectName("Coursebox");
        Coursebox->setGeometry(QRect(40, 80, 91, 21));
        QPalette palette1;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(242, 242, 242, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(134, 134, 134, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        QBrush brush6(QColor(85, 85, 85, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        Coursebox->setPalette(palette1);
        Coursebox->setStyleSheet(QString::fromUtf8("/* QComboBox base style */\n"
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
"	image: url(:/assets/assets/dropdown.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray background for dropdown */\n"
""
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
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 60, 171, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Product Sans")});
        font.setPointSize(9);
        font.setBold(true);
        font.setKerning(true);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7->setWordWrap(true);
        nextButton = new QPushButton(frame);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(210, 210, 71, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        nextButton->setPalette(palette2);
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 0, 321, 31));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);\n"
"border-radius: 8px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 141, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Product Sans Black")});
        font1.setPointSize(11);
        label->setFont(font1);
        label->setTabletTracking(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 120, 171, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5->setWordWrap(true);
        Teacherbox = new QComboBox(frame);
        Teacherbox->addItem(QString());
        Teacherbox->setObjectName("Teacherbox");
        Teacherbox->setGeometry(QRect(40, 140, 221, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        Teacherbox->setPalette(palette3);
        Teacherbox->setTabletTracking(false);
        Teacherbox->setStyleSheet(QString::fromUtf8("/* QComboBox base style */\n"
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
"	image: url(:/assets/assets/dropdown.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray background for dropdown */\n"
""
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
        Teacherbox->setFrame(true);
        tselection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tselection);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        tselection->setMenuBar(menubar);
        statusbar = new QStatusBar(tselection);
        statusbar->setObjectName("statusbar");
        tselection->setStatusBar(statusbar);

        retranslateUi(tselection);

        QMetaObject::connectSlotsByName(tselection);
    } // setupUi

    void retranslateUi(QMainWindow *tselection)
    {
        tselection->setWindowTitle(QCoreApplication::translate("tselection", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("tselection", "Back", nullptr));
        Coursebox->setItemText(0, QCoreApplication::translate("tselection", "<Select>", nullptr));

#if QT_CONFIG(accessibility)
        Coursebox->setAccessibleName(QCoreApplication::translate("tselection", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        Coursebox->setPlaceholderText(QCoreApplication::translate("tselection", "<Select>", nullptr));
        label_7->setText(QCoreApplication::translate("tselection", "<html><head/><body><p>Course/Subject</p></body></html>", nullptr));
        nextButton->setText(QCoreApplication::translate("tselection", "Next", nullptr));
        label->setText(QCoreApplication::translate("tselection", "TO RATE", nullptr));
        label_5->setText(QCoreApplication::translate("tselection", "<html><head/><body><p>Teacher/Instructor</p></body></html>", nullptr));
        Teacherbox->setItemText(0, QCoreApplication::translate("tselection", "                 <Select>", nullptr));

#if QT_CONFIG(accessibility)
        Teacherbox->setAccessibleName(QCoreApplication::translate("tselection", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        Teacherbox->setPlaceholderText(QCoreApplication::translate("tselection", "                 <Select>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tselection: public Ui_tselection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSELECTION_H
