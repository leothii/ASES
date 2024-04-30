#ifndef GLOBAL_H
#define GLOBAL_H

#include <QMainWindow>

namespace Ui {
class Global;
}

class Global : public QMainWindow
{
    Q_OBJECT

public:
    explicit Global(QWidget *parent = nullptr);
    ~Global();

private:
    Ui::Global *ui;
};

#endif // GLOBAL_H
