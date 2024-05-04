#include "form4.h"
#include "ui_form4.h"
#include <QtSql>
#include "tselection.h"
#include "form5.h"


Form4*Form4::instance=nullptr;

Form4::Form4(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form4)
{
    ui->setupUi(this);
    studentnum= tselection::studentNumber;
    Teacher= tselection::teacher;
    Subject= tselection::subject;
    connectRadioButtons();
    connect(ui->nextButton, &QPushButton::clicked, this, &Form4::on_nextButton_clicked);

    ui->radioButton_1->setProperty("value", 1);
    ui->radioButton_2->setProperty("value", 2);
    ui->radioButton_3->setProperty("value", 3);
    ui->radioButton_4->setProperty("value", 4);
    ui->radioButton_5->setProperty("value", 5);
    ui->radioButton_6->setProperty("value", 1);
    ui->radioButton_7->setProperty("value", 2);
    ui->radioButton_8->setProperty("value", 3);
    ui->radioButton_9->setProperty("value", 4);
    ui->radioButton_10->setProperty("value", 5);
    ui->radioButton_11->setProperty("value", 1);
    ui->radioButton_12->setProperty("value", 2);
    ui->radioButton_13->setProperty("value", 3);
    ui->radioButton_14->setProperty("value", 4);
    ui->radioButton_15->setProperty("value", 5);
    ui->radioButton_16->setProperty("value", 1);
    ui->radioButton_17->setProperty("value", 2);
    ui->radioButton_18->setProperty("value", 3);
    ui->radioButton_19->setProperty("value", 4);
    ui->radioButton_20->setProperty("value", 5);
    ui->radioButton_21->setProperty("value", 1);
    ui->radioButton_22->setProperty("value", 2);
    ui->radioButton_23->setProperty("value", 3);
    ui->radioButton_24->setProperty("value", 4);
    ui->radioButton_25->setProperty("value", 5);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
}

void Form4::connectRadioButtons()
{qDebug()<<studentnum<<Teacher<<Subject;
    // Connect all radio buttons to the slot handleRadioButtonClicked()
    QList<QRadioButton*> radioButtons = this->findChildren<QRadioButton*>();
    foreach (QRadioButton* radioButton, radioButtons) {
        connect(radioButton, &QRadioButton::clicked, this, &Form4::handleRadioButtonClicked);
    }
}

void Form4::handleRadioButtonClicked()
{
    QRadioButton *clickedButton = qobject_cast<QRadioButton*>(sender()); // Get the sender radio button

    if (clickedButton) {
        // Retrieve the numerical value assigned to the clicked radio button
        int value = clickedButton->property("value").toInt();

        // Store the value in the selectedValues list
        selectedValues.append(value);
    }
}

void Form4::on_nextButton_clicked()
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
    QString queryString = "UPDATE EVALUATIONDATA SET D = :average WHERE STUDENTNUMBER = :studentNumber AND TEACHER = :teacher AND SUBJECT = :subject";
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
    if(Form5::instance==nullptr){
    Form5::instance = new Form5();
    Form5::instance->show();
    this->hide();
    }
}


double Form4::calculateAverage()
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

Form4::~Form4()
{
    delete ui;
}
