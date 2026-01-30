#include <iostream>
using namespace std;

class Prime
{
public:
    int n, i, count = 0;

    void get()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void check()
    {
        for(i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
            cout << "Prime number";
        else
            cout << "Not a prime number";
    }
};

int main()
{
    Prime p;
    p.get();
    p.check();

    return 0;
}
