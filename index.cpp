#include "index.h"
#include "ui_index.h"
#include "sdashb.h"
#include "instruction.h"

Instruction* Instruction::instance=nullptr;

Index::Index(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Index)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Index::on_backButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &Index::on_nextButton_clicked);
}
void Index::on_backButton_clicked()
{
    // Redirect to the main login window
    if (Sdashb::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Sdashb::instance = new Sdashb(this);
    }
    Sdashb::instance->show();
    this->hide();
}

void Index::on_nextButton_clicked()
{
    // Redirect to the main login window
    if (Instruction::instance == nullptr) {
        // Create a new instance of the main window if it doesn't already exist
        Instruction::instance = new Instruction(this);
    }
    Instruction::instance->show();
    this->hide();
}

Index::~Index()
{
    delete ui;
}
