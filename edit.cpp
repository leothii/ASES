#include "edit.h"
#include "ui_edit.h"
#include "edit.h"
#include "sdashb.h"


Edit::Edit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Edit)
{
    ui->setupUi(this);
    connect(ui->UpdateButton, &QPushButton::clicked, this, &Edit::on_updateButton_clicked);
    connect(ui->CancelButton, &QPushButton::clicked, this, &Edit::on_cancelButton_clicked);

    qDebug() << QSqlDatabase::drivers();
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




void Edit::on_updateButton_clicked(){
    // Retrieve form data
    QString studentNumber = ui->StudentNo->text();
    QString email = ui->Email->text();
    QString firstName = ui->Firstname->text();
    QString lastName = ui->Lastname->text();
    QString middlename = ui->Middlename->text();
    QString Program = ui->Program->text();
    QString Yearlevel = ui->YLbox->currentText();
    QString Academiclevel = ui->ALbox->currentText();
    QString Section = ui->Sbox->currentText();
    QString password = ui->Password->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO STUDENTINFORMATION(STUDENTNUMBER,EMAIL,LASTNAME,FIRSTNAME,MIDDLENAME,ACADEMICLEVEL,PROGRAM,YEARLEVEL,SECTION,PASSWORD) VALUES(:STUDENTNUMBER, :EMAIL, :LASTNAME, :FIRSTNAME, :MIDDLENAME, :ACADEMICLEVEL, :PROGRAM, :YEARLEVEL, :SECTION :PASSWORD)");
    queryInsertData.bindValue(":EMAIL", email);
    queryInsertData.bindValue(":STUDENTNUMBER", studentNumber);
    queryInsertData.bindValue(":LASTNAME", lastName);
    queryInsertData.bindValue(":FIRSTNAME", firstName);
    queryInsertData.bindValue(":MIDDLENAME", middlename);
    queryInsertData.bindValue(":ACADEMICLEVEL", Academiclevel);
    queryInsertData.bindValue(":PROGRAM", Program);
    queryInsertData.bindValue(":YEARLEVEL", Yearlevel);
    queryInsertData.bindValue(":SECTION", Section);
    queryInsertData.bindValue(":PASSWORD", password);

    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to update your account?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to update account: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Account updated successfully!");

        if (Sdashb::instance) {
            Sdashb::instance->show();
            Sdashb::instance->raise();
            Sdashb::instance->activateWindow();
        } else {
            // Create a new instance of StudentLg
            Sdashb::instance = new Sdashb(this);
            Sdashb::instance->show();
        }

        this->hide();
    }

    db.close();
}


void Edit::on_cancelButton_clicked(){
    if (Sdashb::instance) {
        Sdashb::instance->show();
        Sdashb::instance->raise();
        Sdashb::instance->activateWindow();
    } else {
        // Create a new instance of StudentLg
        Sdashb::instance = new Sdashb(this);
        Sdashb::instance->show();
    }

    this->hide();
}

Edit::~Edit()
{
    delete ui;
}

