#ifndef COURSECREATE_H
#define COURSECREATE_H

#include <QDialog>

namespace Ui {
class CourseCreate;
}

class CourseCreate : public QDialog
{
    Q_OBJECT

public:
    explicit CourseCreate(QWidget* parent = nullptr);
    ~CourseCreate();

    QString getCourseName() const;

private:
    Ui::CourseCreate* ui;
};

#endif // COURSECREATE_H
