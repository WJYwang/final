#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <datalist.h>
#include <QMessageBox>
#include <manager.h>
#include "datalist.h"
#include <QDebug>
#include <qdebug.h>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();


private slots:
    void on_pushButton_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
