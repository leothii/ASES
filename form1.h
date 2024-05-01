#ifndef FORM1_H
#define FORM1_H

#include <QMainWindow>

namespace Ui {
class Form1;
}

class Form1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = nullptr);
    ~Form1();
    static Form1 *instance;
    void connectRadioButtons();
    double calculateAverage();
    QString studentnum;
    QString Teacher;
    QString Subject;

private slots:
    void on_nextButton_clicked();
    void handleRadioButtonClicked();
private:
    Ui::Form1 *ui;
    QList<int> selectedValues;

    friend class tselection;

};

#endif // FORM1_H
