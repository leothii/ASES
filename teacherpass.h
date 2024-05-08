#ifndef TEACHERPASS_H
#define TEACHERPASS_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
#include <QSettings>
#include <signup.h>
#include <QString>


namespace Ui {
class Teacherpass;
}

class Teacherpass : public QMainWindow
{
    Q_OBJECT

public:
    explicit Teacherpass(QWidget *parent = nullptr);
    ~Teacherpass();
    static Teacherpass *instance;
    void on_backButton_clicked();
    void on_resetButton_clicked();

private:
    Ui::Teacherpass *ui;
};

#endif // TEACHERPASS_H
