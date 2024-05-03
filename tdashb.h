#ifndef TDASHB_H
#define TDASHB_H

#include <QMainWindow>
#include <QtCore>
#include <QtSql>
#include <QSqlQuery>
#include <QtWidgets/QMessageBox>
#include <QSettings>
#include <signup.h>
#include <QString>

namespace Ui {
class Tdashb;
}

class Tdashb : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tdashb(QWidget *parent = nullptr);
    ~Tdashb();
    static Tdashb *instance;
    static QString& email;
    static QString name;

    QString getName(const QString& email);

private:
    Ui::Tdashb *ui;

    friend class TeacherLg;
};

#endif // TDASHB_H
