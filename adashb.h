#ifndef ADASHB_H
#define ADASHB_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
namespace Ui {
class Adashb;
}

class Adashb : public QMainWindow
{
    Q_OBJECT

public:
    explicit Adashb(QWidget *parent = nullptr);
    ~Adashb();

    static Adashb*instance;
    static QString teacher;
    static QString subject;
    static QString email;
    static QString password;

    void on_taddButton_clicked();
    void on_saddButton_clicked();
    void on_backButton_clicked();
    void on_viewButton_clicked();
    void on_studentButton_clicked();
    void updateStudentCountLabel();

private:
    Ui::Adashb *ui;
};

#endif // ADASHB_H
