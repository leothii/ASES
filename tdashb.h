#ifndef TDASHB_H
#define TDASHB_H

#include <QMainWindow>

namespace Ui {
class Tdashb;
}

class Tdashb : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tdashb(QWidget *parent = nullptr);
    ~Tdashb();

private:
    Ui::Tdashb *ui;
};

#endif // TDASHB_H
