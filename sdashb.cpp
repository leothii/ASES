#include "sdashb.h"
#include "ui_sdashb.h"
#include "mainwindow.h"
#include "index.h"
#include "edit.h"

Edit* Edit::instance = nullptr;


Sdashb::Sdashb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sdashb)
{
    ui->setupUi(this);

    nameLabel = ui->name;
    emailLabel = ui->email;
    studentNumberLabel = ui->studentNum;

    connect(ui->logoutButton, &QPushButton::clicked, this, &Sdashb::on_logoutButton_clicked);
    connect(ui->EvaluateButton, &QPushButton::clicked, this, &Sdashb::on_EvaluateButton_clicked);
    connect(ui->EditButton, &QPushButton::clicked, this, &Sdashb::on_EditButton_clicked);
}

void Sdashb::setStudentInformation(const QString& fullName, const QString& studentNumber, const QString& email) {
    // Assuming your labels are named Name, StudentNumber, and Email
    ui->name->setText("Name: " + fullName);
    ui->studentNum->setText("Student Number: " + studentNumber);
    ui->email->setText("Email: " + email);
}

void Sdashb::on_logoutButton_clicked()
{
    // Redirect to the main login window
    if (MainWindow::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        MainWindow::instance = new MainWindow(this);
    }
    MainWindow::instance->show();
    QMessageBox::information(this, "Logged Out", "You have been logged out successfully.");
    this->hide();
}

void Sdashb::on_EvaluateButton_clicked()
{
    // Redirect to the main login window
    if (Index::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Index::instance = new Index(this);

    }
    Index::instance->show();
    this->hide();
}

void Sdashb::on_EditButton_clicked()
{
    // Redirect to the main login window
    if (Edit::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Edit::instance = new Edit(this);
    }
    Edit::instance->show();
    this->hide();
}


Sdashb::~Sdashb()
{
    delete ui;
}



