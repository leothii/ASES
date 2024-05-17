/********************************************************************************
** Form generated from reading UI file 'instruction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTION_H
#define UI_INSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instruction
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *nextButton;
    QPushButton *backButton;
    QFrame *frame_2;
    QLabel *label;
    QFrame *frame_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Instruction)
    {
        if (Instruction->objectName().isEmpty())
            Instruction->setObjectName("Instruction");
        Instruction->resize(424, 800);
        centralwidget = new QWidget(Instruction);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -20, 441, 791));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);\n"
" border-radius: 8px\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        nextButton = new QPushButton(frame);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(340, 650, 71, 29));
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(250, 650, 71, 29));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;  /* Button background color (blue) */\n"
"    color: #ffffff;             /* Text color (white) */\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #285e8e;\n"
"}"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-30, 20, 461, 61));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 122, 183);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 141, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Product Sans Black")});
        font.setPointSize(11);
        label->setFont(font);
        label->setTabletTracking(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(10, 210, 401, 411));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Variable Text Semiligh")});
        frame_3->setFont(font1);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);\n"
" border-radius: 8px\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 60, 181, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Product Sans")});
        font2.setPointSize(9);
        font2.setKerning(true);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4->setWordWrap(true);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 20, 171, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5->setWordWrap(true);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 20, 121, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6->setWordWrap(true);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 20, 41, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7->setWordWrap(true);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(100, 90, 101, 21));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8->setWordWrap(true);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 90, 21, 21));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9->setWordWrap(true);
        label_10 = new QLabel(frame_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 160, 21, 21));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_10->setWordWrap(true);
        label_11 = new QLabel(frame_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(90, 160, 121, 16));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11->setWordWrap(true);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(220, 150, 181, 51));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_12->setWordWrap(true);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 220, 21, 21));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_13->setWordWrap(true);
        label_14 = new QLabel(frame_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(220, 210, 171, 51));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_14->setWordWrap(true);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(100, 220, 81, 16));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_15->setWordWrap(true);
        label_28 = new QLabel(frame_3);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(120, 290, 61, 16));
        label_28->setFont(font2);
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_28->setWordWrap(true);
        label_29 = new QLabel(frame_3);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(30, 290, 21, 21));
        label_29->setFont(font2);
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_29->setWordWrap(true);
        label_30 = new QLabel(frame_3);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(220, 270, 161, 51));
        label_30->setFont(font2);
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_30->setWordWrap(true);
        label_31 = new QLabel(frame_3);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(30, 350, 21, 21));
        label_31->setFont(font2);
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_31->setWordWrap(true);
        label_32 = new QLabel(frame_3);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(220, 340, 171, 51));
        label_32->setFont(font2);
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_32->setWordWrap(true);
        label_33 = new QLabel(frame_3);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(120, 350, 61, 16));
        label_33->setFont(font2);
        label_33->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_33->setWordWrap(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 411, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Product Sans Light")});
        font3.setPointSize(11);
        font3.setKerning(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setWordWrap(true);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 180, 411, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Product Sans")});
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setKerning(true);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setWordWrap(true);
        Instruction->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Instruction);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 25));
        Instruction->setMenuBar(menubar);
        statusbar = new QStatusBar(Instruction);
        statusbar->setObjectName("statusbar");
        Instruction->setStatusBar(statusbar);

        retranslateUi(Instruction);

        QMetaObject::connectSlotsByName(Instruction);
    } // setupUi

    void retranslateUi(QMainWindow *Instruction)
    {
        Instruction->setWindowTitle(QCoreApplication::translate("Instruction", "MainWindow", nullptr));
        nextButton->setText(QCoreApplication::translate("Instruction", "Next", nullptr));
        backButton->setText(QCoreApplication::translate("Instruction", "Back", nullptr));
        label->setText(QCoreApplication::translate("Instruction", "INSTRUCTION", nullptr));
        label_4->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>The performance almost always exceeds the job requirements. The faculty as an exceptional role model.</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p><span style=\" font-weight:700;\">Qualitative Description</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p><span style=\" font-weight:700;\">Desciptive Rating</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p><span style=\" font-weight:700;\">Scale</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>Oustanding</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>5</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>4</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>Very Satisfactory</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>The performance meets and often exceeds the job requirements.</p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>3</p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>The performance meets the job requirements.</p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>Satisfactory</p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>Fair</p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>2</p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>The performance needs some development to meet job requirements.</p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>1</p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>The faculty fails to meet job requirements.</p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>Poor</p><p><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p>All responses are anonymous and are treated with utmost confidentiality.</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Instruction", "<html><head/><body><p><a name=\"docs-internal-guid-87d48377-7fff-87c8-98dd-88a5bf8cab89\"/><span style=\" font-family:'Roboto','sans-serif'; font-size:9pt; color:#202124; background-color:transparent;\">P</span><span style=\" font-family:'Roboto','sans-serif'; font-size:9pt; color:#202124; background-color:transparent;\">lease evaluate the faculty using the scale below:</span></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instruction: public Ui_Instruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTION_H
