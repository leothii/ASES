#include "tdashb.h"
#include "ui_tdashb.h"
#include "teacherlg.h"

Tdashb::Tdashb(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tdashb)
{
    ui->setupUi(this);

    // Retrieve the email of the logged-in teacher
    QString email = TeacherLg::email;

    // Call the function to get the name using the email
    QString name = getName(email) + "!";

    // Set the retrieved name in the UI
    ui->wName->setText(name);
}

QString Tdashb::getName(const QString& email) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (!db.open()) {
        qDebug() << "Database connection failed.";
        return "Unknown";
    }

    QSqlQuery query(db);
    query.prepare("SELECT NAME FROM TEACHERLIST WHERE EMAIL = :email");
    query.bindValue(":email", email);

    if (!query.exec()) {
        qDebug() << "Query execution failed.";
        return "Unknown";
    }

    if (query.next()) {
        QString name = query.value(0).toString();
        db.close();
        return name;
    } else {
        qDebug() << "No matching record found.";
        db.close();
        return "Unknown";
    }
}

Tdashb::~Tdashb()
{
    delete ui;
}
