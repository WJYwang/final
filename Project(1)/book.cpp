#include <book.h>

string Book::getAuthor() const
{
    return author;
}

void Book::setAuthor(const string &value)
{
    author = value;
}

string Book::getPress() const
{
    return press;
}

void Book::setPress(const string &value)
{
    press = value;
}
