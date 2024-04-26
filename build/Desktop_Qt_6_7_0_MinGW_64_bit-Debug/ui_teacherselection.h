/********************************************************************************
** Form generated from reading UI file 'teacherselection.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSELECTION_H
#define UI_TEACHERSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherSelection
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TeacherSelection)
    {
        if (TeacherSelection->objectName().isEmpty())
            TeacherSelection->setObjectName("TeacherSelection");
        TeacherSelection->resize(424, 800);
        centralwidget = new QWidget(TeacherSelection);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 40, 51, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 460, 83, 29));
        TeacherSelection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TeacherSelection);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        TeacherSelection->setMenuBar(menubar);
        statusbar = new QStatusBar(TeacherSelection);
        statusbar->setObjectName("statusbar");
        TeacherSelection->setStatusBar(statusbar);

        retranslateUi(TeacherSelection);

        QMetaObject::connectSlotsByName(TeacherSelection);
    } // setupUi

    void retranslateUi(QMainWindow *TeacherSelection)
    {
        TeacherSelection->setWindowTitle(QCoreApplication::translate("TeacherSelection", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("TeacherSelection", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("TeacherSelection", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherSelection: public Ui_TeacherSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSELECTION_H
