#include "global.h"
#include "ui_global.h"

Global::Global(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Global)
{
    ui->setupUi(this);
}

Global::~Global()
{
    delete ui;
}
