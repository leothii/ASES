#include "edit.h"
#include "ui_edit.h"
#include "edit.h"
#include "sdashb.h"
#include "studentpass.h"


Edit::Edit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Edit)
{
    ui->setupUi(this);

    ui->Firstname->setTabOrder(ui->Firstname, ui->Middlename);
    ui->Firstname->setTabOrder(ui->Middlename, ui->Lastname);
    ui->Lastname->setTabOrder(ui->Lastname, ui->StudentNo);
    ui->StudentNo->setTabOrder(ui->StudentNo, ui->Email);
    ui->Email->setTabOrder(ui->Email, ui->Program);
    ui->Password->setTabOrder(ui->Program, ui->Password);


    QString Snum =  Sdashb::sNum;;
    connect(ui->UpdateButton, &QPushButton::clicked, this, &Edit::on_updateButton_clicked);
    connect(ui->CancelButton, &QPushButton::clicked, this, &Edit::on_cancelButton_clicked);
    connect(ui->PassButton, &QPushButton::clicked, this, &Edit::on_passButton_clicked);

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
        QSqlQuery query(db);
        query.prepare("SELECT STUDENTNUMBER, EMAIL, LASTNAME, FIRSTNAME, MIDDLENAME, PROGRAM, YEARLEVEL, ACADEMICLEVEL, SECTION FROM STUDENTINFORMATION WHERE STUDENTNUMBER = :Snum");
        query.bindValue(":Snum", Snum);
        // Replace <your condition> with appropriate WHERE clause to select the desired data.
        if (query.exec() && query.first()) {
            ui->StudentNo->setPlaceholderText(query.value(0).toString());
            ui->Email->setPlaceholderText(query.value(1).toString());
            ui->Lastname->setPlaceholderText(query.value(2).toString());
            ui->Firstname->setPlaceholderText(query.value(3).toString());
            ui->Middlename->setPlaceholderText(query.value(4).toString());
            ui->Program->setPlaceholderText(query.value(5).toString());
            ui->YLbox->setPlaceholderText(query.value(6).toString());
            ui->ALbox->setPlaceholderText(query.value(7).toString());
            ui->Sbox->setPlaceholderText(query.value(8).toString());
        } else {
            qDebug() << "Failed to fetch data from the database.";
        }
    }
    else
    {
        qDebug() << "Database is not connected";
    }
}



void Edit::on_updateButton_clicked() {
    QString Snum =  Sdashb::sNum;
    QString email = ui->Email->text().trimmed();
    QString firstName = ui->Firstname->text().trimmed();
    QString lastName = ui->Lastname->text().trimmed();
    QString middlename = ui->Middlename->text().trimmed();
    QString Program = ui->Program->text().trimmed();
    QString Yearlevel = ui->YLbox->currentText().trimmed();
    QString Academiclevel = ui->ALbox->currentText().trimmed();
    QString Section = ui->Sbox->currentText().trimmed();
    QString password = ui->Password->text().trimmed();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    // Check password
    QSqlQuery queryCheckPassword(db);
    queryCheckPassword.prepare("SELECT PASSWORD FROM STUDENTINFORMATION WHERE STUDENTNUMBER = :STUDENTNUMBER");
    queryCheckPassword.bindValue(":STUDENTNUMBER", Snum);
    if (!queryCheckPassword.exec() || !queryCheckPassword.next()) {
        ui->label->setText("Error: Failed to retrieve password: " + queryCheckPassword.lastError().text());
        QTimer* timer = new QTimer(this);

        // Connect the timeout signal of the timer to a lambda function
        connect(timer, &QTimer::timeout, [this, timer]() {
            // Clear the label text when the timer times out
            ui->label->clear();
            // Delete the timer object to avoid memory leaks
            timer->deleteLater();
        });

        // Start the timer with a timeout of 5000 milliseconds (5 seconds)
        timer->start(5000);
        db.close();
        return;
    }
    QString dbPassword = queryCheckPassword.value(0).toString().trimmed();

    if (dbPassword != password) {
        ui->label->setText("Error: Incorrect password!");
        QTimer* timer = new QTimer(this);

        // Connect the timeout signal of the timer to a lambda function
        connect(timer, &QTimer::timeout, [this, timer]() {
            // Clear the label text when the timer times out
            ui->label->clear();
            // Delete the timer object to avoid memory leaks
            timer->deleteLater();
        });

        // Start the timer with a timeout of 5000 milliseconds (5 seconds)
        timer->start(5000);
        db.close();
        return;
    }

    // Update data
    QString updateQuery = "UPDATE STUDENTINFORMATION SET";
    QStringList updateColumns;

    if (!email.isEmpty())
        updateColumns.append(" EMAIL = :EMAIL ");
    if (!firstName.isEmpty())
        updateColumns.append(" FIRSTNAME = :FIRSTNAME ");
    if (!lastName.isEmpty())
        updateColumns.append(" LASTNAME = :LASTNAME ");
    if (!middlename.isEmpty())
        updateColumns.append(" MIDDLENAME = :MIDDLENAME ");
    if (!Academiclevel.isEmpty())
        updateColumns.append(" ACADEMICLEVEL = :ACADEMICLEVEL ");
    if (!Program.isEmpty())
        updateColumns.append(" PROGRAM = :PROGRAM ");
    if (!Yearlevel.isEmpty())
        updateColumns.append(" YEARLEVEL = :YEARLEVEL ");
    if (!Section.isEmpty())
        updateColumns.append(" SECTION = :SECTION ");

    // Construct the update query
    updateQuery += updateColumns.join(", ") + " WHERE STUDENTNUMBER = :STUDENTNUMBER";

    QSqlQuery queryUpdateData(db);
    queryUpdateData.prepare(updateQuery);

    // Bind values for update
    if (!email.isEmpty())
        queryUpdateData.bindValue(":EMAIL", email);
    if (!firstName.isEmpty())
        queryUpdateData.bindValue(":FIRSTNAME", firstName);
    if (!lastName.isEmpty())
        queryUpdateData.bindValue(":LASTNAME", lastName);
    if (!middlename.isEmpty())
        queryUpdateData.bindValue(":MIDDLENAME", middlename);
    if (!Academiclevel.isEmpty())
        queryUpdateData.bindValue(":ACADEMICLEVEL", Academiclevel);
    if (!Program.isEmpty())
        queryUpdateData.bindValue(":PROGRAM", Program);
    if (!Yearlevel.isEmpty())
        queryUpdateData.bindValue(":YEARLEVEL", Yearlevel);
    if (!Section.isEmpty())
        queryUpdateData.bindValue(":SECTION", Section);

    queryUpdateData.bindValue(":STUDENTNUMBER", Snum);

    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to update your account?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryUpdateData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to update account: " + queryUpdateData.lastError().text());
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

void Edit::on_passButton_clicked(){


    if (Studentpass::instance) {
        Studentpass::instance->show();
        Studentpass::instance->raise();\
            Studentpass::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        Studentpass::instance = new Studentpass(this);
        Studentpass::instance->show();
    }
    this->hide();
}


Edit::~Edit()
{
    delete ui;
}

