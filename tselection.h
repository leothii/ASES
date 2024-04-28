#ifndef TSELECTION_H
#define TSELECTION_H

#include <QMainWindow>

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

private slots:
     void on_backButton_clicked();
     void on_nextButton_clicked();
     void onCourseBoxIndexChanged(const QString &text);
     void onTeacherBoxIndexChanged(const QString &text);
     void updateDatabase(const QString &columnName, const QString &value);

private:
    Ui::tselection *ui;
};

#endif // TSELECTION_H
