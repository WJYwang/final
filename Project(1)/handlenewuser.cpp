#include "handlenewuser.h"
#include "ui_handlenewuser.h"
#include <qdebug.h>
#include <QDebug>
#include <QWidget>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include "QMessageBox"
#include <QVBoxLayout>

extern DataList* datalist;

HandleNewUser::HandleNewUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HandleNewUser)
{
    ui->setupUi(this);
    draw();

}

void HandleNewUser::draw(){
    //清空当前界面内容
    ui->listWidget->clear();
    int total = ui->stackedWidget->count();
    for(int i=0;i<total;i++){
        QWidget* w = ui->stackedWidget->widget(0);
        ui->stackedWidget->removeWidget(w);
        delete w;
    }

    vector<User> pending = datalist->getPendingUserList();
    vector<bool> pp = datalist->getPendingList();
    QStackedWidget* info = ui->stackedWidget;
    //    将新用户添加到表中
    for(int i = 0;i<pending.size();i++){
        if(pp[i] == true){
            continue;
        }
         //qDebug() << pending[i].getUsername().c_str() << endl;
        string username = pending[i].getUsername();
        ui->listWidget->addItem(tr(username.c_str()));

        QWidget* add = new QWidget();
        QVBoxLayout* vl = new QVBoxLayout();
        QFormLayout* layout = new QFormLayout();

        QLineEdit* usernameline = new QLineEdit();
        usernameline->setText(pending[i].getUsername().c_str());
        layout->addRow(new QLabel("用户名"),usernameline);

        QLineEdit* addressline = new QLineEdit();
        addressline->setText(pending[i].getAddress().c_str());
        layout->addRow(new QLabel("地址"),addressline);

        QLineEdit* phoneline = new QLineEdit();
        phoneline->setText(pending[i].getPhone().c_str());
        layout->addRow(new QLabel("手机号码"),phoneline);

        QLineEdit* emailline = new QLineEdit();
        emailline->setText(pending[i].getEmail().c_str());
        layout->addRow(new QLabel("电子邮箱"),emailline);

        vl->addLayout(layout);
        QPushButton* confirm =  new QPushButton("确定");
        vl->addWidget(confirm);
        add->setLayout(vl);
        int cur = info->addWidget(add);
        qDebug() << "当前界面为: " << cur << endl;
        connect(confirm,&QPushButton::clicked,this,[=](){clickConfirm(i);});
    }

    //info->setCurrentIndex(2);
    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    qDebug() << "HandleNewUser" << endl;
}

void HandleNewUser::clickConfirm(int i){
    datalist->setPendingList(i,true);
    User user = datalist->getPendingUserList()[i];
    datalist->addUser(user);
    QMessageBox *msg = new QMessageBox();
    msg->about(this,tr(""),tr("审核通过"));
    draw();

}

HandleNewUser::~HandleNewUser()
{
    delete ui;
}
