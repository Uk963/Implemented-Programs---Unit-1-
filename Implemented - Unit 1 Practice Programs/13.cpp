#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int quantity;

    void get()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Quantity: " << quantity << endl;
    }

    void issue()
    {
        if(quantity > 0)
        {
            cout << "Book is available. Issuing book..." << endl;
            quantity--;
        }
        else
        {
            cout << "Book is not available." << endl;
        }
    }
};

int main()
{
    Book b;
    b.get();
    b.display();

    char choice;
    cout << "Do you want to issue the book? (y/n): ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y')
    {
        b.issue();
        cout << "Updated Quantity: " << b.quantity << endl;
    }

    return 0;
}
