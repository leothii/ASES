/********************************************************************************
** Form generated from reading UI file 'studentlist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLIST_H
#define UI_STUDENTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Studentlist
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Studentlist)
    {
        if (Studentlist->objectName().isEmpty())
            Studentlist->setObjectName("Studentlist");
        Studentlist->resize(424, 800);
        centralwidget = new QWidget(Studentlist);
        centralwidget->setObjectName("centralwidget");
        Studentlist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Studentlist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Studentlist->setMenuBar(menubar);
        statusbar = new QStatusBar(Studentlist);
        statusbar->setObjectName("statusbar");
        Studentlist->setStatusBar(statusbar);

        retranslateUi(Studentlist);

        QMetaObject::connectSlotsByName(Studentlist);
    } // setupUi

    void retranslateUi(QMainWindow *Studentlist)
    {
        Studentlist->setWindowTitle(QCoreApplication::translate("Studentlist", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Studentlist: public Ui_Studentlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLIST_H
