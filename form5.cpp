#include "form5.h"
#include "ui_form5.h"
#include "tselection.h"
#include "sdashb.h"

Form5 * Form5::instance=nullptr;
Form5::Form5(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form5)
{
    ui->setupUi(this);
    studentnum= tselection::studentNumber;
    Teacher= tselection::teacher;
    Subject= tselection::subject;


    connect(ui->submitButton, &QPushButton::clicked, this, &Form5::on_submitButton_clicked);

}


void Form5::on_submitButton_clicked(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    // Get message input
    QString message = ui->messageEdit->toPlainText();

    // Fetch values from database
    QSqlQuery fetchQuery(db);
    QString fetchQueryString = "SELECT A, B, C, D FROM EVALUATIONDATA WHERE STUDENTNUMBER = :studentNumber AND TEACHER = :teacher AND SUBJECT = :subject";
    fetchQuery.prepare(fetchQueryString);
    fetchQuery.bindValue(":studentNumber", studentnum);
    fetchQuery.bindValue(":teacher", Teacher);
    fetchQuery.bindValue(":subject", Subject);

    if (!fetchQuery.exec()) {
        qDebug() << "Error fetching values from database:" << fetchQuery.lastError().text();
        return;
    }

    // Calculate sum and average
    double sum = 0.0;
    int count = 0;
    while (fetchQuery.next()) {
        double A = fetchQuery.value(0).toDouble();
        double B = fetchQuery.value(1).toDouble();
        double C = fetchQuery.value(2).toDouble();
        double D = fetchQuery.value(3).toDouble();

        sum += A + B + C + D;
        count += 4; // Assuming each column value is counted
    }

    double average = sum / count;

    // Update OVERALL column
    QSqlQuery updateQuery(db);
    QString updateQueryString = "UPDATE EVALUATIONDATA SET OVERALL = :average WHERE STUDENTNUMBER = :studentNumber AND TEACHER = :teacher AND SUBJECT = :subject";
    updateQuery.prepare(updateQueryString);
    updateQuery.bindValue(":average", average);
    updateQuery.bindValue(":studentNumber", studentnum);
    updateQuery.bindValue(":teacher", Teacher);
    updateQuery.bindValue(":subject", Subject);

    if (!updateQuery.exec()) {
        qDebug() << "Error updating OVERALL column in database:" << updateQuery.lastError().text();
    } else {
        qDebug() << "OVERALL column updated successfully with average:" << average;
    }

    // Update MESSAGE column
    QSqlQuery messageQuery(db);
    QString messageQueryString = "UPDATE EVALUATIONDATA SET MESSAGE = :message WHERE STUDENTNUMBER = :studentNumber AND TEACHER = :teacher AND SUBJECT = :subject";
    messageQuery.prepare(messageQueryString);
    messageQuery.bindValue(":message", message);
    messageQuery.bindValue(":studentNumber", studentnum);
    messageQuery.bindValue(":teacher", Teacher);
    messageQuery.bindValue(":subject", Subject);

    if (!messageQuery.exec()) {
        qDebug() << "Error updating MESSAGE column in database:" << messageQuery.lastError().text();
    } else {
        qDebug() << "MESSAGE column updated successfully with message:" << message;
    }

    // Proceed to the next window
    Sdashb::instance= nullptr;
    Sdashb::instance = new Sdashb(this);
    Sdashb::instance->show();
    this->hide();
}


Form5::~Form5()
{
    delete ui;
}
