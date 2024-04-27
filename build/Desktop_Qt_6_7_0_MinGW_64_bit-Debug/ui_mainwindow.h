/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QComboBox *RoleBox;
    QPushButton *ExitButon;
    QPushButton *NextButton;
    QLabel *label_3;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(425, 800);
        MainWindow->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(190, 190, 190, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(55, 122, 183, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-image: url(:/new/prefix1/background.png);\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 140, 301, 441));
        QPalette palette1;
        QBrush brush2(QColor(242, 242, 242, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        frame->setPalette(palette1);
        frame->setAcceptDrops(true);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
"border-radius: 8px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(80, 160, 141, 131));
        QPalette palette2;
        QBrush brush3(QColor(218, 218, 218, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        frame_2->setPalette(palette2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable Text Semiligh")});
        frame_2->setFont(font);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
" border-radius: 8px\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(30, 10, 81, 81));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_2->setPalette(palette3);
        QFont font1;
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        label_2->setFont(font1);
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
        RoleBox = new QComboBox(frame_2);
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->setObjectName("RoleBox");
        RoleBox->setGeometry(QRect(10, 100, 121, 21));
        QPalette palette4;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush5(QColor(134, 134, 134, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        QBrush brush6(QColor(85, 85, 85, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        RoleBox->setPalette(palette4);
        RoleBox->setTabletTracking(true);
        RoleBox->setStyleSheet(QString::fromUtf8("/* QComboBox base style */\n"
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
"/* QComboBox down arrow style */\n"
"QComboBox::down-arrow {\n"
"    \n"
"	image: url(:/new/prefix1/icons8-expand-arrow-100.png);\n"
"    width: 12px; /* Width of the down arrow */\n"
"    height: 12px; /* Height of the down arrow */\n"
"}\n"
"\n"
"\n"
"/* Style for QAbstractItemView (dropdown list) */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #377ab7; /* Border color matches blue */\n"
"    background-color: #f2f2f2; /* Light gray backgro"
                        "und for dropdown */\n"
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
"    text-align: center; /* Align text to center */\n"
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
        ExitButon = new QPushButton(frame);
        ExitButon->setObjectName("ExitButon");
        ExitButon->setGeometry(QRect(90, 370, 121, 31));
        QPalette palette5;
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        QBrush brush9(QColor(51, 122, 183, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        ExitButon->setPalette(palette5);
        ExitButon->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        NextButton = new QPushButton(frame);
        NextButton->setObjectName("NextButton");
        NextButton->setGeometry(QRect(90, 330, 121, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        NextButton->setPalette(palette6);
        NextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 30, 211, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font2.setPointSize(39);
        font2.setBold(true);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label_3->setFont(font2);
        label_3->setTabletTracking(true);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(51, 122, 183);\n"
"border-color: rgb(255, 255, 255);"));
        label_3->setFrameShadow(QFrame::Plain);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 90, 421, 20));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_6->setPalette(palette7);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(true);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 425, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        RoleBox->setItemText(0, QCoreApplication::translate("MainWindow", "       <Select>", "Select Role"));
        RoleBox->setItemText(1, QCoreApplication::translate("MainWindow", "        Student", nullptr));
        RoleBox->setItemText(2, QCoreApplication::translate("MainWindow", "        Teacher", nullptr));
        RoleBox->setItemText(3, QCoreApplication::translate("MainWindow", "         Admin", nullptr));

#if QT_CONFIG(accessibility)
        RoleBox->setAccessibleName(QCoreApplication::translate("MainWindow", "Select", nullptr));
#endif // QT_CONFIG(accessibility)
        RoleBox->setPlaceholderText(QString());
        ExitButon->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        NextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ASES", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Automated Semestral Evaluation System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
