#include "teacherpass.h"
#include "ui_teacherpass.h"

Teacherpass::Teacherpass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Teacherpass)
{
    ui->setupUi(this);
}

Teacherpass::~Teacherpass()
{
    delete ui;
}
