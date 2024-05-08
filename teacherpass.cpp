#include "teacherpass.h"
#include "ui_teacherpass.h"
#include "teacherlg.h"


Teacherpass* Teacherpass::instance = nullptr;
Teacherpass::Teacherpass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Teacherpass)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Teacherpass::on_backButton_clicked);
    connect(ui->resetButton, &QPushButton::clicked, this, &Teacherpass::on_resetButton_clicked);
}


void Teacherpass::on_backButton_clicked() {

    this->hide();

    if (TeacherLg::instance) {
        TeacherLg::instance->show();
        TeacherLg::instance->raise();\
            TeacherLg::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        TeacherLg::instance = new TeacherLg(this);
        TeacherLg::instance->show();
    }}


void Teacherpass::on_resetButton_clicked() {
    QString email = ui->emailedit->text();
    QString newPassword = ui->passwordedit->text();
    QString confirmPassword = ui->passwordedit2->text();

    // Check if email exists in the database
    QSqlQuery queryCheckEmail(QSqlDatabase::database());
    queryCheckEmail.prepare("SELECT COUNT(*) FROM TEACHERLIST WHERE EMAIL = :email");
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
    queryUpdate.prepare("UPDATE TEACHERLIST SET PASSWORD = :password WHERE EMAIL = :email");
    queryUpdate.bindValue(":password", newPassword);
    queryUpdate.bindValue(":email", email);

    if (!queryUpdate.exec()) {
        qDebug() << "Failed to update password:" << queryUpdate.lastError().text();
        QMessageBox::warning(this, "Error", "Failed to update password: " + queryUpdate.lastError().text());
        return;
    }

    if (TeacherLg::instance) {
        TeacherLg::instance->show();
        TeacherLg::instance->raise();\
            TeacherLg::instance->activateWindow();
    } else {

        // Create a new instance of Sdashb
        TeacherLg::instance = new TeacherLg(this);
        TeacherLg::instance->show();}
    this->hide();
}
Teacherpass::~Teacherpass()
{
    delete ui;
}
