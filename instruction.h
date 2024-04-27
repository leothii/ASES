#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <QMainWindow>

namespace Ui {
class Instruction;
}

class Instruction : public QMainWindow
{
    Q_OBJECT

public:
    explicit Instruction(QWidget *parent = nullptr);
    ~Instruction();
    static Instruction *instance;

private slots:
    void on_backButton_clicked();
    void on_nextButton_clicked();

private:
    Ui::Instruction *ui;

};

#endif // INSTRUCTION_H
