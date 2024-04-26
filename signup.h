#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>

namespace Ui {
class Signup;
}

class Signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

public slots:
    void on_signupButton_clicked();
    void on_backButton_clicked();
private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
