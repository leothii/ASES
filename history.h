#ifndef HISTORY_H
#define HISTORY_H

#include <QMainWindow>

namespace Ui {
class History;
}

class History : public QMainWindow
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();
    static History *instance;
    void on_backButton_clicked();


private:
    Ui::History *ui;
};

#endif // HISTORY_H
