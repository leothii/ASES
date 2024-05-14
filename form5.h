#ifndef FORM5_H
#define FORM5_H

#include <QMainWindow>
#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QObject>

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

    void on_submitButton_clicked();
public slots:


private:
    Ui::Form5 *ui;
};

#endif // FORM5_H
