#ifndef STUDENTPASS_H
#define STUDENTPASS_H

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
class Studentpass;
}

class Studentpass : public QMainWindow
{
    Q_OBJECT

public:
    explicit Studentpass(QWidget *parent = nullptr);
    ~Studentpass();
    static Studentpass *instance;

    void on_backButton_clicked();
    void on_resetButton_clicked();
private:
    Ui::Studentpass *ui;
};

#endif // STUDENTPASS_H
