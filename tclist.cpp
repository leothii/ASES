#include "tclist.h"
#include "ui_tclist.h"

tclist::tclist(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tclist)
{
    ui->setupUi(this);

    QStringList teacherNames = getTeacherNames();
    ui->teacherListWidget->addItems(teacherNames);

    // Get course subjects and display
    QStringList courseSubjects = getCourseSubjects();
    ui->courseListWidget->addItems(courseSubjects);

}


QStringList tclist::getTeacherNames() {
    QStringList teacherNames;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    if (!db.isValid()) {
        qDebug() << "Database connection is invalid.";
        return teacherNames;
    }

    QSqlQuery query(db);
    if (!query.exec("SELECT NAME FROM TEACHERLIST")) {
        qDebug() << "Failed to execute query: " << query.lastError().text();
        return teacherNames;
    }

    while (query.next()) {
        teacherNames << query.value(0).toString();
    }

    return teacherNames;
}

void tclist::showEvent(QShowEvent *event)
{
    QMainWindow::showEvent(event);

    // Load data when the window is shown
    loadData();
}
void tclist::loadData()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();
    if (!db.open()) {
        qDebug() << "Database connection failed: " << db.lastError().text();
        return;
    }

    // Clear existing data in the table widget
    ui->tableWidget->clearContents();

    // Clear table widget and set column count
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(2);

    // Execute query to fetch data from TEACHERLIST table
    QSqlQuery teacherQuery("SELECT NAME FROM TEACHERLIST");
    if (!teacherQuery.exec()) {
        qDebug() << "Query execution failed for TEACHERLIST: " << teacherQuery.lastError().text();
        db.close();
        return;
    }

    // Execute query to fetch data from COURSELIST table
    QSqlQuery courseQuery("SELECT SUBJECT FROM COURSELIST");
    if (!courseQuery.exec()) {
        qDebug() << "Query execution failed for COURSELIST: " << courseQuery.lastError().text();
        db.close();
        return;
    }

    int row = 0;
    while (teacherQuery.next() || courseQuery.next()) {
        // Add teacher name to the first column
        ui->tableWidget->insertRow(row);
        if (teacherQuery.isValid()) {
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(teacherQuery.value("NAME").toString()));
        }

        // Add subject to the second column
        if (courseQuery.isValid()) {
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(courseQuery.value("SUBJECT").toString()));
        }

        row++;
    }

    // Close the database connection
    db.close();
}

QStringList tclist::getCourseSubjects() {
    QStringList courseSubjects;

    qDebug() << QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");
    db.open();

    if (!db.isValid()) {
        qDebug() << "Database connection is invalid.";
        return courseSubjects;
    }

    QSqlQuery query(db);
    if (!query.exec("SELECT SUBJECT FROM COURSELIST")) {
        qDebug() << "Failed to execute query: " << query.lastError().text();
        return courseSubjects;
    }

    while (query.next()) {
        courseSubjects << query.value(0).toString();
    }

    return courseSubjects;
}
tclist::~tclist()
{
    delete ui;
}
