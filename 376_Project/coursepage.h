#ifndef COURSEPAGE_H
#define COURSEPAGE_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QPixmap>
#include "database.h"

namespace Ui {
class CoursePage;
}

class CoursePage : public QWidget
{
    Q_OBJECT

signals:
    void goToCoursePage();
    void closeCoursePage();

public:
    explicit CoursePage(Database* database,
                        QWidget *parent = nullptr);
    ~CoursePage();

private slots:
    void on_backButton_clicked();

private:
    Ui::CoursePage *ui;

    Database* database;
};

#endif // COURSEPAGE_H
