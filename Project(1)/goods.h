#ifndef GOODS_H
#define GOODS_H

#include <iostream>
#include <string.h>
using namespace std;

class Goods{
private:
      string name;
      string description;
      string address;
      string phone;
      string email;
public:
      string getName() const;
      void setName(const string &value);
      string getDescription() const;
      void setDescription(const string &value);
      string getAddress() const;
      void setAddress(const string &value);
      string getPhone() const;
      void setPhone(const string &value);
      string getEmail() const;
      void setEmail(const string &value);
};
#endif // GOODS_H

