#include "manager.h"

vector<User> Manager::getPendingUser() const
{
    return pendingUser;
}

void Manager::setPendingUser(const vector<User> &value)
{
    pendingUser = value;
}

DataList Manager::getDataList() const
{
    return dataList;
}

void Manager::setDataList(const DataList &value)
{
    dataList = value;
}
void Manager::addPendingUser(const User user){
    pendingUser.push_back(user);
}
