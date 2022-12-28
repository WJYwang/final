#include <food.h>

string Food::getExpireDate() const
{
    return expireDate;
}

void Food::setExpireDate(const string &value)
{
    expireDate = value;
}

int Food::getNumber() const
{
    return number;
}

void Food::setNumber(int value)
{
    number = value;
}
