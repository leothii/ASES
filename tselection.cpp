#include "tselection.h"
#include "ui_tselection.h"
#include "form1.h"
#include "instruction.h"
#include "sdashb.h"

Form1* Form1::instance = nullptr;

tselection::tselection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tselection)
{
    ui->setupUi(this);
    studentNumber = Sdashb::sNum;

    // Connect signals and slots only once
    // For backButton
    QObject::connect(ui->backButton, SIGNAL(clicked()), this, SLOT(on_backButton_clicked()));

    // For nextButton
    QObject::connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(on_nextButton_clicked()));

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
    QString subject = ui->Coursebox->currentText();
    QString teacher = ui->Teacherbox->currentText();

    // Prepare SQL query
    QSqlQuery query(db);
    query.prepare("INSERT INTO EVALUATIONDATA (STUDENTNUMBER, SUBJECT, TEACHER) VALUES (:studentNumber, :subject, :teacher)");
    query.bindValue(":studentNumber", studentNumber);
    query.bindValue(":subject", subject);
    query.bindValue(":teacher", teacher);

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Failed to insert data into database:" << query.lastError().text();
        return;
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
