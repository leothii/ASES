#include "history.h"
#include "ui_history.h"
#include "sdashb.h"

History::History(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::History)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &History::on_backButton_clicked);
    QString Studentnumber = Sdashb::sNum;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (db.open()) {
        QSqlQuery query;
        query.prepare("SELECT TEACHER, SUBJECT, OVERALL FROM EVALUATIONDATA WHERE STUDENTNUMBER = :studentnumber");
        query.bindValue(":studentnumber", Studentnumber);
        if (query.exec()) {
            if (query.size() == 0) {
                qDebug() << "No rated teacher found for student:" << Studentnumber;
            }
            while (query.next()) {
                QString list = query.value(0).toString();
                QString list2 = query.value(1).toString();
                QString list3 = query.value(2).toString();

                ui->Ratedlist->addItem(list);
                ui->Courselist->addItem(list2);
                ui->Overalllist->addItem(list3);
            }
        } else {
            qDebug() << "Query execution error:" << query.lastError().text();
        }
    } else {
        qDebug() << "Database connection error:" << db.lastError().text();
    }
}


void History::on_backButton_clicked(){
    if (Sdashb::instance) {
        Sdashb::instance->show();
        Sdashb::instance->raise();
        Sdashb::instance->activateWindow();
    } else {
        // Create a new instance of StudentLg
        Sdashb::instance = new Sdashb(this);
        Sdashb::instance->show();
    }

    this->close();
}
History::~History()
{
    delete ui;
}
