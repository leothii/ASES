#include "sdashb.h"
#include "ui_sdashb.h"
#include "mainwindow.h"
#include "index.h"
#include "edit.h"

Edit* Edit::instance = nullptr;

QString Sdashb::sNum;
Sdashb::Sdashb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sdashb)
{
    ui->setupUi(this);

    nameLabel = ui->name;
    emailLabel = ui->email;
    studentNumberLabel = ui->studentNum;

    connect(ui->logoutButton, &QPushButton::clicked, this, &Sdashb::on_logoutButton_clicked);
    connect(ui->EvaluateButton, &QPushButton::clicked, this, &Sdashb::on_EvaluateButton_clicked);
    connect(ui->EditButton, &QPushButton::clicked, this, &Sdashb::on_EditButton_clicked);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();




}

void Sdashb::setStudentInformation(const QString& fullName, const QString& studentNumber, const QString& email) {
    // Assuming your labels are named Name, StudentNumber, and Email
    ui->name->setText("Name: " + fullName);
    ui->studentNum->setText("Student Number: " + studentNumber);
    ui->email->setText("Email: " + email);
    this->sNum = studentNumber;
    setprogressBar();
}


void Sdashb::setprogressBar(){

    QSqlQuery evalQuery(QSqlDatabase::database());
    evalQuery.prepare("SELECT COUNT(*) FROM EVALUATIONDATA WHERE STUDENTNUMBER = :studentNumber");
    evalQuery.bindValue(":studentNumber", Sdashb::sNum);
    if (!evalQuery.exec()) {
        qDebug() << "Error executing evaluation data query:" << evalQuery.lastError().text();
        return;
    }
    evalQuery.next();
    int evalCount = evalQuery.value(0).toInt();
    qDebug()<<evalCount;
    qDebug()<<Sdashb::sNum;

    // Get the number of rows in TEACHERLIST
    QSqlQuery teacherQuery(QSqlDatabase::database());
    teacherQuery.prepare("SELECT COUNT(*) FROM TEACHERLIST");
    if (!teacherQuery.exec()) {
        qDebug() << "Error executing teacher list query:" << teacherQuery.lastError().text();
        return;
    }
    teacherQuery.next();
    int teacherCount = teacherQuery.value(0).toInt();
    qDebug()<<teacherCount;
    // Calculate the progress percentage
    int progress = (evalCount) / teacherCount;
    qDebug()<<progress;
    // Update the progress bar
    ui->progressBar->setValue(progress);
}
void Sdashb::on_logoutButton_clicked()
{
    // Redirect to the main login window
    if (MainWindow::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        MainWindow::instance = new MainWindow(this);
    }
    MainWindow::instance->show();
    this->hide();
}

void Sdashb::on_EvaluateButton_clicked() {
    // Check if student information is complete
    QSqlQuery query(QSqlDatabase::database());
    query.prepare("SELECT MIDDLENAME, ACADEMICLEVEL, PROGRAM, YEARLEVEL, SECTION FROM STUDENTINFORMATION WHERE STUDENTNUMBER = :studentNumber");
    query.bindValue(":studentNumber", sNum);

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    if (query.next()) {
        QString middleName = query.value("MIDDLENAME").toString();
        QString academicLevel = query.value("ACADEMICLEVEL").toString();
        QString program = query.value("PROGRAM").toString();
        QString yearLevel = query.value("YEARLEVEL").toString();
        QString section = query.value("SECTION").toString();

        // Check if any specified column is empty
        if (middleName.isEmpty() || academicLevel.isEmpty() || program.isEmpty() || yearLevel.isEmpty() || section.isEmpty()) {
            ui->Emessage->setText("Edit your profile first!");
            return;
        }
    } else {
        qDebug() << "No student found with student number:" << sNum;
        return;
    }

    // Redirect to the evaluation window
    if (Index::instance == nullptr) {
        // Create a new instance of the evaluation window if it doesn't already exist
        Index::instance = new Index(this);
    }
    Index::instance->show();
    this->hide();
}


void Sdashb::on_EditButton_clicked()
{
    // Redirect to the main login window
    if (Edit::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Edit::instance = new Edit(this);
    }
    Edit::instance->show();
    this->hide();
}


Sdashb::~Sdashb()
{
    delete ui;
}



