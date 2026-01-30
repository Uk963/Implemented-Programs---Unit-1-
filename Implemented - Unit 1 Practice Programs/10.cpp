#include <iostream>
using namespace std;

class Palindrome
{
public:
    int n, rev = 0, temp;

    void get() 
    {
        cout << "Enter a number: ";
        cin >> n;
        temp = n;
    }

    inline void check()
    {
        int r;
        rev = 0;
        while(temp != 0)
        {
            r = temp % 10;
            rev = rev * 10 + r;
            temp = temp / 10;
        }

        if(rev == n)
            cout << "Palindrome number";
        else
            cout << "Not a palindrome number";
    }
};

int main()
{
    Palindrome p;
    p.get();
    p.check();

    return 0;
}
