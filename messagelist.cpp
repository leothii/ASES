#include "messagelist.h"
#include "ui_messagelist.h"
#include "tdashb.h"

Messagelist* Messagelist::instance = nullptr;

Messagelist::Messagelist(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Messagelist)
{
    ui->setupUi(this);

    connect(ui->backButton, &QPushButton::clicked, this, &Messagelist::on_backButton_clicked);
    QString Teacher = Tdashb::name;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("sql6.freesqldatabase.com");
    db.setDatabaseName("sql6698709");
    db.setUserName("sql6698709");
    db.setPassword("wQpFvGwERi");

    if (db.open()) {
        QSqlQuery query;
        query.prepare("SELECT MESSAGE FROM EVALUATIONDATA WHERE TEACHER = :teacher");
        query.bindValue(":teacher", Teacher);
        if (query.exec()) {
            if (query.size() == 0) {
                qDebug() << "No messages found for teacher:" << Teacher;
            }
            while (query.next()) {
                QString message = query.value(0).toString();
                qDebug() << "Message retrieved:" << message; // Debug output
                if (!message.isEmpty()) { // Check if message is not empty
                    ui->messageList->addItem(message);
                }
            }
        } else {
            qDebug() << "Query execution error:" << query.lastError().text();
        }
    } else {
        qDebug() << "Database connection error:" << db.lastError().text();
    }
}
void Messagelist::on_backButton_clicked()
{
    // Redirect to the main login window
    if (Tdashb::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Tdashb::instance = new Tdashb(this);
    }
    Tdashb::instance->show();
    this->hide();
}

Messagelist::~Messagelist()
{
    delete ui;
}
