#ifndef TCLIST_H
#define TCLIST_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
#include <QSettings>

namespace Ui {
class tclist;
}

class tclist : public QMainWindow
{
    Q_OBJECT

public:
    explicit tclist(QWidget *parent = nullptr);
    ~tclist();
    static tclist * instance;
    QStringList getTeacherNames();

    // Function to retrieve data from COURSELIST table
    QStringList getCourseSubjects();
    void loadData();
private slots:
   void on_backButton_clicked();
private:
    Ui::tclist *ui;

protected:
    void showEvent(QShowEvent *event) override;
};

#endif // TCLIST_H
