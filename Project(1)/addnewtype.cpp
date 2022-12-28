#include "addnewtype.h"
#include "ui_addnewtype.h"
#include <string.h>
#include "datalist.h"
#include <QMessageBox>

extern DataList* datalist;
addnewtype::addnewtype(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addnewtype)
{
    ui->setupUi(this);
}

addnewtype::~addnewtype()
{
    delete ui;
}

void addnewtype::on_pushButton_clicked()
{
    string type = ui->newTypeEditor->text().toStdString();
    datalist->addType(type);
    QMessageBox *msg = new QMessageBox();
    msg->about(this,tr(""),tr("添加成功"));
    ui->newTypeEditor->setText("");
}
