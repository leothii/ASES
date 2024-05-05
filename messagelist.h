#ifndef MESSAGELIST_H
#define MESSAGELIST_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
#include <QSettings>

namespace Ui {
class Messagelist;
}

class Messagelist : public QMainWindow
{
    Q_OBJECT

public:
    explicit Messagelist(QWidget *parent = nullptr);
    ~Messagelist();

    static Messagelist *instance;
    QString Teacher;

private slots:
    void on_backButton_clicked();

private:
    Ui::Messagelist *ui;
    friend class Tdashb;
};

#endif // MESSAGELIST_H
