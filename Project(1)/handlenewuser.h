#ifndef HANDLENEWUSER_H
#define HANDLENEWUSER_H

#include <QWidget>
#include "datalist.h"

namespace Ui {
class HandleNewUser;
}

class HandleNewUser : public QWidget
{
    Q_OBJECT

public:
    explicit HandleNewUser(QWidget *parent = 0);
    ~HandleNewUser();
public slots:
    void clickConfirm(int i);
    void draw();

private:
    Ui::HandleNewUser *ui;
};

#endif // HANDLENEWUSER_H
