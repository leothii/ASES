#ifndef FORM5_H
#define FORM5_H

#include <QMainWindow>

namespace Ui {
class Form5;
}

class Form5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form5(QWidget *parent = nullptr);
    ~Form5();
     static Form5 *instance;
private:
    Ui::Form5 *ui;
};

#endif // FORM5_H
