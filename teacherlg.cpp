#include "teacherlg.h"
#include "ui_teacherlg.h"
#include "mainwindow.h"
#include "tdashb.h"
#include "teacherpass.h"


QString TeacherLg::password;
QString TeacherLg::email;


Tdashb* Tdashb::instance = nullptr;

TeacherLg::TeacherLg(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TeacherLg)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &TeacherLg::on_backButton_clicked);
    connect(ui->loginButton, &QPushButton::clicked, this, &TeacherLg::on_loginButton_clicked);
    connect(ui->PassButton, &QPushButton::clicked, this, &TeacherLg::on_passButton_clicked);
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

void TeacherLg::on_loginButton_clicked() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
    email = ui->lineEdit_1->text();
    password = ui->lineEdit_2->text();

    // Check if any of the fields are empty
    if (email.isEmpty() || password.isEmpty()){
        ui->Emessage->setText("Please fill out all fields");
        return;
    }
    if (!db.open()) {
        ui->Emessage->setText("Connection Failed");
        return;
    }

    // Query the database for the user
    QSqlQuery queryLogin(db);
    queryLogin.prepare("SELECT EMAIL, PASSWORD  FROM TEACHERLIST WHERE EMAIL = :email AND PASSWORD = :password");
    queryLogin.bindValue(":email", email);
    queryLogin.bindValue(":password", password);

    if (!queryLogin.exec()) {
        ui->Emessage->setText("Log in failed");
        db.close();
        return;
    }

    if (queryLogin.next()) {
        // Retrieve data from the query
        QString email = queryLogin.value("EMAIL").toString();
        QString storedPassword = queryLogin.value("PASSWORD").toString();

        // Check if the provided password matches the stored password
        if (password == storedPassword) {
            // Save login information if checkbox is checked
            if (ui->checkBox->isChecked()) {
                QSettings settings;
                settings.setValue("rememberMe", true);
                settings.setValue("email", email);
                settings.setValue("password", password);
            } else {
                // Clear saved values if checkbox is not checked
                QSettings settings;
                settings.remove("rememberMe");
                settings.remove("email");
                settings.remove("password");
            }
            if (Tdashb::instance == nullptr) {
                Tdashb::instance = new Tdashb(this);
                Tdashb::instance->show();
            }
            this->hide();
        } else {
            ui->Emessage->setText("Invalid credentials");
        }

    } else {
        ui->Emessage->setText("No matching record found");
    }
    db.close();
    this->hide();
}

void TeacherLg::on_passButton_clicked() {


    if (Teacherpass::instance) {
        Teacherpass::instance->show();
        Teacherpass::instance->raise();\
            Teacherpass::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        Teacherpass::instance = new Teacherpass(this);
        Teacherpass::instance->show();
    }
    this->hide();
}


TeacherLg::~TeacherLg()
{
    delete ui;
}
