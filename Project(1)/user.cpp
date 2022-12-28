#include "user.h"

string User::getEmail() const
{
    return email;
}

void User::setEmail(const string &value)
{
    email = value;
}

string User::getUsername() const
{
    return username;
}

void User::setUsername(const string &value)
{
    username = value;
}

string User::getPassword() const
{
    return password;
}

void User::setPassword(const string &value)
{
    password = value;
}

string User::getAddress() const
{
    return address;
}

void User::setAddress(const string &value)
{
    address = value;
}

string User::getPhone() const
{
    return phone;
}

void User::setPhone(const string &value)
{
    phone = value;
}
