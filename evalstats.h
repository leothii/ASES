#ifndef EVALSTATS_H
#define EVALSTATS_H

#include <QMainWindow>
#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QComboBox>

namespace Ui {
class Evalstats;
}

class Evalstats : public QMainWindow
{
    Q_OBJECT

public:
    explicit Evalstats(QWidget *parent = nullptr);
    ~Evalstats();
    static Evalstats *instance;
    void updateButton();
    void on_cancelButton_clicked();
private:
    Ui::Evalstats *ui;
};

#endif // EVALSTATS_H
