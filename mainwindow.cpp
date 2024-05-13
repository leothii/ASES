#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "studentlg.h"
#include "teacherlg.h"
#include "adashb.h"

// Initialize the static pointer
MainWindow* MainWindow::instance = nullptr;
TeacherLg* TeacherLg::instance = nullptr;
Adashb* Adashb::instance = nullptr;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(424, 800);

    // Connect NextButton clicked signal to a slot
    connect(ui->NextButton, &QPushButton::clicked, this, &MainWindow::on_NextButton_clicked);
}



void MainWindow::on_NextButton_clicked() {
    // Check if the selected item is "Student"
    if (ui->RoleBox->currentText() == "        Student") {
        // If an instance of StudentLg already exists, bring it to focus
        if (StudentLg::instance) {
            StudentLg::instance->show();
            StudentLg::instance->raise();
            StudentLg::instance->activateWindow();
        } else {
            // Create a new instance of StudentLg
            StudentLg::instance = new StudentLg(this);
            StudentLg::instance->show();
        }
        // Hide the main window
        this->hide();
    }
    if (ui->RoleBox->currentText() == "        Teacher") {
        // If an instance of StudentLg already exists, bring it to focus
        if (TeacherLg::instance) {
            TeacherLg::instance->show();
            TeacherLg::instance->raise();
            TeacherLg::instance->activateWindow();
        } else {
            // Create a new instance of StudentLg
            TeacherLg::instance = new TeacherLg(this);
            TeacherLg::instance->show();
        }
        // Hide the main window
        this->hide();
    }
    if (ui->RoleBox->currentText() ==  "         Admin") {
        // If an instance of StudentLg already exists, bring it to focus
        if (Adashb::instance) {
            Adashb::instance->show();
            Adashb::instance->raise();
            Adashb::instance->activateWindow();
        } else {
            // Create a new instance of StudentLg
            Adashb::instance = new Adashb(this);
            Adashb::instance->show();
        }
        // Hide the main window
        this->hide();

    }
    else {
        ui->label->setText("Invalid user selection");

        // Create a QTimer object
        QTimer* timer = new QTimer(this);

        // Connect the timeout signal of the timer to a lambda function
        connect(timer, &QTimer::timeout, [this, timer]() {
            // Clear the label text when the timer times out
            ui->label->clear();
            // Delete the timer object to avoid memory leaks
            timer->deleteLater();
        });

        // Start the timer with a timeout of 5000 milliseconds (5 seconds)
        timer->start(5000);
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
