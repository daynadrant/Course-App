#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include "database.h"

namespace Ui {
class HomePage;
}

class HomePage : public QWidget
{
    Q_OBJECT

signals:
    void logout();

public:
    explicit HomePage(
        Database* database,
        QWidget* parent = nullptr);
    ~HomePage();

private slots:
    void on_logoutButton_clicked();

private:
    Ui::HomePage *ui;

    Database* database;
};

#endif // HOMEPAGE_H
