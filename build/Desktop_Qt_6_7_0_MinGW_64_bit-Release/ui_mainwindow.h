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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QComboBox *RoleBox;
    QPushButton *NextButton;
    QPushButton *ExitButton;
    QLabel *label;
    QFrame *frame;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(424, 800);
        MainWindow->setBaseSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 150, 321, 421));
        RoleBox = new QComboBox(groupBox);
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->setObjectName("RoleBox");
        RoleBox->setGeometry(QRect(120, 180, 81, 31));
        NextButton = new QPushButton(groupBox);
        NextButton->setObjectName("NextButton");
        NextButton->setGeometry(QRect(240, 280, 51, 31));
        ExitButton = new QPushButton(groupBox);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setGeometry(QRect(30, 280, 51, 31));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        label->setFont(font);
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(100, 70, 120, 80));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(80, 0, 256, 192));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 610, 63, 20));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/ProfileIcon.png")));
        label_2->setScaledContents(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
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
        groupBox->setTitle(QString());
        RoleBox->setItemText(0, QCoreApplication::translate("MainWindow", "Student", nullptr));
        RoleBox->setItemText(1, QCoreApplication::translate("MainWindow", "Teacher", nullptr));
        RoleBox->setItemText(2, QCoreApplication::translate("MainWindow", "Admin", nullptr));

        NextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Continue as", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
