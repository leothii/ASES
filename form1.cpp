#include "form1.h"
#include "ui_form1.h"
#include <QtSql>

Form1::Form1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form1)
{
    ui->setupUi(this);
    connect(ui->nextButton, &QPushButton::clicked, this, &Form1::on_nextButton_clicked);


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
}

void Form1::handleRadioButtonClicked()
{
    QRadioButton *clickedButton = qobject_cast<QRadioButton*>(sender()); // Get the sender radio button

    if (clickedButton) {
        // Retrieve the numerical value assigned to the clicked radio button
        int value = clickedButton->property("value").toInt();

        // Update the database with the selected value

        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("sql6.freesqldatabase.com");
        db.setDatabaseName("sql6698709");
        db.setUserName("sql6698709");
        db.setPassword("wQpFvGwERi");
        db.open();
        QSqlQuery query(db);
        QString queryString = "UPDATE EVALUATIONDATA SET A = :value";
        query.prepare(queryString);
        query.bindValue(":value", value);

        if (!query.exec()) {
            qDebug() << "Error updating database:" << query.lastError().text();
        } else {
            qDebug() << "Database updated successfully with value:" << value;
        }
    }
}

void Form1::on_nextButton_clicked()
{
    // Connect the clicked signal of each radio button to the handleRadioButtonClicked slot
    connect(ui->radioButton, &QRadioButton::clicked, this, &Form1::handleRadioButtonClicked);
    connect(ui->radioButton_2, &QRadioButton::clicked, this,&Form1::handleRadioButtonClicked);
    connect(ui->radioButton_3, &QRadioButton::clicked, this, &Form1::handleRadioButtonClicked);
    connect(ui->radioButton_4, &QRadioButton::clicked, this, &Form1::handleRadioButtonClicked);
    connect(ui->radioButton_5, &QRadioButton::clicked, this, &Form1::handleRadioButtonClicked);

    // Assign respective numerical values to each radio button
    ui->radioButton->setProperty("value", 1);
    ui->radioButton_2->setProperty("value", 2);
    ui->radioButton_3->setProperty("value", 3);
    ui->radioButton_4->setProperty("value", 4);
    ui->radioButton_5->setProperty("value", 5);

    // Now the radio buttons are connected and set up, proceed with the rest of the functionality
    // For example, you can show the next window
    if (Form1::instance == nullptr) {
        Form1::instance = new Form1(this);
    }
    Form1::instance->show();
    this->hide();
}

Form1::~Form1()
{
    delete ui;
}
