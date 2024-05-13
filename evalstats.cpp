#include "evalstats.h"
#include "ui_evalstats.h"
#include "adashb.h"

Evalstats::Evalstats(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Evalstats)
{
    ui->setupUi(this);
    connect(ui->UpdateButton, &QPushButton::clicked, this, &Evalstats::updateButton);
    connect(ui->CancelButton, &QPushButton::clicked, this, &Evalstats::on_cancelButton_clicked);

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

            ui->ESbox->clear();
            if (evaluationStatus == "ONGOING") {
                ui->ESbox->addItem("ONGOING");
                ui->ESbox->addItem("ENDED");
            } else if (evaluationStatus == "ENDED") {
                ui->ESbox->addItem("ENDED");
                ui->ESbox->addItem("ONGOING");
            } else if (evaluationStatus.isEmpty()){
                ui->ESbox->addItem("ONGOING");
                ui->ESbox->addItem("ENDED");
            }

            ui->Sbox->clear();
            if (semester == "First Semester") {
                ui->Sbox->addItem("First Semester");
                ui->Sbox->addItem("Second Semester");
            } else if (semester == "Second Semester") {
                ui->Sbox->addItem("Second Semester");
                ui->Sbox->addItem("First Semester");
            } else if (semester.isEmpty()){
                ui->Sbox->addItem("First Semester");
                ui->Sbox->addItem("Second Semester");
            }
            ui->AYedit->clear();
            ui->AYedit->setPlaceholderText(academicyear);
        } else {
            qDebug() << "Failed to fetch data from the database.";
        }
    } else {
        qDebug() << "Database is not connected";
    }
}

void Evalstats::updateButton() {
    QString EvaluationStatus = ui->ESbox->currentText();
    QString Semester = ui->Sbox->currentText();
    QString AcademicYear = ui->AYedit->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (db.open()) {
        QSqlQuery query;
        query.prepare("SELECT COUNT(*) FROM SYSTEMINFO");
        if (query.exec() && query.next()) {
            int rowCount = query.value(0).toInt();
            if (rowCount > 0) {
                // Update existing row
                QString updateQuery = "UPDATE SYSTEMINFO SET ";
                QStringList updateValues;
                if (!EvaluationStatus.isEmpty()) updateValues.append("EVALUATIONSTATUS = :evaluationStatus");
                if (!Semester.isEmpty()) updateValues.append("SEMESTER = :semester");
                if (!AcademicYear.isEmpty()) updateValues.append("ACADEMICYEAR = :academicYear");
                updateQuery += updateValues.join(", ");
                query.prepare(updateQuery);
            } else {
                // Insert new row
                query.prepare("INSERT INTO SYSTEMINFO (EVALUATIONSTATUS, SEMESTER, ACADEMICYEAR) VALUES (:evaluationStatus, :semester, :academicYear)");
            }
            if (!EvaluationStatus.isEmpty()) query.bindValue(":evaluationStatus", EvaluationStatus);
            if (!Semester.isEmpty()) query.bindValue(":semester", Semester);
            if (!AcademicYear.isEmpty()) query.bindValue(":academicYear", AcademicYear);

            if (query.exec()) {
                qDebug() << "Data updated successfully!";
            } else {
                qDebug() << "Error updating data:" << query.lastError().text();
            }
        } else {
            qDebug() << "Error querying database:" << query.lastError().text();
        }

        db.close();
    } else {
        qDebug() << "Failed to open database!";
    }

    Adashb::instance = new Adashb(this);
    Adashb::instance->show();
    this->hide();
}

void Evalstats::on_cancelButton_clicked()
{
    // Redirect to the main login window
    if (Adashb::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Adashb::instance = new Adashb(this);
    }
    Adashb::instance->show();
    this->hide();
}

Evalstats::~Evalstats()
{
    delete ui;
}

