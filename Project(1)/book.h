#ifndef BOOK_H
#define BOOK_H

#include <goods.h>

class Book: public Goods{
private:
    string author;
    string press;
public:
    string getAuthor() const;
    void setAuthor(const string &value);
    string getPress() const;
    void setPress(const string &value);
};
#endif // BOOK_H
