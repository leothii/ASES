#include "adashb.h"
#include "ui_adashb.h"
#include "mainwindow.h"


QString Adashb::teacher;
QString Adashb::subject;
Adashb::Adashb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Adashb)
{
    ui->setupUi(this);
     connect(ui->taddButton, &QPushButton::clicked, this, &Adashb::on_taddButton_clicked);
     connect(ui->saddButton, &QPushButton::clicked, this, &Adashb::on_saddButton_clicked);
     connect(ui->backButton, &QPushButton::clicked, this, &Adashb::on_backButton_clicked);
}

void Adashb::on_taddButton_clicked(){

    // Retrieve form data
    teacher = ui->taddEdit->text();
    // Check for empty fields
    if (teacher.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields must be filled out.");
        return;
    }

    // Database connection and query preparation
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    if (!db.isOpen()) {
        qDebug() << "Database connection failed";
        QMessageBox::warning(this, "Error", "Database connection failed!");
        return; // Exit the function if the database connection fails
    }

    QSqlQuery queryCheckAccount(db);
    queryCheckAccount.prepare("SELECT COUNT(*) FROM FACULTY WHERE NAME = :teacher");
    queryCheckAccount.bindValue(":NAME", teacher);


    if (queryCheckAccount.exec()) {
        queryCheckAccount.next(); // Move to the first (and only) record
        int count = queryCheckAccount.value(0).toInt(); // Retrieve the count

        if (count > 0) {
            QMessageBox::warning(this, "Error", "An account with this email or student number already exists.");
            db.close();
            return; // Exit the function if an account already exists
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for existing account: " + queryCheckAccount.lastError().text());
        db.close();
        return; // Exit the function if the check for existing account failed
    }


    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO FACULTY(NAME) VALUES(:NAME)");
    queryInsertData.bindValue(":NAME", teacher);

    // Display confirmation message before executing the query
    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to add the teacher?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to create account: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Account created successfully!");

    }

    db.close();

}

void Adashb::on_saddButton_clicked(){

    // Retrieve form data
    subject = ui->saddEdit->text();
    // Check for empty fields
    if (subject.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields must be filled out.");
        return;
    }

    // Database connection and query preparation
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    if (!db.isOpen()) {
        qDebug() << "Database connection failed";
        QMessageBox::warning(this, "Error", "Database connection failed!");
        return; // Exit the function if the database connection fails
    }

    QSqlQuery queryCheckAccount(db);
    queryCheckAccount.prepare("SELECT COUNT(*) FROM FACULTY WHERE SUBJECT = :subject");
    queryCheckAccount.bindValue(":SUBJECT", subject);


    if (queryCheckAccount.exec()) {
        queryCheckAccount.next(); // Move to the first (and only) record
        int count = queryCheckAccount.value(0).toInt(); // Retrieve the count

        if (count > 0) {
            QMessageBox::warning(this, "Error", "An account with this email or student number already exists.");
            db.close();
            return; // Exit the function if an account already exists
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for existing account: " + queryCheckAccount.lastError().text());
        db.close();
        return; // Exit the function if the check for existing account failed
    }


    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO FACULTY(SUBJECT) VALUES(:SUBJECT)");
    queryInsertData.bindValue(":SUBJECT", subject);

    // Display confirmation message before executing the query
    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to add the subject?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to create account: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Account created successfully!");

    }

    db.close();

}

void Adashb::on_backButton_clicked() {

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

Adashb::~Adashb()
{
    delete ui;
}
