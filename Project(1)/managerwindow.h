#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QWidget>
#include <iostream>
#include "datalist.h"
#include <qdebug.h>

namespace Ui {
class managerWindow;
}

class managerWindow : public QWidget
{
    Q_OBJECT
public:
    explicit managerWindow(QWidget *parent = 0);
    ~managerWindow();

private slots:

    void on_pendingUserButton_clicked();

    void on_addTypeButton_clicked();

    void on_changeTypeButton_clicked();

private:
    Ui::managerWindow *ui;
};

#endif // MANAGERWINDOW_H
