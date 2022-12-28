#include "updatetype.h"
#include "ui_updatetype.h"
#include "datalist.h"
#include <cstring>
#include <string.h>
#include "qmessagebox.h"
#include "qdebug.h"

extern DataList* datalist;
Updatetype::Updatetype(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Updatetype)
{
    ui->setupUi(this);
    draw();
}

void Updatetype::draw(){
    ui->typeBox->clear();
    vector<string> types = datalist->getTypeList();
    for(int i=0;i<types.size();i++){
        ui->typeBox->addItem(tr(types[i].c_str()));
    }
}

Updatetype::~Updatetype()
{
    delete ui;
}

void Updatetype::on_deleteButton_clicked()
{
    string type = ui->typeBox->currentText().toStdString();
    int index = ui->typeBox->currentIndex();
    qDebug() << type.c_str() << endl;
    qDebug() << index << endl;

    if(!strcmp("书籍",type.c_str())){
        if(datalist->getBookList().size()>0){
            QMessageBox *msg = new QMessageBox();
            msg->about(this,tr(""),tr("该类别下存在物品，无法删除"));
        }else{
            datalist->deleteType(index);
        }
    }else if(!strcmp("食品",type.c_str())){
        if(datalist->getFoodList().size()>0){
            QMessageBox *msg = new QMessageBox();
            msg->about(this,tr(""),tr("该类别下存在物品，无法删除"));
        }else{
            datalist->deleteType(index);
        }
    }else{
        vector<Tool> toolist = datalist->getToolList();
        int cnt=0;
        for(int i=0;i<toolist.size();i++){
            if(!strcmp(type.c_str(),toolist[i].getType().c_str())){
                cnt++;
            }
        }
        if(cnt>0){
            QMessageBox *msg = new QMessageBox();
            msg->about(this,tr(""),tr("该类别下存在物品，无法删除"));
        }else{
            datalist->deleteType(index);
        }
    }
    draw();
}

