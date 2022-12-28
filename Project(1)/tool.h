#ifndef TOOL_H
#define TOOL_H

#include <goods.h>

class Tool:public Goods{
    string type;

public:
    string getType() const;
    void setType(const string &value);
};
#endif // TOOL_H
