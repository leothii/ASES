#include "tdashb.h"
#include "ui_tdashb.h"
#include "teacherlg.h"
#include "mainwindow.h"

Tdashb::Tdashb(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tdashb)
{
    ui->setupUi(this);

    // Retrieve the email of the logged-in teacher
    QString email = TeacherLg::email;

    // Call the function to get the name using the email
    QString name = getName(email);

    // Set the retrieved name in the UI
    ui->pname->setText(name);
    ui->pemail->setText(email);

    // Calculate and set the average ratings
    QMap<QString, double> averageRatings = calculateAverageRatings(name);
    ui->cA->setText(QString::number(averageRatings["A"]));
    ui->cB->setText(QString::number(averageRatings["B"]));
    ui->cC->setText(QString::number(averageRatings["C"]));
    ui->cD->setText(QString::number(averageRatings["D"]));

    // Calculate and set the overall average rating
    double overallAverageRating = calculateAverageRating(name);
    ui->rate->setText(QString::number(overallAverageRating));

    connect(ui->logoutButton, &QPushButton::clicked, this, &Tdashb::on_logoutButton_clicked);
}

QString Tdashb::getName(const QString& email) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (!db.open()) {
        qDebug() << "Database connection failed.";
        return "Unknown";
    }

    QSqlQuery query(db);
    query.prepare("SELECT NAME FROM TEACHERLIST WHERE EMAIL = :email");
    query.bindValue(":email", email);

    if (!query.exec()) {
        qDebug() << "Query execution failed.";
        return "Unknown";
    }

    if (query.next()) {
        QString name = query.value(0).toString();
        db.close();
        return name;
    } else {
        qDebug() << "No matching record found.";
        db.close();
        return "Unknown";
    }
}

QMap<QString, double> Tdashb::calculateAverageRatings(const QString& teacherName) {
    QMap<QString, double> averageRatings;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (!db.open()) {
        qDebug() << "Database connection failed.";
        return averageRatings;
    }

    QStringList columns = {"A", "B", "C", "D"};

    for (const QString& column : columns) {
        QSqlQuery query(db);
        query.prepare("SELECT " + column + " FROM EVALUATIONDATA WHERE TEACHER = :teacherName");
        query.bindValue(":teacherName", teacherName);

        if (!query.exec()) {
            qDebug() << "Query execution failed for column " + column;
            continue;
        }

        double sum = 0.0;
        int count = 0;

        while (query.next()) {
            sum += query.value(0).toDouble();
            count++;
        }

        if (count == 0) {
            qDebug() << "No ratings found for the teacher in column " + column;
            averageRatings[column] = 0.0;
        } else {
            averageRatings[column] = sum / count;
        }
    }

    db.close();
    return averageRatings;
}

double Tdashb::calculateAverageRating(const QString& teacherName) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (!db.open()) {
        qDebug() << "Database connection failed.";
        return 0.0;
    }

    QSqlQuery query(db);
    query.prepare("SELECT OVERALL FROM EVALUATIONDATA WHERE TEACHER = :teacherName");
    query.bindValue(":teacherName", teacherName);

    if (!query.exec()) {
        qDebug() << "Query execution failed.";
        return 0.0;
    }

    double sum = 0.0;
    int count = 0;

    while (query.next()) {
        sum += query.value(0).toDouble();
        count++;
    }

    db.close();

    if (count == 0) {
        qDebug() << "No ratings found for the teacher.";
        return 0.0;
    }

    return sum / count;
}

void Tdashb::on_logoutButton_clicked()
{
    // Redirect to the main login window
    if (MainWindow::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        MainWindow::instance = new MainWindow(this);
    }
    MainWindow::instance->show();
    this->hide();
}

Tdashb::~Tdashb()
{
    delete ui;
}
