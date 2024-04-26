#ifndef STUDENTLG_H
#define STUDENTLG_H

#include <QMainWindow>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
#include <QSettings>
#include <signup.h>


namespace Ui {
class StudentLg;
}

class StudentLg : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentLg(QWidget *parent = nullptr);
    ~StudentLg();

    static StudentLg *instance;

    void on_backButton_clicked();

signals:
    void signUpClicked();

private slots:
    void on_loginButton_clicked();
    void on_signUpButton_clicked(); // Slot to open sign up window


private:
    Ui::StudentLg *ui;
    Signup* signupWindow; // Add a member variable for the Signup windows
    bool connectToDatabase();

protected:
    // Declare the keyPressEvent method to handle key press events
    void keyPressEvent(QKeyEvent *event) override;
};



#endif // STUDENTLG_H
