#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include "datalist.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_managerButton_clicked();

    void on_userButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
