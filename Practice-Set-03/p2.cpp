#include <iostream>

using namespace std;

class student
{
private:
    int roll = 10;

public:
    // void show()
    // {
    //     cout << "The roll number is : " << roll << endl;
    // }
    void show();
};

void student::show()
{
    cout << "The roll number is : " << roll << endl;
}

int main(int argc, char const *argv[])
{

    student S;
    S.show();
    return 0;
}