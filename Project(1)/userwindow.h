#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QWidget>
#include "datalist.h"

namespace Ui {
class UserWindow;
}

class UserWindow : public QWidget
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = 0);
    ~UserWindow();


private slots:
    void on_addButton_clicked();

    void on_searchButton_clicked();

private:
    Ui::UserWindow *ui;
};

#endif // USERWINDOW_H
