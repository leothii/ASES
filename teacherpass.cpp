#include "teacherpass.h"
#include "ui_teacherpass.h"
#include "teacherlg.h"


Teacherpass* Teacherpass::instance = nullptr;
Teacherpass::Teacherpass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Teacherpass)
{
    ui->setupUi(this);
     connect(ui->backButton, &QPushButton::clicked, this, &Teacherpass::on_backButton_clicked);
}

void Teacherpass::on_backButton_clicked() {

    this->hide();

    if (TeacherLg::instance) {
        TeacherLg::instance->show();
        TeacherLg::instance->raise();\
            TeacherLg::instance->activateWindow();
    } else {
        // Create a new instance of Sdashb
        TeacherLg::instance = new TeacherLg(this);
        TeacherLg::instance->show();
    }}


Teacherpass::~Teacherpass()
{
    delete ui;
}
