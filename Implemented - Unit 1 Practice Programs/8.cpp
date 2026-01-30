#include <iostream>
using namespace std;

class Electricity
{
public:
    int units;
    float bill, discount, finalBill;

    void get()
    {
        cout << "Enter units consumed: ";
        cin >> units;
    }

    void calculate()
    {
        if(units <= 100)
            bill = units * 1;
        else if(units <= 200)
            bill = 100 * 1 + (units - 100) * 2;
        else
            bill = 100 * 1 + 100 * 2 + (units - 200) * 3;
    }

    void display()
    {
        discount = bill * 0.02;
        finalBill = bill - discount;

        cout << "Bill Amount = " << bill << endl;
        cout << "Discount = " << discount << endl;
        cout << "Final Bill = " << finalBill << endl;
    }
};

int main()
{
    Electricity e;
    e.get();
    e.calculate();
    e.display();

    return 0;
}
