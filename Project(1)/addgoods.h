#ifndef ADDGOODS_H
#define ADDGOODS_H

#include <QWidget>
#include "datalist.h"

namespace Ui {
class AddGoods;
}

class AddGoods : public QWidget
{
    Q_OBJECT

public:
    explicit AddGoods(QWidget *parent = 0);
    ~AddGoods();

private slots:
    void on_addBook_clicked();

    void on_addFood_clicked();

    void on_addTool_clicked();

private:
    Ui::AddGoods *ui;
};

#endif // ADDGOODS_H
