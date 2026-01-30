#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    int marks;
};

int main()
{
    Student s[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        cout << "Enter roll number: ";
        cin >> s[i].roll;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    cout << endl << "Student Records" << endl;

    for(i = 0; i < 10; i++)
    {
        cout << s[i].roll << " ";
        cout << s[i].name << " ";
        cout << s[i].marks << endl;
    }

    return 0;
}
