#include "addfrienddialog.h"
#include "ui_addfrienddialog.h"

AddFriendDialog::AddFriendDialog(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::AddFriendDialog)
{
    ui->setupUi(this);

    setWindowTitle("Add Friend");
}

AddFriendDialog::~AddFriendDialog()
{
    delete ui;
}

QString AddFriendDialog::getFriendName() const
{
    return ui->friendNameEdit->text();
}
