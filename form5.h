#ifndef FORM5_H
#define FORM5_H

#include <QMainWindow>
#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class Form5;
}

class Form5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form5(QWidget *parent = nullptr);
    ~Form5();
     static Form5 *instance;
    QString studentnum;
    QString Teacher;
    QString Subject;

public slots:
    void on_submitButton_clicked();

private:
    Ui::Form5 *ui;
};

#endif // FORM5_H
