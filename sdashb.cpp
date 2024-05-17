#include "sdashb.h"
#include "ui_sdashb.h"
#include "mainwindow.h"
#include "index.h"
#include "edit.h"
#include "studentlg.h"
#include "history.h"

Edit* Edit::instance = nullptr;
History* History::instance = nullptr;

QString Sdashb::sNum;
Sdashb::Sdashb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sdashb)
{
    ui->setupUi(this);

    nameLabel = ui->name;
    emailLabel = ui->email;
    studentNumberLabel = ui->studentNum;

    if (!QObject::connect(ui->logoutButton, &QPushButton::clicked, this, &Sdashb::on_logoutButton_clicked, Qt::UniqueConnection)) {
        qDebug() << "Failed to connect logoutButton signal to on_logoutButton_clicked slot";
    }

    connect(ui->EvaluateButton, &QPushButton::clicked, this, &Sdashb::on_EvaluateButton_clicked);
    connect(ui->EditButton, &QPushButton::clicked, this, &Sdashb::on_EditButton_clicked);
     connect(ui->HistoryButton, &QPushButton::clicked, this, &Sdashb::on_HistoryButton_clicked);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
    setprogressBar();
    if (db.open()) {
        qDebug() << "Database is connected";
        QSqlQuery query(db);
        query.prepare("SELECT EVALUATIONSTATUS, SEMESTER, ACADEMICYEAR FROM SYSTEMINFO");
        if (query.exec() && query.first()) {
            QString evaluationStatus = query.value(0).toString();
            QString semester = query.value(1).toString();
            QString academicyear = query.value(2).toString();

            ui->Eval->setText(evaluationStatus);
            ui->Semester->setText(semester);
            ui->AcadYear->setText("Academic Year: " + academicyear);

            // Set color based on evaluationStatus
            if (evaluationStatus == "ONGOING") {
                ui->Eval->setStyleSheet("color: green;");
            } else if (evaluationStatus == "ENDED") {
                ui->Eval->setStyleSheet("color: red;");
            } else {
                // Handle any other status here
                // For example, setting it to black for unknown status
                ui->Eval->setStyleSheet("color: black;");
            }
        }
    }
}

void Sdashb::setStudentInformation(const QString& fullName, const QString& studentNumber, const QString& email) {
    // Assuming your labels are named Name, StudentNumber, and Email
    ui->name->setText("Name: " + fullName);
    ui->studentNum->setText("Student Number: " + studentNumber);
    ui->email->setText("Email: " + email);
    Sdashb::sNum = studentNumber;

}
void Sdashb::setprogressBar(){

    QSqlQuery evalQuery(QSqlDatabase::database());
    evalQuery.prepare("SELECT COUNT(*) FROM EVALUATIONDATA WHERE STUDENTNUMBER = :studentNumber");
    evalQuery.bindValue(":studentNumber", StudentLg::studentNumber);
    if (!evalQuery.exec()) {
        qDebug() << "Error executing evaluation data query:" << evalQuery.lastError().text();
        return;
    }
    evalQuery.next();
    double evalCount = evalQuery.value(0).toInt();
    qDebug()<<evalCount;
    qDebug()<<StudentLg::studentNumber;

    // Get the number of rows in TEACHERLIST
    QSqlQuery teacherQuery(QSqlDatabase::database());
    teacherQuery.prepare("SELECT COUNT(*) FROM TEACHERLIST");
    if (!teacherQuery.exec()) {
        qDebug() << "Error executing teacher list query:" << teacherQuery.lastError().text();
        return;
    }
    teacherQuery.next();
    double teacherCount = teacherQuery.value(0).toInt();
    qDebug()<<teacherCount;
    // Calculate the progress percentage
    double progress = (double)(evalCount/teacherCount);
    qDebug()<<progress;
    // Update the progress bar
    ui->progressBar->setValue(progress * 100);
}
void Sdashb::on_logoutButton_clicked()
{
    // Ask for confirmation
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout", "Are you sure you want to log out?", QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // If user confirms logout
        if (MainWindow::instance == nullptr) {
            // Create a new instance of the main window if it doesn't already exist
            MainWindow::instance = new MainWindow(this);
        }
        MainWindow::instance->show();
        this->hide();
    } else {
        // If user cancels logout, do nothing
    }
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
            ui->Emessage->setText("Incomplete Profile");

            // Create a QTimer object
            QTimer* timer = new QTimer(this);

            // Connect the timeout signal of the timer to a lambda function
            connect(timer, &QTimer::timeout, [this, timer]() {
                // Clear the label text when the timer times out
                ui->Emessage->clear();
                // Delete the timer object to avoid memory leaks
                timer->deleteLater();
            });

            // Start the timer with a timeout of 5000 milliseconds (5 seconds)
            timer->start(5000);
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

void Sdashb::on_HistoryButton_clicked()
{
    // Redirect to the main login window
    if (History::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        History::instance = new History(this);
    }
    History::instance->show();
    this->hide();
}



Sdashb::~Sdashb()
{
    delete ui;
}


