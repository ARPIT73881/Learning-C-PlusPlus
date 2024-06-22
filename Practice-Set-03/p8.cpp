// parameterized constructor
#include <iostream>

using namespace std;

class test
{
private:
    int num1;

public:
    test()
    {
        cout << "The constructor is called ..." << endl;
    }
    test(int n)
    {
        num1 = n;
    };
    void display()
    {
        cout << "The num1 is : " << num1 << endl;
    }
};

int main(int argc, char const *argv[])
{
    test T1(20);
    T1.display();

    return 0;
}