#include <iostream>
using namespace std;

class MedicalBill
{
public:
    float consultation, medicine, tests, total;

    MedicalBill(float c, float m, float t)
    {
        consultation = c;
        medicine = m;
        tests = t;
        total = consultation + medicine + tests;
    }

    void display()
    {
        cout << "Consultation Charges: " << consultation << endl;
        cout << "Medicine Charges: " << medicine << endl;
        cout << "Tests Charges: " << tests << endl;
        cout << "Total Bill: " << total << endl;
    }
};

int main()
{
    float c, m, t;

    cout << "Enter consultation charges: ";
    cin >> c;

    cout << "Enter medicine charges: ";
    cin >> m;

    cout << "Enter tests charges: ";
    cin >> t;

    MedicalBill bill(c, m, t);
    bill.display();

    return 0;
}
