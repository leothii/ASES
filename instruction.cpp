#include "instruction.h"
#include "ui_instruction.h"
#include "index.h"
#include "tselection.h"

Index* Index::instance=nullptr;

tselection* tselection::instance=nullptr;

Instruction::Instruction(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Instruction)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Instruction::on_backButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &Instruction::on_nextButton_clicked);
}


void Instruction::on_backButton_clicked()
{
    // Redirect to the main login window
    if (Index::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Index::instance = new Index(this);
    }
    Index::instance->show();
    this->hide();
}

void Instruction::on_nextButton_clicked()
{
    // Redirect to the main login window
    if (tselection::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        tselection::instance = new tselection(this);
    }
    tselection::instance->show();
    this->hide();
}

Instruction::~Instruction()
{
    delete ui;
}
