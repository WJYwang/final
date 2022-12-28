#ifndef MANAGER_H
#define MANAGER_H

#include <datalist.h>

class Manager{
private:
    DataList dataList;
    vector<User> pendingUser;

public:

    DataList getDataList() const;
    void setDataList(const DataList &value);
    vector<User> getPendingUser() const;
    void setPendingUser(const vector<User> &value);
    void addPendingUser(const User user);
};


#endif // MANAGER_H
