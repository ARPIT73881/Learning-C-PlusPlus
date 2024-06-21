// using setter and getter function

#include <iostream>
#include <string.h>

using namespace std;

class book
{
private:
    int page;
    float price;
    char name[30];

public:
    void setPage(int p)
    {
        page = p;
    }
    void setPrice(int pr)
    {
        price = pr;
    }
    void setName(char *n)
    {
        strcpy(name, n);
    }
    void display()
    {
        cout << "The page is : " << page << endl;
        cout << "The price is : " << price << endl;
        cout << "The name is : " << name << endl;
    }
};

int main(int argc, char const *argv[])
{
    book B1, B2;
    cout << "------------------- Book Data 01 -------------------" << endl;
    B1.setPage(100);
    B1.setPrice(250.50);
    B1.setName("C");
    B1.display();
    cout << "------------------- Book Data 02 -------------------" << endl;
    B1.setPage(200);
    B1.setPrice(350.50);
    B1.setName("C++");
    B1.display();

    return 0;
}