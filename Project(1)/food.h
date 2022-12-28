#ifndef FOOD_H
#define FOOD_H

#include "goods.h"

class Food: public Goods{
private:
    string expireDate;
    int number;

public:

    string getExpireDate() const;
    void setExpireDate(const string &value);
    int getNumber() const;
    void setNumber(int value);
};
#endif // FOOD_H

