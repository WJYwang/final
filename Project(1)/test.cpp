#include <iostream>
using namespace std;

class A{
private:
    int b;
public:
    int getB() const
    {
        return b;
    }

    void setB(int value)
    {
        b = value;
    }

};

int main(){
    A testop;
    testop.setB(9);
    cout << testop.getB() << endl;
}
