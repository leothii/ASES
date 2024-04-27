#include "tselection.h"
#include "ui_tselection.h"
#include "form1.h"
#include "instruction.h"

Form1* Form1::instance=nullptr;

tselection::tselection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tselection)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &tselection::on_backButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &tselection::on_nextButton_clicked);
}



void tselection::on_backButton_clicked()
{
    // Redirect to the main login window
    if (Instruction::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Instruction::instance = new Instruction(this);
    }
    Instruction::instance->show();
    this->hide();
}

void tselection::on_nextButton_clicked()
{
    // Redirect to the main login window
    if (Form1::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Form1::instance = new Form1(this);
    }
    Form1::instance->show();
    this->hide();
}

tselection::~tselection()
{
    delete ui;
}
