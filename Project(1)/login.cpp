#include "login.h"
#include "ui_login.h"
#include "userwindow.h"
#include "register.h"
#include "widget.h"

extern DataList* datalist;

Login::Login(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    qDebug() << "extern pending size in login" << datalist->getPendingUserList().size() << endl;
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    string username = ui->usernameLine->text().toStdString();
    string password = ui->passwordLine->text().toStdString();

    vector<User> userList = datalist->getUserList();

    bool flag = true;
    int i;
    string msg ="不存在该用户";

    for(i=0;i<userList.size();i++){
        if(!strcmp(username.c_str(),userList[i].getUsername().c_str())){
            if(!strcmp(password.c_str(),userList[i].getPassword().c_str())){
                flag = false;
                break;
            }
            msg = "密码错误";
            //用户名只有一个正确
            break;
        }
    }

    if(!flag){
        //关闭当前登录
        UserWindow* uw = new UserWindow();
        uw->show();
        return;
    }

    //生成错误对话框
    QMessageBox messagebox;
    messagebox.about(this,"错误信息",msg.c_str());
    qDebug() << "已生成对话框" ;
}


void Login::on_registerButton_clicked()
{
    Register* reg = new Register();
    reg->show();
}
