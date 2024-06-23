// destructor

#include <iostream>

using namespace std;

class test
{
private:
    int num1;

public:
    test();
    ~test();
    void show()
    {
        cout << "The value of num1 is : " << num1 << endl;
    }
};

test::test() : num1(30)
{
    cout << "Constructor is called ... " << endl;
}

test::~test()
{
    cout << "Destructor is called ... " << endl;
}

int main(int argc, char const *argv[])
{
    test T1;
    T1.show();
    return 0;
}