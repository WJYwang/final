#include "register.h"
#include "ui_register.h"
#include "widget.h"

extern DataList* datalist;

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    string username = ui->usernameLine->text().toStdString();
    string password = ui->passwordLine->text().toStdString();
    string repeatedpass = ui->repeatedLine->text().toStdString();
    string address = ui->addressLine->text().toStdString();
    string phone = ui->phoneLine->text().toStdString();
    string email = ui->emailLine->text().toStdString();

    if(strcmp(password.c_str(),repeatedpass.c_str())){
       QMessageBox *msg = new QMessageBox();
       msg->about(this,tr("提示"),tr("两次密码不一致"));
       return;
    }

    User user;
    user.setUsername(username);
    user.setPassword(password);
    user.setPhone(phone);
    user.setAddress(address);
    user.setEmail(email);
    datalist->addPendingUser(user);
    datalist->setPendingList(-1,false);
    QMessageBox *msg = new QMessageBox();
    msg->about(this,tr(""),tr("注册成功"));
    ui->usernameLine->setText("");
    ui->passwordLine->setText("");
    ui->repeatedLine->setText("");
    ui->addressLine->setText("");
    ui->phoneLine->setText("");
    ui->emailLine->setText("");

}

