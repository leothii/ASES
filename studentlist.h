#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
#include <QSettings>

namespace Ui {
class Studentlist;
}

class Studentlist : public QMainWindow
{
    Q_OBJECT

public:
    explicit Studentlist(QWidget *parent = nullptr);
    ~Studentlist();

    static Studentlist *instance;

    void on_backButton_clicked();

private:
    Ui::Studentlist *ui;
};

#endif // STUDENTLIST_H
