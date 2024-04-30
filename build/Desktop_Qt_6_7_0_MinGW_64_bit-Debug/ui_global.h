/********************************************************************************
** Form generated from reading UI file 'global.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBAL_H
#define UI_GLOBAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Global
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Global)
    {
        if (Global->objectName().isEmpty())
            Global->setObjectName("Global");
        Global->resize(800, 600);
        centralwidget = new QWidget(Global);
        centralwidget->setObjectName("centralwidget");
        Global->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Global);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Global->setMenuBar(menubar);
        statusbar = new QStatusBar(Global);
        statusbar->setObjectName("statusbar");
        Global->setStatusBar(statusbar);

        retranslateUi(Global);

        QMetaObject::connectSlotsByName(Global);
    } // setupUi

    void retranslateUi(QMainWindow *Global)
    {
        Global->setWindowTitle(QCoreApplication::translate("Global", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Global: public Ui_Global {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBAL_H
