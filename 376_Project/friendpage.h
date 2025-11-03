#ifndef FRIENDPAGE_H
#define FRIENDPAGE_H

#include <QDialog>
#include "database.h"

namespace Ui {
class FriendPage;
}

class FriendPage : public QDialog
{
    Q_OBJECT

signals:
    void goToFriendPage();
    void closeFriendPage();

public:
    explicit FriendPage(Database* database, QWidget *parent = nullptr);
    ~FriendPage();

private slots:
    void on_backButton_clicked();

private:
    Ui::FriendPage *ui;

    Database* database;
};

#endif // FRIENDPAGE_H
