#include <iostream>
using namespace std;

class Numbers
{
public:
    int n;

    void get()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void print()
    {
        int i;
        for(i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    Numbers num;
    num.get();
    num.print();

    return 0;
}
