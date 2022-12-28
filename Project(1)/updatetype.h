#ifndef UPDATETYPE_H
#define UPDATETYPE_H

#include <QWidget>

namespace Ui {
class Updatetype;
}

class Updatetype : public QWidget
{
    Q_OBJECT

public:
    explicit Updatetype(QWidget *parent = 0);
    ~Updatetype();
    void draw();

private slots:
    void on_deleteButton_clicked();

private:
    Ui::Updatetype *ui;
};

#endif // UPDATETYPE_H
