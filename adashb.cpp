#include "adashb.h"
#include "ui_adashb.h"
#include "mainwindow.h"


QString Adashb::teacher;
QString Adashb::subject;
QString Adashb::email;
QString Adashb::password;
Adashb::Adashb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Adashb)
{
    ui->setupUi(this);
     connect(ui->taddButton, &QPushButton::clicked, this, &Adashb::on_taddButton_clicked);
     connect(ui->saddButton, &QPushButton::clicked, this, &Adashb::on_saddButton_clicked);
     connect(ui->backButton, &QPushButton::clicked, this, &Adashb::on_backButton_clicked);
}

// For the taddButton (for adding teachers)
// For the taddButton (for adding teachers)
void Adashb::on_taddButton_clicked() {
    // Retrieve form data
    teacher = ui->taddEdit->text();
    email = ui->taddEdit_2->text();
    password = ui->taddEdit_3->text();

    // Check for empty fields
    if (teacher.isEmpty() || email.isEmpty() || password.isEmpty()) {
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
    queryCheckAccount.prepare("SELECT COUNT(*) FROM TEACHERLIST WHERE NAME = :teacher");
    queryCheckAccount.bindValue(":teacher", teacher);

    if (queryCheckAccount.exec()) {
        queryCheckAccount.next();
        int count = queryCheckAccount.value(0).toInt();

        if (count > 0) {
            QMessageBox::warning(this, "Error", "A teacher with this name already exists.");
            db.close();
            return;
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for existing teacher: " + queryCheckAccount.lastError().text());
        db.close();
        return;
    }

    // Prepare query to insert both teacher and subject
    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO TEACHERLIST(NAME, EMAIL, PASSWORD) VALUES(:teacher, :email, :password)");
    queryInsertData.bindValue(":teacher", teacher);
    queryInsertData.bindValue(":email", email);
    queryInsertData.bindValue(":password", password);

    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to add the teacher?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to add teacher: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Teacher added successfully!");
    }

    db.close();
}

// For the saddButton (for adding subjects)
void Adashb::on_saddButton_clicked() {
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
    queryCheckAccount.prepare("SELECT COUNT(*) FROM COURSELIST WHERE SUBJECT = :subject");
    queryCheckAccount.bindValue(":subject", subject);

    if (queryCheckAccount.exec()) {
        queryCheckAccount.next();
        int count = queryCheckAccount.value(0).toInt();

        if (count > 0) {
            QMessageBox::warning(this, "Error", "A subject with this name already exists.");
            db.close();
            return;
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for existing subject: " + queryCheckAccount.lastError().text());
        db.close();
        return;
    }
    // Prepare query to insert both teacher and subject
    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO COURSELIST(SUBJECT) VALUES(:subject)");
    queryInsertData.bindValue(":subject", subject);

    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to add the subject?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to add subject: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Subject added successfully!");
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
