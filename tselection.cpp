#include "tselection.h"
#include "ui_tselection.h"
#include "form1.h"
#include "instruction.h"
#include "sdashb.h"

Form1* Form1::instance = nullptr;
QString tselection::studentNumber;
QString tselection::teacher;
QString tselection::subject;
tselection::tselection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tselection)
{
    ui->setupUi(this);
    studentNumber = Sdashb::sNum;
    populateTeacherBox();
    populateCourseBox();


    // For backButton
    if (!QObject::connect(ui->backButton, SIGNAL(clicked()), this, SLOT(on_backButton_clicked()), Qt::UniqueConnection)) {
        qDebug() << "Failed to connect backButton signal to on_backButton_clicked slot";
    }

    // For nextButton
    if (!QObject::connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(on_nextButton_clicked()), Qt::UniqueConnection)) {
        qDebug() << "Failed to connect nextButton signal to on_nextButton_clicked slot";
    }



    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();


    if (db.open()) {
        qDebug() << "Database is connected";
    } else {
        qDebug() << "Database is not connected";
    }
}
void tselection::populateTeacherBox() {
    // Clear existing items from the QComboBox
    ui->Teacherbox->clear();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
    // Execute a query to retrieve data from the desired column
    QSqlQuery query("SELECT NAME FROM TEACHERLIST");

    // Check if the query executed successfully
    if (query.exec()) {
        // Iterate through the results and add each item to the QComboBox
        while (query.next()) {
            QString item = query.value(0).toString(); // Assuming the column is the first one
            ui->Teacherbox->addItem(item);
        }
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
}

void tselection::populateCourseBox() {
    // Clear existing items from the QComboBox
    ui->Coursebox->clear();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
    // Execute a query to retrieve data from the desired column
    QSqlQuery query("SELECT SUBJECT FROM COURSELIST");

    // Check if the query executed successfully
    if (query.exec()) {
        // Iterate through the results and add each item to the QComboBox
        while (query.next()) {
            QString item = query.value(0).toString(); // Assuming the column is the first one
            ui->Coursebox->addItem(item);
        }
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
}
void tselection::on_backButton_clicked()
{
    qDebug() << studentNumber;

    // Redirect to the main login window
    if (Instruction::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Instruction::instance = new Instruction(this);
    }
    Instruction::instance->show();
    this->hide();
}

void tselection::on_nextButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    // Ensure the database is connected
    if (!db.open()) {
        qDebug() << "Database is not connected";
        return;
    }

    // Get the selected values from Coursebox and Teacherbox
    tselection::subject = ui->Coursebox->currentText();
    tselection::teacher = ui->Teacherbox->currentText();

    // Prepare SQL query to check if data exists
    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT * FROM EVALUATIONDATA WHERE STUDENTNUMBER = :studentNumber AND SUBJECT = :subject AND TEACHER = :teacher");
    checkQuery.bindValue(":studentNumber", studentNumber);
    checkQuery.bindValue(":subject", subject);
    checkQuery.bindValue(":teacher", teacher);

    // Execute the query to check if data exists
    if (!checkQuery.exec()) {
        qDebug() << "Failed to execute query:" << checkQuery.lastError().text();
        return;
    }

    // If data exists, show Form1 instance
    if (checkQuery.next()) {
        if (Form1::instance == nullptr) {
            Form1::instance = new Form1(this);
            Form1::instance->show();
        }
        this->hide();
        return; // Exit the function as data exists
    }

    // Data doesn't exist, proceed with insertion
    QSqlQuery query(db);
    query.prepare("INSERT INTO EVALUATIONDATA (STUDENTNUMBER, SUBJECT, TEACHER) VALUES (:studentNumber, :subject, :teacher)");
    query.bindValue(":studentNumber", studentNumber);
    query.bindValue(":subject", subject);
    query.bindValue(":teacher", teacher);

    // Execute the query for insertion
    if (!query.exec()) {
        qDebug() << "Failed to insert data into database:" << query.lastError().text();
        return;
    }

    // Show Form1 instance after insertion
    if (Form1::instance == nullptr) {
        Form1::instance = new Form1(this);
        Form1::instance->show();
    }
    this->hide();
}

// Destructor
tselection::~tselection()
{
    delete ui;
}
