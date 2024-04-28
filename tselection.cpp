#include "mainwindow.h"
#include "tselection.h"
#include "ui_tselection.h"
#include "form1.h"
#include "instruction.h"

Form1* Form1::instance=nullptr;

tselection::tselection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tselection)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &tselection::on_backButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &tselection::on_nextButton_clicked);

    connect(ui->Coursebox, SIGNAL(currentIndexChanged(QString&)),
            this, SLOT(onCourseBoxIndexChanged(QString&)));

    // Connect Teacherbox's currentIndexChanged signal
    connect(ui->Teacherbox, SIGNAL(currentIndexChanged(QString&)),
            this, SLOT(onTeacherBoxIndexChanged(QString&)));

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    if(db.open())
    {
        qDebug() << "Database is connected";
    }
    else
    {
        qDebug() << "Database is not connected";
    }
}



void tselection::on_backButton_clicked()
{
    // Redirect to the main login window
    if (Instruction::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Instruction::instance = new Instruction(this);
    }
    Instruction::instance->show();
    this->hide();
}


// Slot to handle Coursebox selection change
void tselection::onCourseBoxIndexChanged(const QString &text) {
    updateDatabase("SUBJECT", text);
}

// Slot to handle Teacherbox selection change
void tselection::onTeacherBoxIndexChanged(const QString &text) {
    updateDatabase("TEACHER", text);
}

// Function to update the database
void tselection::updateDatabase(const QString &columnName, const QString &value) {
    // Prepare the SQL query to update the database
    QString queryString = QString("UPDATE EVALUATIONDATA SET %1 = ?").arg(columnName);
    QSqlQuery query;

    // Prepare the query
    if (query.prepare(queryString)) {
        // Bind the value to the query
        query.addBindValue(value);

        // Execute the query
        if (!query.exec()) {
            // Handle error
            qDebug() << "Error executing query: " << query.lastError().text();
        }
    } else {
        // Handle error in query preparation
        qDebug() << "Error preparing query: " << query.lastError().text();
    }
}
void tselection::on_nextButton_clicked()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
    // Get the selected values from Coursebox and Teacherbox
    QString subject = ui->Coursebox->currentText();
    QString teacher = ui->Teacherbox->currentText();

    // Update the database with the selected values
    updateDatabase("SUBJECT", subject);
    updateDatabase("TEACHER", teacher);

    db.close();

    // Redirect to the main login window
    if (Form1::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Form1::instance = new Form1(this);
    }
    Form1::instance->show();
    this->hide();
}

tselection::~tselection()
{
    delete ui;
}
