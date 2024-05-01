#ifndef FORM3_H
#define FORM3_H

#include <QMainWindow>


namespace Ui {
class Form3;
}

class Form3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form3(QWidget *parent = nullptr);
    ~Form3();
    static Form3 *instance;
    void connectRadioButtons();
    double calculateAverage();
    QString studentnum;
    QString Teacher;
    QString Subject;

private slots:
    void on_nextButton_clicked();
    void handleRadioButtonClicked();

private:
    Ui::Form3 *ui;
    QList<int> selectedValues;
    friend class tselection;
};


#endif // FORM3_H
