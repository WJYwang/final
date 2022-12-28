#include "widget.h"
#include "ui_widget.h"
#include "login.h"
#include "managerwindow.h"
#include "userwindow.h"
#include "login.h"

extern DataList* datalist;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    ui->setupUi(this);
    //    初始化一部分数据
    datalist->addType("书籍");
    datalist->addType("食品");
    datalist->addType("工具");
    datalist->addType("文具");
    datalist->addType("电子产品");
    User user;
    user.setUsername("zhangsan");
    user.setPassword("123456");
    datalist->addUser(user);

    Book book1,book2,book3,book4;
    book1.setName("book1");
    book2.setName("book2");
    book3.setName("book3");
    book3.setDescription("1234534");
    book4.setName("book4");
    datalist->addBook(book1);
    datalist->addBook(book2);
    datalist->addBook(book3);
    datalist->addBook(book4);

    Food food1,food2,food3,food4;
    food1.setName("food1");
    food2.setName("food2");
    food3.setName("food3");
    food3.setDescription("1234534");
    food4.setName("food4");

    datalist->addFood(food1);
    datalist->addFood(food2);
    datalist->addFood(food3);
    datalist->addFood(food4);

    Tool tool1,tool2;
    tool1.setName("笔记本电脑");
    tool1.setDescription("惠普电脑");
//    tool1.setType("电子产品");

    tool2.setName("钢笔");
    tool2.setDescription("英雄钢笔");
//    tool2.setType("文具");

    datalist->addTool(tool1);
    datalist->addTool(tool2);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_managerButton_clicked()
{
    managerWindow* mw = new managerWindow();
    mw->show();
}

void Widget::on_userButton_clicked()
{
    Login* login = new Login();
    login->show();
}

