#ifndef USER_H
#define USER_H
#include <iostream>
#include <string.h>
using namespace std;

class User{
private:
    string username;
    string password;
    string address;
    string phone;
    string email;

public:
    string getUsername() const;
    void setUsername(const string &value);
    string getPassword() const;
    void setPassword(const string &value);
    string getAddress() const;
    void setAddress(const string &value);
    string getPhone() const;
    void setPhone(const string &value);
    string getEmail() const;
    void setEmail(const string &value);
};
#endif // USER_H


