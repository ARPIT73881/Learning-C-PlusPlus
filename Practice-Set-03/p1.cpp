#include <iostream>

using namespace std;

class test
{
private:
    int n = 10;

public:
    void show()
    {
        cout << "The value of n is : " << n << endl;
    }
};

int main(int argc, char const *argv[])
{

    test T; // Declaring object
    T.show();
    return 0;
}