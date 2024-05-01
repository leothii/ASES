#include "form1.h"
#include "ui_form1.h"
#include <QtSql>
#include "tselection.h"

Form1::Form1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form1)
{
    ui->setupUi(this);
    studentnum= tselection::studentNumber;
    Teacher= tselection::teacher;
    Subject= tselection::subject;
    connectRadioButtons();
    connect(ui->nextButton, &QPushButton::clicked, this, &Form1::on_nextButton_clicked);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
}

void Form1::connectRadioButtons()
{qDebug()<<studentnum<<Teacher<<Subject;
    // Connect all radio buttons to the slot handleRadioButtonClicked()
    QList<QRadioButton*> radioButtons = this->findChildren<QRadioButton*>();
    foreach (QRadioButton* radioButton, radioButtons) {
        connect(radioButton, &QRadioButton::clicked, this, &Form1::handleRadioButtonClicked);
    }
}

void Form1::handleRadioButtonClicked()
{
    QRadioButton *clickedButton = qobject_cast<QRadioButton*>(sender()); // Get the sender radio button

    if (clickedButton) {
        // Retrieve the numerical value assigned to the clicked radio button
        int value = clickedButton->property("value").toInt();

        // Store the value in the selectedValues list
        selectedValues.append(value);
    }
}

void Form1::on_nextButton_clicked()
{
    // Calculate the average of selected values
    double average = calculateAverage();

    // Update the database with the average value
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    QSqlQuery query(db);
    QString queryString = "UPDATE EVALUATIONDATA SET A = :average WHERE STUDENTNUMBER = :studentNumber AND TEACHER = :teacher AND SUBJECT = :subject";
    query.prepare(queryString);
    query.bindValue(":average", average);
    query.bindValue(":studentNumber", studentnum);
    query.bindValue(":teacher", Teacher);
    query.bindValue(":subject", Subject);

    if (!query.exec()) {
        qDebug() << "Error updating database:" << query.lastError().text();
    } else {
        qDebug() << "Database updated successfully with average value:" << average;
    }

    // Proceed to the next window
    if (Form1::instance == nullptr) {
        Form1::instance = new Form1(this);
    }
    Form1::instance->show();
    this->hide();
}


double Form1::calculateAverage()
{
    // Calculate the average of selected values
    int sum = 0;
    for (int value : selectedValues) {
        sum += value;
    }
    if (!selectedValues.isEmpty()) {
        return static_cast<double>(sum) / selectedValues.size();
    } else {
        return 0.0; // Handle the case where no values are selected
    }
}

Form1::~Form1()
{
    delete ui;
}
