// calling header file in other file
#include <iostream>
#include "p10-header.h"

using namespace std;

int main(int argc, char const *argv[])
{

    test T;
    T.setValue(20);
    cout << "The value of n is : " << T.getValue() << endl;
    return 0;
}