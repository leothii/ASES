#include "studentpass.h"
#include "ui_studentpass.h"
#include "studentlg.h"

Studentpass* Studentpass::instance = nullptr;

Studentpass::Studentpass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Studentpass)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Studentpass::on_backButton_clicked);
}


void Studentpass::on_backButton_clicked() {

    this->hide();

    if (StudentLg::instance) {
        StudentLg::instance->show();
        StudentLg::instance->raise();\
            StudentLg::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        StudentLg::instance = new StudentLg(this);
        StudentLg::instance->show();
    }}

Studentpass::~Studentpass()
{
    delete ui;
}
