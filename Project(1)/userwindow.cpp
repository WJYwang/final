#include "userwindow.h"
#include "ui_userwindow.h"
#include "addgoods.h"
#include "searchwindow.h"
#include <qdebug.h>
#include <QDebug>

UserWindow::UserWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
}

UserWindow::~UserWindow()
{
    delete ui;
}


void UserWindow::on_addButton_clicked()
{
    AddGoods* addGoods = new AddGoods();
    addGoods->show();
}


void UserWindow::on_searchButton_clicked()
{
    SearchWindow* searchWindow = new SearchWindow();
    searchWindow->show();
}

