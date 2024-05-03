#ifndef TSELECTION_H
#define TSELECTION_H

#include <QMainWindow>
#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QComboBox>

namespace Ui {
class tselection;
}

class tselection : public QMainWindow
{
    Q_OBJECT

public:
    explicit tselection(QWidget *parent = nullptr);
    ~tselection();
    static tselection*instance;
    static QString studentNumber;
    static QString subject;
    static QString teacher;
    void populateTeacherBox();
    void populateCourseBox();

private slots:
    void on_backButton_clicked();
    void on_nextButton_clicked();
private:
    Ui::tselection *ui;
    friend class Sdashb;

};

#endif // TSELECTION_H
