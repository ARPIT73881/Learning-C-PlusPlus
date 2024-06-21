#include <iostream>

using namespace std;

class student
{
private:
public:
    void show(int roll, char name[20])
    {
        cout << "The roll number is : " << roll << endl;
        cout << "The name is : " << name << endl;
    }
};

int main(int argc, char const *argv[])
{

    student S;
    int roll;
    char name[30];
    cout << "Enter roll : ";
    cin >> roll;
    cout << "Enter name : ";
    cin >> name;
    S.show(roll, name);
    return 0;
}