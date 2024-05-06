#include "studentpass.h"
#include "ui_studentpass.h"
#include "studentlg.h"

Studentpass* Studentpass::instance = nullptr;

Studentpass::Studentpass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Studentpass)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Studentpass::on_backButton_clicked);
    connect(ui->ResetButton, &QPushButton::clicked, this, &Studentpass::on_resetButton_clicked);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
}


void Studentpass::on_backButton_clicked() {

    this->hide();

    if (StudentLg::instance) {
        StudentLg::instance->show();
        StudentLg::instance->raise();\
            StudentLg::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        StudentLg::instance = new StudentLg(this);
        StudentLg::instance->show();
    }}

void Studentpass::on_resetButton_clicked() {
    QString email = ui->emailedit->text();
    QString newPassword = ui->passwordedit->text();
    QString confirmPassword = ui->passwordedit2->text();

    // Check if email exists in the database
    QSqlQuery queryCheckEmail(QSqlDatabase::database());
    queryCheckEmail.prepare("SELECT COUNT(*) FROM STUDENTINFORMATION WHERE EMAIL = :email");
    queryCheckEmail.bindValue(":email", email);

    if (!queryCheckEmail.exec()) {
        qDebug() << "Failed to execute query to check email:" << queryCheckEmail.lastError().text();
        QMessageBox::warning(this, "Error", "Failed to check email: " + queryCheckEmail.lastError().text());
        return;
    }

    queryCheckEmail.next();
    int emailCount = queryCheckEmail.value(0).toInt();

    if (emailCount == 0) {
        QMessageBox::warning(this, "Error", "Email not found in the database.");
        return;
    }

    // Check if new password and confirm password match
    if (newPassword != confirmPassword) {
        QMessageBox::warning(this, "Error", "New password and confirm password do not match.");
        return;
    }

    // Database connection
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isValid()) {
        qDebug() << "Invalid database connection";
        QMessageBox::warning(this, "Error", "Database connection failed!");
        return;
    }

    // Update password in the database
    QSqlQuery queryUpdate(db);
    queryUpdate.prepare("UPDATE STUDENTINFORMATION SET PASSWORD = :password WHERE EMAIL = :email");
    queryUpdate.bindValue(":password", newPassword);
    queryUpdate.bindValue(":email", email);

    if (!queryUpdate.exec()) {
        qDebug() << "Failed to update password:" << queryUpdate.lastError().text();
        QMessageBox::warning(this, "Error", "Failed to update password: " + queryUpdate.lastError().text());
        return;
    }

    if (StudentLg::instance) {
        StudentLg::instance->show();
        StudentLg::instance->raise();\
            StudentLg::instance->activateWindow();
    } else {

        // Create a new instance of Sdashb
        StudentLg::instance = new StudentLg(this);
        StudentLg::instance->show();}
    this->hide();
}


Studentpass::~Studentpass()
{
    delete ui;
}
