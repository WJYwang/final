#ifndef ADDNEWTYPE_H
#define ADDNEWTYPE_H

#include <QWidget>

namespace Ui {
class addnewtype;
}

class addnewtype : public QWidget
{
    Q_OBJECT

public:
    explicit addnewtype(QWidget *parent = 0);
    ~addnewtype();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addnewtype *ui;
};

#endif // ADDNEWTYPE_H
