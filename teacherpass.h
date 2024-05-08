#ifndef TEACHERPASS_H
#define TEACHERPASS_H

#include <QMainWindow>

namespace Ui {
class Teacherpass;
}

class Teacherpass : public QMainWindow
{
    Q_OBJECT

public:
    explicit Teacherpass(QWidget *parent = nullptr);
    ~Teacherpass();
    static Teacherpass *instance;
    void on_backButton_clicked();

private:
    Ui::Teacherpass *ui;
};

#endif // TEACHERPASS_H
