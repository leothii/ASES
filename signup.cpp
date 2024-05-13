#include "signup.h"
#include "ui_signup.h"
#include "studentlg.h"

Signup::Signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
    this->setFixedSize(424, 800);
    ui->lineEdit_Value_5->setEchoMode(QLineEdit::Password);
    ui->lineEdit_Value_6->setEchoMode(QLineEdit::Password);
    connect(ui->SignButton, &QPushButton::clicked, this, &Signup::on_signupButton_clicked);

    setTabOrder(ui->lineEdit_Value_1, ui->lineEdit_Value_2); // Email to Student Number
    setTabOrder(ui->lineEdit_Value_2, ui->lineEdit_Value_3); // Student Number to First Name
    setTabOrder(ui->lineEdit_Value_3, ui->lineEdit_Value_4); // First Name to Last Name
    setTabOrder(ui->lineEdit_Value_4, ui->lineEdit_Value_5); // Last Name to Password
    setTabOrder(ui->lineEdit_Value_5, ui->lineEdit_Value_6); // Password to Confirm Password
    setTabOrder(ui->lineEdit_Value_6, ui->SignButton); // Confirm Password to Sign Up Button
    setTabOrder(ui->SignButton, ui->backButton); // Sign Up Button to Back Button


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

void Signup::on_signupButton_clicked() {

    // Retrieve form data
    QString email = ui->lineEdit_Value_1->text();
    QString studentNumber = ui->lineEdit_Value_2->text();
    QString firstName = ui->lineEdit_Value_3->text();
    QString lastName = ui->lineEdit_Value_4->text();
    QString password = ui->lineEdit_Value_5->text();
    QString confirmPassword = ui->lineEdit_Value_6->text();

    // Check for empty fields
    if (email.isEmpty() || studentNumber.isEmpty() || firstName.isEmpty() ||
        lastName.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        ui->label->setText("Error: All fields must be filled out.");

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
        return; // Return here to avoid further processing
    }

    // Check if the email ends with '@wvsu.edu.ph'
    if (!email.endsWith("@wvsu.edu.ph")) {
        ui->label->setText("Error: Must use school account!");

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
        return; // Return here to avoid further processing
    }

    // Check if password matches confirm password
    if (password != confirmPassword) {
        ui->label->setText("Error: Passwords do not match!");

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
        return; // Return here to avoid further processing
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
       ui->label->setText("Error: Database connection failed!");
        return; // Exit the function if the database connection fails
    }

    QSqlQuery queryCheckAccount(db);
    queryCheckAccount.prepare("SELECT COUNT(*) FROM STUDENTINFORMATION WHERE EMAIL = :EMAIL OR STUDENTNUMBER = :STUDENTNUMBER");
    queryCheckAccount.bindValue(":EMAIL", email);
    queryCheckAccount.bindValue(":STUDENTNUMBER", studentNumber);

    if (queryCheckAccount.exec()) {
        queryCheckAccount.next(); // Move to the first (and only) record
        int count = queryCheckAccount.value(0).toInt(); // Retrieve the count

        if (count > 0) {
            ui->label->setText("Error: An account with this email or student number already exists.");

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
            return; // Exit the function if an account already exists
        }
    } else {
        ui->label->setText("Error: Failed to check for existing account: " + queryCheckAccount.lastError().text());
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
        return; // Exit the function if the check for existing account failed
    }


    QSqlQuery queryInsertData(db);
    queryInsertData.prepare("INSERT INTO STUDENTINFORMATION(STUDENTNUMBER,EMAIL,LASTNAME,FIRSTNAME,PASSWORD) VALUES(:STUDENTNUMBER, :EMAIL, :LASTNAME, :FIRSTNAME, :PASSWORD)");
    queryInsertData.bindValue(":EMAIL", email);
    queryInsertData.bindValue(":STUDENTNUMBER", studentNumber);
    queryInsertData.bindValue(":LASTNAME", lastName);
    queryInsertData.bindValue(":FIRSTNAME", firstName);
    queryInsertData.bindValue(":PASSWORD", password);

    // Display confirmation message before executing the query
    if (QMessageBox::information(this, "Confirmation", "Are you sure you want to create the account?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
        if (!queryInsertData.exec()) {
            QMessageBox::warning(this, "Error", "Failed to create account: " + queryInsertData.lastError().text());
            db.rollback();
            db.close();
            return;
        }
        db.commit();
        QMessageBox::information(this, "Success", "Account created successfully!");

        if (StudentLg::instance) {
            StudentLg::instance->show();
            StudentLg::instance->raise();
            StudentLg::instance->activateWindow();
        } else {
            // Create a new instance of StudentLg
            StudentLg::instance = new StudentLg(this);
            StudentLg::instance->show();
        }

        this->hide();
    }

    db.close();
}


void Signup::on_backButton_clicked() {
    // Hide the sign-up window
    this->hide();

    // Show the login window
    if (StudentLg::instance == nullptr) {
        // Create a new instance of the login window if it doesn't already exist
        StudentLg::instance = new StudentLg(this);
    }

    // Show the login window
    StudentLg::instance->show();
}






Signup::~Signup()
{
    delete ui;
}
