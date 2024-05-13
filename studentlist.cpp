#include "studentlist.h"
#include "ui_studentlist.h"
#include "adashb.h"



Studentlist::Studentlist(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Studentlist)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Studentlist::on_backButton_clicked);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    if (!db.open()) {
        qDebug() << "Database connection failed.";
        return;
    }

    // Fetch data from the database and populate studentList
    QSqlQuery query("SELECT FIRSTNAME, MIDDLENAME, LASTNAME FROM STUDENTINFORMATION", db);
    while (query.next()) {
        QString fullName;
        if (query.value(1).toString().isEmpty())
            fullName = query.value(0).toString() + " " + query.value(2).toString();
        else
            fullName = query.value(0).toString() + " " + query.value(1).toString() + " " + query.value(2).toString();
        ui->studentList->addItem(fullName);
    }
    QSqlQuery detailQuery("SELECT EMAIL FROM STUDENTINFORMATION", db);
    while (detailQuery.next()) {
        QString email = detailQuery.value(0).toString(); // Retrieve email address from QSqlQuery result
        ui->detailList->addItem(email);
    }
}

void Studentlist::on_backButton_clicked()
{
    // Redirect to the main login window
    if (Adashb::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Adashb::instance = new Adashb(this);
    }
    Adashb::instance->show();
    this->hide();
}



Studentlist::~Studentlist()
{
    delete ui;
}
