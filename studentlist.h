#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <QMainWindow>

namespace Ui {
class Studentlist;
}

class Studentlist : public QMainWindow
{
    Q_OBJECT

public:
    explicit Studentlist(QWidget *parent = nullptr);
    ~Studentlist();

private:
    Ui::Studentlist *ui;
};

#endif // STUDENTLIST_H
