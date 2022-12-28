#include "managerwindow.h"
#include "ui_managerwindow.h"
#include "handlenewuser.h"
#include <qdebug.h>
#include <QDebug>
#include "addnewtype.h"
#include "updatetype.h"

managerWindow::managerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::managerWindow)
{
    ui->setupUi(this);
}

managerWindow::~managerWindow()
{
    delete ui;
}

void managerWindow::on_pendingUserButton_clicked()
{
    HandleNewUser* hw = new HandleNewUser();
    hw->show();
}

void managerWindow::on_addTypeButton_clicked()
{
    addnewtype* at = new addnewtype();
    at->show();
}

void managerWindow::on_changeTypeButton_clicked()
{
    Updatetype* up =  new  Updatetype();
    up->show();
}
