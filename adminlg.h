#ifndef ADMINLG_H
#define ADMINLG_H

#include <QMainWindow>

namespace Ui {
class AdminLg;
}

class AdminLg : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminLg(QWidget *parent = nullptr);
    ~AdminLg();

    static AdminLg *instance;
    void on_backButton_clicked();

private:
    Ui::AdminLg *ui;
};

#endif // ADMINLG_H
