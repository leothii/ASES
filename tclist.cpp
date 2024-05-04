#include "tclist.h"
#include "ui_tclist.h"

tclist::tclist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tclist)
{
    ui->setupUi(this);

    QStringList teacherNames = getTeacherNames();
    ui->teacherListWidget->addItems(teacherNames);

    // Set the size hint for each item in the teacher list
    for (int i = 0; i < ui->teacherListWidget->count(); ++i) {
        QListWidgetItem* item = ui->teacherListWidget->item(i);
        item->setSizeHint(QSize(item->sizeHint().width(), 40)); // Adjust the height as needed
    }

    // Get course subjects and display
    QStringList courseSubjects = getCourseSubjects();
    ui->courseListWidget->addItems(courseSubjects);

    // Set the size hint for each item in the course list
    for (int i = 0; i < ui->courseListWidget->count(); ++i) {
        QListWidgetItem* item = ui->courseListWidget->item(i);
        item->setSizeHint(QSize(item->sizeHint().width(), 40)); // Adjust the height as needed
    }
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
