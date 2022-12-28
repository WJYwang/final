#include "searchwindow.h"
#include "ui_searchwindow.h"
#include <cstring>
#include <string.h>
#include <qdebug.h>
#include <QDebug>

extern DataList* datalist;
SearchWindow::SearchWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchWindow)
{
    ui->setupUi(this);
    vector<string> types = datalist->getTypeList();
    for(int i=0;i<types.size();i++){
        ui->searchType->addItem(tr(types[i].c_str()));
    }


}

SearchWindow::~SearchWindow()
{
    delete ui;
}


void SearchWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
    //delete ui->stackedWidget;

    int total = ui->stackedWidget->count();
    for(int i=0;i<total;i++){
        qDebug() << i << endl;
        QWidget* w =  ui->stackedWidget->widget(0);
        ui->stackedWidget->removeWidget(w);
        delete w;
    }

    string type = ui->searchType->currentText().toStdString();
    string keyword = ui->searchKeyword->text().toStdString();
    QStackedWidget* info = ui->stackedWidget;

    if(!strcmp("书籍",type.c_str())){


        vector<Book> a = datalist->getBookList();

        vector<Book> source;

        for(int i=0;i<a.size();i++){
            if(strstr(a[i].getName().c_str(),keyword.c_str())!=NULL){
                source.push_back(a[i]);
                continue;
            }
            if(strstr(a[i].getDescription().c_str(),keyword.c_str())!=NULL){
                source.push_back(a[i]);
            }
        }



        for(int i=0;i<source.size();i++){
            QWidget* add = new QWidget();
            QFormLayout* layout = new QFormLayout();

            string goodsname = source[i].getName();
            ui->listWidget->addItem(tr(goodsname.c_str()));

            QLineEdit* goodsnameline = new QLineEdit();
            goodsnameline->setText(source[i].getName().c_str());
            layout->addRow(new QLabel("物品名称"),goodsnameline);

            QLineEdit* goodsdescrip = new QLineEdit();
            goodsdescrip->setText(source[i].getDescription().c_str());
            layout->addRow(new QLabel("物品说明"),goodsdescrip);

            QLineEdit* addressline = new QLineEdit();
            addressline->setText(source[i].getAddress().c_str());
            layout->addRow(new QLabel("物品所在地址"),addressline);

            QLineEdit* phoneline = new QLineEdit();
            phoneline->setText(source[i].getPhone().c_str());
            layout->addRow(new QLabel("联系人手机"),phoneline);

            QLineEdit* emailline = new QLineEdit();
            emailline->setText(source[i].getEmail().c_str());
            layout->addRow(new QLabel("电子邮箱"),emailline);

            QLineEdit* authorline = new QLineEdit();
            authorline->setText(source[i].getAuthor().c_str());
            layout->addRow(new QLabel("作者"),authorline);

            QLineEdit* pressline = new QLineEdit();
            pressline->setText(source[i].getPress().c_str());
            layout->addRow(new QLabel("出版社"),pressline);

            add->setLayout(layout);
            int cur = info->addWidget(add);
            qDebug() << "当前界面为: " << cur << endl;
        }
    }
    else if(!strcmp("食品",type.c_str())){
        vector<Food> a = datalist->getFoodList();
        vector<Food> source;

        for(int i=0;i<a.size();i++){
            if(strstr(a[i].getName().c_str(),keyword.c_str())!=NULL){
                source.push_back(a[i]);
                continue;
            }
            if(strstr(a[i].getDescription().c_str(),keyword.c_str())!=NULL){
                source.push_back(a[i]);
            }
        }

        for(int i=0;i<source.size();i++){
            QWidget* add = new QWidget();
            QFormLayout* layout = new QFormLayout();

            string goodsname = source[i].getName();
            ui->listWidget->addItem(tr(goodsname.c_str()));

            QLineEdit* goodsnameline = new QLineEdit();
            goodsnameline->setText(source[i].getName().c_str());
            layout->addRow(new QLabel("物品名称"),goodsnameline);

            QLineEdit* goodsdescrip = new QLineEdit();
            goodsdescrip->setText(source[i].getDescription().c_str());
            layout->addRow(new QLabel("物品说明"),goodsdescrip);

            QLineEdit* addressline = new QLineEdit();
            addressline->setText(source[i].getAddress().c_str());
            layout->addRow(new QLabel("物品所在地址"),addressline);

            QLineEdit* phoneline = new QLineEdit();
            phoneline->setText(source[i].getPhone().c_str());
            layout->addRow(new QLabel("联系人手机"),phoneline);

            QLineEdit* emailline = new QLineEdit();
            emailline->setText(source[i].getEmail().c_str());
            layout->addRow(new QLabel("电子邮箱"),emailline);

//            drawPart(source,layout,i);
            QLineEdit* validline = new QLineEdit();
            validline->setText(source[i].getExpireDate().c_str());
            layout->addRow(new QLabel("保质期"),validline);

            QLineEdit* numline = new QLineEdit();
            numline->setText(to_string(source[i].getNumber()).c_str());
            layout->addRow(new QLabel("数量"),numline);

            add->setLayout(layout);
            int cur = info->addWidget(add);
            qDebug() << "当前界面为: " << cur << endl;
        }
    }else{
        vector<Tool> a = datalist->getToolList();
        vector<Tool> source;

        for(int i=0;i<a.size();i++){
            if(strstr(a[i].getName().c_str(),keyword.c_str())!=NULL){
                if(!strcmp(a[i].getType().c_str(),type.c_str())){
                    source.push_back(a[i]);
                    continue;
                }

            }
            if(strstr(a[i].getDescription().c_str(),keyword.c_str())!=NULL){
                if(!strcmp(a[i].getType().c_str(),type.c_str())){
                    source.push_back(a[i]);
                }
            }
        }

        for(int i=0;i<source.size();i++){
            QWidget* add = new QWidget();
            QFormLayout* layout = new QFormLayout();

            string goodsname = source[i].getName();
            ui->listWidget->addItem(tr(goodsname.c_str()));

            QLineEdit* goodsnameline = new QLineEdit();
            goodsnameline->setText(source[i].getName().c_str());
            layout->addRow(new QLabel("物品名称"),goodsnameline);

            QLineEdit* goodsdescrip = new QLineEdit();
            goodsdescrip->setText(source[i].getDescription().c_str());
            layout->addRow(new QLabel("物品说明"),goodsdescrip);

            QLineEdit* addressline = new QLineEdit();
            addressline->setText(source[i].getAddress().c_str());
            layout->addRow(new QLabel("物品所在地址"),addressline);

            QLineEdit* phoneline = new QLineEdit();
            phoneline->setText(source[i].getPhone().c_str());
            layout->addRow(new QLabel("联系人手机"),phoneline);

            QLineEdit* emailline = new QLineEdit();
            emailline->setText(source[i].getEmail().c_str());
            layout->addRow(new QLabel("电子邮箱"),emailline);

            add->setLayout(layout);
            int cur = info->addWidget(add);
            qDebug() << "当前界面为: " << cur << endl;
        }
    }

    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));


}
