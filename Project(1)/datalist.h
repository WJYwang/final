#ifndef DATALIST_H
#define DATALIST_H

#include "food.h"
#include "book.h"
#include "tool.h"
#include "user.h"
#include <vector>
using namespace std;

class DataList{
private:
    vector<User> userList;
    vector<string> typeList;
    vector<Food> foodList;
    vector<Book> bookList;
    vector<Tool> toolList;
    vector<User> PendingUserList;
    vector<bool> PendingList;

public:

    vector<User> getUserList() const;
    void setUserList(const vector<User> &value);
    vector<string> getTypeList() const;
    void setTypeList(const vector<string> &value);
    vector<Food> getFoodList() const;
    void setFoodList(const vector<Food> &value);
    vector<Book> getBookList() const;
    void setBookList(const vector<Book> &value);
    vector<Tool> getToolList() const;
    void setToolList(const vector<Tool> &value);
    vector<User> getPendingUserList() const;
    void setPendingUserList(const vector<User> &value);
    void addType(string type);
    void addUser(User user);
    void addPendingUser(User user);
    void addFood(Food food);
    void addBook(Book book);
    void addTool(Tool tool);
    void deleteType(int index);

    vector<bool> getPendingList() const;
    void setPendingList(int i,int flag);
};
#endif // DATALIST_H
