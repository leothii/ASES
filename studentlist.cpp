#include "studentlist.h"
#include "ui_studentlist.h"

Studentlist::Studentlist(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Studentlist)
{
    ui->setupUi(this);
}

Studentlist::~Studentlist()
{
    delete ui;
}
