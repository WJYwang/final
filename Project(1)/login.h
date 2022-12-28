#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QDialog>
#include <string.h>
#include <qdebug.h>
#include <iostream>
#include "datalist.h"
#include <string.h>
#include <QMessageBox>


using namespace std;

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();


private slots:

    void on_loginButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::Login *ui;

};

#endif // LOGIN_H
