// returning object from function

#include <iostream>
using namespace std;

class Distance
{
private:
    int km, hr;

public:
    Distance() : km(0), hr(0){};
    ~Distance(){};

    void get()
    {
        cout << "Enter the value of km : ";
        cin >> km;
        cout << "Enter the value of hr : ";
        cin >> hr;
    }

    Distance totalDistance(Distance pas)
    {
        Distance t;
        t.km = km + pas.km;
        t.hr = hr + pas.hr;
        return t;
    }

    void show()
    {
        cout << "The total distance is " << km << endl;
        cout << "The total time is " << hr << endl;
    }
};

int main(int argc, char const *argv[])
{
    Distance yD, mD, tD;
    cout << "==========Your Distance==========" << endl;
    yD.get();
    cout << "==========My Distance==========" << endl;
    mD.get();
    cout << "==========Total Distance==========" << endl;
    tD = yD.totalDistance(mD);
    tD.show();

    return 0;
}
