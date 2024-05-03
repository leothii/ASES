#include "tdashb.h"
#include "ui_tdashb.h"
#include "mainwindow.h"

Tdashb::Tdashb(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tdashb)
{
    ui->setupUi(this);
}

Tdashb::~Tdashb()
{
    delete ui;
}
