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
    QString subject = ui->Coursebox->currentText();
    QString teacher = ui->Teacherbox->currentText();

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
{    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
    // Ensure the database is connected
    if (!db.isOpen()) {
        qDebug() << "Database is not connected";
        return;
    }

    // Get the selected values from Coursebox and Teacherbox
    tselection::subject = ui->Coursebox->currentText();
    tselection::teacher = ui->Teacherbox->currentText();

    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT * FROM EVALUATIONDATA WHERE STUDENTNUMBER = :studentNumber AND SUBJECT = :subject AND TEACHER = :teacher");
    checkQuery.bindValue(":studentNumber", studentNumber);
    checkQuery.bindValue(":subject", subject);
    checkQuery.bindValue(":teacher", teacher);

    if (checkQuery.exec() && checkQuery.next()) {
        // Data already exists, update it
        QSqlQuery updateQuery(db);
        updateQuery.prepare("UPDATE EVALUATIONDATA SET SUBJECT = :subject, TEACHER = :teacher WHERE STUDENTNUMBER = :studentNumber");
        updateQuery.bindValue(":subject", subject);
        updateQuery.bindValue(":teacher", teacher);
        updateQuery.bindValue(":studentNumber", studentNumber);

        if (!updateQuery.exec()) {
            qDebug() << "Failed to update data in database:" << updateQuery.lastError().text();
            return;
        }
    } else {
        // Data doesn't exist, insert it
        QSqlQuery insertQuery(db);
        insertQuery.prepare("INSERT INTO EVALUATIONDATA (STUDENTNUMBER, SUBJECT, TEACHER) VALUES (:studentNumber, :subject, :teacher)");
        insertQuery.bindValue(":studentNumber", studentNumber);
        insertQuery.bindValue(":subject", subject);
        insertQuery.bindValue(":teacher", teacher);

        if (!insertQuery.exec()) {
            qDebug() << "Failed to insert data into database:" << insertQuery.lastError().text();
            return;
        }
    }
    // Redirect to the main login window
    if (Form1::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Form1::instance = new Form1(this);
        Form1::instance->show();
    }

    this->hide();
}

tselection::~tselection()
{
    delete ui;
}
