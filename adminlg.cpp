#include "adminlg.h"
#include "ui_adminlg.h"
#include "mainwindow.h"

AdminLg::AdminLg(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AdminLg)
{
    ui->setupUi(this);
     connect(ui->backButton, &QPushButton::clicked, this, &AdminLg::on_backButton_clicked);
}

void AdminLg::on_backButton_clicked() {

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
AdminLg::~AdminLg()
{
    delete ui;
}
