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

private:
    Ui::tselection *ui;
};

#endif // TSELECTION_H
