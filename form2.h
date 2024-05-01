#ifndef FORM2_H
#define FORM2_H

#include <QMainWindow>

namespace Ui {
class Form2;
}

class Form2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();
    static Form2 *instance;
    void connectRadioButtons();
    double calculateAverage();
    QString studentnum;
    QString Teacher;
    QString Subject;

private slots:
    void on_nextButton_clicked();
    void handleRadioButtonClicked();

private:
    Ui::Form2 *ui;
    QList<int> selectedValues;
    friend class tselection;
};

#endif // FORM2_H
