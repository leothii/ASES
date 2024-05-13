#include "adashb.h"
#include "ui_adashb.h"
#include "mainwindow.h"
#include "tclist.h"
#include "studentlist.h"
#include "evalstats.h"

QString Adashb::teacher;
QString Adashb::subject;
QString Adashb::email;
QString Adashb::password;


tclist* tclist::instance = nullptr;

Studentlist* Studentlist::instance = nullptr;
Evalstats* Evalstats::instance = nullptr;


Adashb::Adashb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Adashb)
{
    ui->setupUi(this);
     connect(ui->taddButton, &QPushButton::clicked, this, &Adashb::on_taddButton_clicked);
     connect(ui->saddButton, &QPushButton::clicked, this, &Adashb::on_saddButton_clicked);
     connect(ui->backButton, &QPushButton::clicked, this, &Adashb::on_backButton_clicked);
     connect(ui->viewButton, &QPushButton::clicked, this, &Adashb::on_viewButton_clicked);
     connect(ui->updateButton, &QPushButton::clicked, this, &Adashb::updateEvalstats);
    connect(ui->studentButton, &QPushButton::clicked, this, &Adashb::on_studentButton_clicked);
     updateStudentCountLabel();
    setprogressBar();

     qDebug() << QSqlDatabase::drivers();
     QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
     db.setHostName("sql6.freesqldatabase.com");
     db.setDatabaseName("sql6698709");
     db.setUserName("sql6698709");
     db.setPassword("wQpFvGwERi");

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
void Adashb::setprogressBar(){

    QSqlQuery studentQuery(QSqlDatabase::database());
    studentQuery.prepare("SELECT COUNT(*) FROM EVALUATIONDATA");
    if (!studentQuery.exec()) {
        qDebug() << "Error executing student list query:" << studentQuery.lastError().text();
        return;
    }
    studentQuery.next();
     double studentcount =studentQuery.value(0).toInt();

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
    double progress = (double)((studentcount) / (teacherCount * studentcount));
    qDebug()<<progress;
    // Update the progress bar
    ui->progressBar->setValue(progress * 100);
}

void Adashb::updateStudentCountLabel() {
    // Database connection and query preparation
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (!db.open()) {
        qDebug() << "Database connection failed";
        QMessageBox::warning(this, "Error", "Database connection failed!");
        return; // Exit the function if the database connection fails
    }

    QSqlQuery queryCount(db);
    queryCount.prepare("SELECT COUNT(*) FROM STUDENTINFORMATION");

    if (!queryCount.exec()) {
        qDebug() << "Failed to execute query to count students:" << queryCount.lastError().text();
        QMessageBox::warning(this, "Error", "Failed to count students: " + queryCount.lastError().text());
        db.close();
        return;
    }

    if (queryCount.next()) {
        int studentCount = queryCount.value(0).toInt();
        ui->Studentno->setText(QString::number(studentCount));
    } else {
        qDebug() << "No records found in STUDENTINFORMATION table.";
        QMessageBox::warning(this, "Error", "No records found in STUDENTINFORMATION table.");
    }

    db.close();
}

// For the taddButton (for adding teachers)
// For the taddButton (for adding teachers)
void Adashb::on_taddButton_clicked() {
    // Retrieve form data
    email = ui->taddEdit->text();
    teacher = ui->taddEdit_2->text();
    password = ui->taddEdit_3->text();

    // Check for empty fields
    if (teacher.isEmpty() || email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields must be filled out.");
        return;
    }

    // Database connection and query preparation
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    if (!db.isOpen()) {
        qDebug() << "Database connection failed";
        QMessageBox::warning(this, "Error", "Database connection failed!");
        return; // Exit the function if the database connection fails
    }

    QSqlQuery queryCheckAccount(db);
    queryCheckAccount.prepare("SELECT COUNT(*) FROM TEACHERLIST WHERE NAME = :teacher");
    queryCheckAccount.bindValue(":teacher", teacher);

    if (queryCheckAccount.exec()) {
        queryCheckAccount.next();
        int count = queryCheckAccount.value(0).toInt();

        if (count > 0) {
            QMessageBox::warning(this, "Error", "A teacher with this name already exists.");
            db.close();
            return;
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for existing teacher: " + queryCheckAccount.lastError().text());
        db.close();
        return;
    }

    // Prepare query to insert both teacher and subject
    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO TEACHERLIST(NAME, EMAIL, PASSWORD) VALUES(:teacher, :email, :password)");
    queryInsertData.bindValue(":teacher", teacher);
    queryInsertData.bindValue(":email", email);
    queryInsertData.bindValue(":password", password);

    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to add the teacher?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to add teacher: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Teacher added successfully!");
    }

    db.close();
}

// For the saddButton (for adding subjects)
void Adashb::on_saddButton_clicked() {
    // Retrieve form data
    subject = ui->saddEdit->text();
    // Check for empty fields
    if (subject.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields must be filled out.");
        return;
    }

    // Database connection and query preparation
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    if (!db.isOpen()) {
        qDebug() << "Database connection failed";
        QMessageBox::warning(this, "Error", "Database connection failed!");
        return; // Exit the function if the database connection fails
    }

    QSqlQuery queryCheckAccount(db);
    queryCheckAccount.prepare("SELECT COUNT(*) FROM COURSELIST WHERE SUBJECT = :subject");
    queryCheckAccount.bindValue(":subject", subject);

    if (queryCheckAccount.exec()) {
        queryCheckAccount.next();
        int count = queryCheckAccount.value(0).toInt();

        if (count > 0) {
            QMessageBox::warning(this, "Error", "A subject with this name already exists.");
            db.close();
            return;
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for existing subject: " + queryCheckAccount.lastError().text());
        db.close();
        return;
    }
    // Prepare query to insert both teacher and subject
    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO COURSELIST(SUBJECT) VALUES(:subject)");
    queryInsertData.bindValue(":subject", subject);

    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to add the subject?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to add subject: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Subject added successfully!");
    }

    db.close();
}



void Adashb::on_backButton_clicked() {

    this->hide();

    if (MainWindow::instance) {
        MainWindow::instance->show();
        MainWindow::instance->raise();\
            MainWindow::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        MainWindow::instance = new MainWindow(this);
        MainWindow::instance->show();
    }}




void Adashb::on_viewButton_clicked() {


    if (tclist::instance) {
        tclist::instance->show();
        tclist::instance->raise();\
            tclist::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        tclist::instance = new tclist(this);
        tclist::instance->show();
    }this->hide();
}

void Adashb::updateEvalstats() {

    if (Evalstats::instance) {
        Evalstats::instance->show();
        Evalstats::instance->raise();\
            Evalstats::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        Evalstats::instance = new Evalstats(this);
        Evalstats::instance->show();
    }this->close();
}


void Adashb::on_studentButton_clicked(){

    if (Studentlist::instance) {
        Studentlist::instance->show();
        Studentlist::instance->raise();\
            Studentlist::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        Studentlist::instance = new Studentlist(this);
        Studentlist::instance->show();
    }this->hide();
}


Adashb::~Adashb()
{
    delete ui;
}
