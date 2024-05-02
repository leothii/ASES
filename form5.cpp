#include "form5.h"
#include "ui_form5.h"

Form5 * Form5::instance=nullptr;
Form5::Form5(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form5)
{
    ui->setupUi(this);
    connect(ui->submitButton, &QPushButton::clicked, this, &Form5::on_submitButton_clicked);

}


void Form5::on_submitButton_clicked(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    // Check connection status and print for debugging
    if (db.open()) {
        qDebug() << "Database connection successful";
    } else {
        qDebug() << "Database connection failed";
    }


}

Form5::~Form5()
{
    delete ui;
}
