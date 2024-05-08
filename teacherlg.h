#ifndef TEACHERLG_H
#define TEACHERLG_H

#include <QMainWindow>

namespace Ui {
class TeacherLg;
}

class TeacherLg : public QMainWindow
{
    Q_OBJECT

public:
    explicit TeacherLg(QWidget *parent = nullptr);
    ~TeacherLg();

    static TeacherLg *instance;
    void on_backButton_clicked();
    void on_loginButton_clicked();
    static QString email, password;
    void on_passButton_clicked();

private:
    Ui::TeacherLg *ui;
};

#endif // TEACHERLG_H
