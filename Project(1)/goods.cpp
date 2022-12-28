#include <goods.h>

string Goods::getName() const
{
    return name;
}

void Goods::setName(const string &value)
{
    name = value;
}

string Goods::getDescription() const
{
    return description;
}

void Goods::setDescription(const string &value)
{
    description = value;
}

string Goods::getAddress() const
{
    return address;
}

void Goods::setAddress(const string &value)
{
    address = value;
}

string Goods::getPhone() const
{
    return phone;
}

void Goods::setPhone(const string &value)
{
    phone = value;
}

string Goods::getEmail() const
{
    return email;
}

void Goods::setEmail(const string &value)
{
    email = value;
}
