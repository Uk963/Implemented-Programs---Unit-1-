#include <iostream>
using namespace std;

class Year
{
public:
    int y;

    void get()
    {
        cout << "Enter a year: ";
        cin >> y;
    }

    void check()
    {
        if(y % 400 == 0)
            cout << "Leap Year";
        else if(y % 100 == 0)
            cout << "Not a Leap Year";
        else if(y % 4 == 0)
            cout << "Leap Year";
        else
            cout << "Not a Leap Year";
    }
};

int main()
{
    Year y1;
    y1.get();
    y1.check();

    return 0;
}
