#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include "database.h"
#include "rank_type.h"
#include "coursecreate.h"

namespace Ui {
class HomePage;
}

class HomePage : public QWidget
{
    Q_OBJECT

signals:
    void logout();
    void login();

public:
    explicit HomePage(
        Database* database,
        QWidget* parent = nullptr);
    ~HomePage();

private slots:
    void on_logoutButton_clicked();

    void on_addCourseButton_clicked();

private:
    Ui::HomePage *ui;

    Database* database;
};

#endif // HOMEPAGE_H
