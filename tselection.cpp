#include "tselection.h"
#include "ui_tselection.h"

tselection::tselection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tselection)
{
    ui->setupUi(this);
}

tselection::~tselection()
{
    delete ui;
}
