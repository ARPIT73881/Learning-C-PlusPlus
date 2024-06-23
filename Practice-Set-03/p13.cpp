// constructor overloading
#include <iostream>

using namespace std;

class test
{
private:
    int num;

public:
    test()
    {
        cout << "Constructor 1 " << endl;
    };
    test(int n)
    {
        num = n;
        cout << "Constructor 2" << endl;
        cout << "The value of n is : " << num;
    }
};

int main(int argc, char const *argv[])
{
    test t1;
    test t(8);

    return 0;
}