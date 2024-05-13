#include "studentlg.h"
#include "ui_studentlg.h"
#include "signup.h"
#include "sdashb.h"
#include <QKeyEvent>
#include "mainwindow.h"
#include "ui_sdashb.h"
#include "studentpass.h"

StudentLg* StudentLg::instance = nullptr;
Sdashb* Sdashb::instance = nullptr;


QString StudentLg::studentNumber;

StudentLg::StudentLg(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::StudentLg),
    signupWindow(nullptr) // Initialize the signupWindow pointer
{

    if (instance != nullptr) {
        // If an instance already exists, return it instead of creating a new one
        delete ui; // Delete the UI to avoid memory leaks
        return;
    }

    ui->setupUi(this);
    this->setFixedSize(424, 800);
    connect(ui->loginButton, &QPushButton::clicked, this, &StudentLg::on_loginButton_clicked);
    connect(ui->backButton, &QPushButton::clicked, this, &StudentLg::on_backButton_clicked);
    connect(ui->signupButton, &QPushButton::clicked, this, &StudentLg::on_signUpButton_clicked);
    connect(ui->PassButton, &QPushButton::clicked, this, &StudentLg::on_passButton_clicked);

    QSettings settings;
    bool rememberMe = settings.value("rememberMe", false).toBool();
    if (rememberMe) {
        QString savedEmail = settings.value("email").toString();
        QString savedStudentNumber = settings.value("studentNumber").toString();

        ui->lineEdit_1->setText(savedEmail);
        ui->lineEdit_2->setText(savedStudentNumber);
        ui->checkBox->setChecked(true); // Set the checkbox state
    }

    QWidget::setTabOrder(ui->lineEdit_1, ui->lineEdit_2);
    QWidget::setTabOrder(ui->lineEdit_2, ui->lineEdit_3);

    ui->loginButton->setDefault(true);

    // Database connection (assuming connection logic is in a separate function)
    if (!connectToDatabase()) {
        QMessageBox::critical(this, "Error", "Failed to connect to database!");
        // Handle connection failure gracefully (e.g., disable login button)
        return;
    }

}

bool StudentLg::connectToDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    // Check connection status and print for debugging
    if (db.open()) {
        qDebug() << "Database connection successful";
        return true;
    } else {
        qDebug() << "Database connection failed";
        return false;
    }
}

void StudentLg::keyPressEvent(QKeyEvent *event) {
    //check if na pindot ung enter
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        //click simulation para sa log in button
        ui->loginButton->click();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}


void StudentLg::on_loginButton_clicked() {
    // Retrieve user input
    QString email = ui->lineEdit_1->text();
    QString password = ui->lineEdit_3->text();
    StudentLg::studentNumber = ui->lineEdit_2->text();

    // Check if any of the fields are empty
    if (email.isEmpty() || password.isEmpty() || studentNumber.isEmpty()) {
        ui->Emessage->setText("Please fill out all fields");

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
        return;
    }

    // Open the database and retrieve user credentials
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.open()) {
       ui->Emessage->setText("Connection Failed");
        return;
    }

    // Query the database for the user
    QSqlQuery queryLogin(db);
    queryLogin.prepare("SELECT FIRSTNAME, LASTNAME, EMAIL, STUDENTNUMBER, PASSWORD FROM STUDENTINFORMATION WHERE EMAIL = :email AND STUDENTNUMBER = :studentNumber");
    queryLogin.bindValue(":email", email);
    queryLogin.bindValue(":studentNumber", StudentLg::studentNumber);

    if (!queryLogin.exec()) {
        ui->Emessage->setText("Log in failed");

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

    if (queryLogin.next()) {
        // Retrieve data from the query
        QString firstName = queryLogin.value("FIRSTNAME").toString();
        QString lastName = queryLogin.value("LASTNAME").toString();
        QString email = queryLogin.value("EMAIL").toString();
        QString studentNumber = queryLogin.value("STUDENTNUMBER").toString();
        QString storedPassword = queryLogin.value("PASSWORD").toString();
        QString fullName = firstName + " " + lastName;

        // Check if the provided password matches the stored password
        if (password == storedPassword) {
            // Save login information if checkbox is checked
            if (ui->checkBox->isChecked()) {
                QSettings settings;
                settings.setValue("rememberMe", true);
                settings.setValue("email", email);
                settings.setValue("studentNumber", StudentLg::studentNumber);
            } else {
                // Clear saved values if checkbox is not checked
                QSettings settings;
                settings.remove("rememberMe");
                settings.remove("email");
                settings.remove("studentNumber");
            }

            // Pass data to the Sdashb instance
            if (Sdashb::instance) {
                Sdashb::instance->setStudentInformation(fullName, StudentLg::studentNumber, email);
                Sdashb::instance->ui->StudentName->setText(firstName + "!");
                Sdashb::instance->show();
                Sdashb::instance->raise();
                Sdashb::instance->activateWindow();
                this->hide();
            } else {
                Sdashb::instance = new Sdashb(this);
                Sdashb::instance->setStudentInformation(fullName, StudentLg::studentNumber, email);
                Sdashb::instance->ui->StudentName->setText(firstName + "!");
                Sdashb::instance->show();
                this->hide();
            }


        } else {
            ui->Emessage->setText("Invalid credential");
        }
    } else {
       ui->Emessage->setText("No matching record found");

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
    }

    db.close();
}



void StudentLg::on_signUpButton_clicked() {
    // Check if the signupWindow has already been created
    if (signupWindow == nullptr) {
        signupWindow = new Signup(this); // Create a new instance of Signup window
    }

    // Show the Signup window
    signupWindow->show();
    signupWindow->raise();
    signupWindow->activateWindow();

    this->hide();
}

void StudentLg::on_passButton_clicked() {



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


void StudentLg::on_backButton_clicked() {

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



StudentLg::~StudentLg() {
    delete ui;
    if (signupWindow) {
        delete signupWindow; // Clean up the signupWindow when StudentLg is destroyed
    }
}




