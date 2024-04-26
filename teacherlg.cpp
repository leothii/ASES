#include "teacherlg.h"
#include "ui_teacherlg.h"
#include "mainwindow.h"

TeacherLg::TeacherLg(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TeacherLg)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &TeacherLg::on_backButton_clicked);
}


void TeacherLg::on_backButton_clicked() {

    this->hide();

    if (MainWindow::instance) {
        MainWindow::instance->show();
        MainWindow::instance->raise();\
            MainWindow::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        MainWindow::instance = new MainWindow(this);
        MainWindow::instance->show();
    }}
TeacherLg::~TeacherLg()
{
    delete ui;
}
