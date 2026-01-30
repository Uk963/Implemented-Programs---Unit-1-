#include <iostream>
using namespace std;

class Swap
{
public:
    int a, b, temp;

    void get()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swap()
    {
        temp = a;
        a = b;
        b = temp;
    }

    void display()
    {
        cout << "After swapping: " << a << " " << b;
    }
};

int main()
{
    Swap s;
    s.get();
    s.swap();
    s.display();

    return 0;
}
