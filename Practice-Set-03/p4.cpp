#include <iostream>

using namespace std;
class student
{
private:
    int roll;
    char name[30];

public:
    void inputData()
    {
        cout << "Enter roll number : ";
        cin >> roll;
        cout << "Enter name : ";
        cin >> name;
    }
    void outputData()
    {
        cout << "Roll number : " << roll << endl;
        cout << "Name : " << name << endl;
    }
};
int main(int argc, char const *argv[])
{

    student S;
    cout << "-----------------Input Data-----------------" << endl;
    S.inputData();
    cout << "-----------------Output Data-----------------" << endl;
    S.outputData();
    return 0;
}