#include "coursecreate.h"
#include "ui_coursecreate.h"

CourseCreate::CourseCreate(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::CourseCreate)
{
    ui->setupUi(this);
}

CourseCreate::~CourseCreate()
{
    delete ui;
}

QString CourseCreate::getCourseName() const
{
    return ui->courseNameEdit->text();
}
