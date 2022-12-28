#include <datalist.h>


void DataList::addType(string type){
   typeList.push_back(type);
}
void DataList::addUser(User user){
    userList.push_back(user);
}
void DataList::addFood(Food food){
    foodList.push_back(food);
}
void DataList::addBook(Book book){
    bookList.push_back(book);
}
void DataList::addTool(Tool tool){
    toolList.push_back(tool);
}
vector<User> DataList::getPendingUserList() const
{
    return PendingUserList;
}

void DataList::setPendingUserList(const vector<User> &value)
{
    PendingUserList = value;
}

vector<bool> DataList::getPendingList() const
{
    return PendingList;
}

void DataList::setPendingList(int i, int flag)
{
    if(!flag){
        PendingList.push_back(flag);
        return;
    }
//    for(int i=0;i<PendingList.size();i++){
//        cout << PendingList[i] << endl;
//    }
//    cout << "asfsdfds" <<endl;
    PendingList[i] = true;
}

vector<User> DataList::getUserList() const
{
    return userList;
}

void DataList::setUserList(const vector<User> &value)
{
    userList = value;
}

vector<string> DataList::getTypeList() const
{
    return typeList;
}

void DataList::setTypeList(const vector<string> &value)
{
    typeList = value;
}

vector<Food> DataList::getFoodList() const
{
    return foodList;
}

void DataList::setFoodList(const vector<Food> &value)
{
    foodList = value;
}

vector<Book> DataList::getBookList() const
{
    return bookList;
}

void DataList::setBookList(const vector<Book> &value)
{
    bookList = value;
}

vector<Tool> DataList::getToolList() const
{
    return toolList;
}

void DataList::setToolList(const vector<Tool> &value)
{
    toolList = value;
}
void DataList::addPendingUser(User user){
    PendingUserList.push_back(user);
}

void DataList::deleteType(int index){
    typeList.erase(typeList.begin()+index);
}
