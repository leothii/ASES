#include "form5.h"
#include "ui_form5.h"

Form5 * Form5::instance=nullptr;
Form5::Form5(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form5)
{
    ui->setupUi(this);
}

Form5::~Form5()
{
    delete ui;
}
