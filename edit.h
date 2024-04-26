#ifndef EDIT_H
#define EDIT_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>

namespace Ui {
class Edit;
}

class Edit : public QMainWindow
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();
    static Edit *instance;
//private slots:
    //void on_submitButton_clicked();
private slots:
    void on_updateButton_clicked();
    void on_cancelButton_clicked();
private:
    Ui::Edit *ui;
};

#endif // EDIT_H
