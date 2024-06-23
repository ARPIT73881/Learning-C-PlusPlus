// placing class in separate file in c++
#include <iostream>

using namespace std;

class test
{
private:
    int n;

public:
    test() : n(0)
    {
        cout << "Constructor is called ... " << endl;
    };
    ~test()
    {
        cout << "Destructor is called ... " << endl;
    };
    void setValue(int num)
    {
        n = num;
    };
    int getValue()
    {
        return n;
    }
};
