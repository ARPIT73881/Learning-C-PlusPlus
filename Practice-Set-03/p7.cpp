// default constructors

#include <iostream>

using namespace std;

class test
{
private:
    int num1, num2;

public:
    test() : num2(10)
    {
        cout << "The constructor is called ..." << endl;
        num1 = 0;
    };
    void display()
    {
        cout << "The value of num1 is : " << num1 << endl;
        cout << "The value of num2 is : " << num2 << endl;
    }
};

int main(int argc, char const *argv[])
{

    test T1;
    T1.display();
    return 0;
}
