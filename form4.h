#ifndef FORM4_H
#define FORM4_H

#include <QMainWindow>

namespace Ui {
class Form4;
}

class Form4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form4(QWidget *parent = nullptr);
    ~Form4();

private:
    Ui::Form4 *ui;
};

#endif // FORM4_H
