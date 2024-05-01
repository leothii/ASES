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
    static Form4 *instance;
    void connectRadioButtons();
    double calculateAverage();
    QString studentnum;
    QString Teacher;
    QString Subject;

private slots:
    void on_nextButton_clicked();
    void handleRadioButtonClicked();

private:
    Ui::Form4 *ui;
    QList<int> selectedValues;
    friend class tselection;
};

#endif // FORM4_H
