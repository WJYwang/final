#include "addgoods.h"
#include "ui_addgoods.h"
#include <qdebug.h>
#include <QDebug>
#include <QMessageBox>

extern DataList* datalist;
AddGoods::AddGoods(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddGoods)
{
    ui->setupUi(this);
    vector<string> types = datalist->getTypeList();
    for(int i=0;i<types.size();i++){
        if(strcmp("书籍",types[i].c_str()) && strcmp("食品",types[i].c_str())){
            ui->toolType->addItem(tr(types[i].c_str()));
        }
    }
    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
}

AddGoods::~AddGoods()
{
    delete ui;
}

void AddGoods::on_addBook_clicked()
{
    string name = ui->bookname->text().toStdString();
    string descrip = ui->bookdescrip->text().toStdString();
    string ownerAddress = ui->owneraddress->text().toStdString();
    string ownerPhone = ui->ownerphone->text().toStdString();
    string ownerEmail = ui->owneremail->text().toStdString();
    string author = ui->author->text().toStdString();
    string del = ui->delivery->text().toStdString();

    Book book;
    book.setName(name);
    book.setDescription(descrip);
    book.setAddress(ownerAddress);
    book.setPhone(ownerPhone);
    book.setEmail(ownerEmail);
    book.setAuthor(author);
    book.setPress(del);

    datalist->addBook(book);
    QMessageBox *msg = new QMessageBox();
    msg->about(this,tr(""),tr("添加成功"));
    ui->bookname->setText("");
    ui->bookdescrip->setText("");
    ui->owneraddress->setText("");
    ui->ownerphone->setText("");
    ui->owneremail->setText("");
    ui->author->setText("");
    ui->delivery->setText("");
//    qDebug() << "book 添加成功 " << datalist->getBookList()
//                [datalist->getBookList().size()-1].getName().c_str() << endl;

}

void AddGoods::on_addFood_clicked()
{
    string name = ui->foodname->text().toStdString();
    string descrip = ui->fooddescrip->text().toStdString();
    string ownerAddress = ui->fownerAddress->text().toStdString();
    string ownerPhone = ui->fownerPhone->text().toStdString();
    string ownerEmail = ui->fownerEmail->text().toStdString();
    string valid = ui->validDate->text().toStdString();
    int nums = ui->num->text().toInt();

    Food food;
    food.setName(name);
    food.setDescription(descrip);
    food.setAddress(ownerAddress);
    food.setPhone(ownerPhone);
    food.setEmail(ownerEmail);
    food.setExpireDate(valid);
    food.setNumber(nums);

    datalist->addFood(food);
    QMessageBox *msg = new QMessageBox();
    msg->about(this,tr(""),tr("添加成功"));
    ui->foodname->setText("");
    ui->fooddescrip->setText("");
    ui->fownerAddress->setText("");
    ui->fownerPhone->setText("");
    ui->fownerEmail->setText("");
    ui->validDate->setText("");
//    qDebug() << "food 添加成功 " << datalist->getFoodList()
//                [datalist->getFoodList().size()-1].getName().c_str() << endl;

}

void AddGoods::on_addTool_clicked()
{
    string name = ui->toolname->text().toStdString();
    string descrip = ui->tooldescrip->text().toStdString();
    string ownerAddress = ui->townerAddress->text().toStdString();
    string ownerPhone = ui->townerPhone->text().toStdString();
    string ownerEmail = ui->townerEmail->text().toStdString();
    string type = ui->toolType->currentText().toStdString();

    Tool tool;
    tool.setName(name);
    tool.setDescription(descrip);
    tool.setAddress(ownerAddress);
    tool.setPhone(ownerPhone);
    tool.setEmail(ownerEmail);
    tool.setType(type);

    datalist->addTool(tool);
    QMessageBox *msg = new QMessageBox();
    msg->about(this,tr(""),tr("添加成功"));
    ui->toolname->setText("");
    ui->tooldescrip->setText("");
    ui->townerAddress->setText("");
    ui->townerPhone->setText("");
    ui->townerEmail->setText("");
//    qDebug() << "tool 添加成功 " << datalist->getToolList()
//                [datalist->getToolList().size()-1].getName().c_str() << endl;

}

