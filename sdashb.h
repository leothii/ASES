#ifndef SDASHB_H
#define SDASHB_H

#include <QMainWindow>
#include <QLabel>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
#include <QSettings>
#include <signup.h>
#include <QString>
#include <QTimer>

namespace Ui {
class Sdashb;
}

class Sdashb : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sdashb(QWidget *parent = nullptr);
    ~Sdashb();
    static Sdashb *instance;
    static QString sNum;

    //function nga ma update sang user info
    void setStudentInformation(const QString& fullName, const QString& studentNumber, const QString& email);
    void setprogressBar();
    void on_logoutButton_clicked();

private slots:

    void on_EvaluateButton_clicked();
    void on_EditButton_clicked();
    void on_HistoryButton_clicked();


private:
    Ui::Sdashb *ui;
    friend class StudentLg;


    QLabel *nameLabel;
    QLabel *emailLabel;
    QLabel *studentNumberLabel;
};

#endif // SDASHB_H
