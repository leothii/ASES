#ifndef STUDENTPASS_H
#define STUDENTPASS_H

#include <QMainWindow>

namespace Ui {
class Studentpass;
}

class Studentpass : public QMainWindow
{
    Q_OBJECT

public:
    explicit Studentpass(QWidget *parent = nullptr);
    ~Studentpass();
    static Studentpass *instance;

    void on_backButton_clicked();

private:
    Ui::Studentpass *ui;
};

#endif // STUDENTPASS_H
