#include <iostream>
using namespace std;

float triangleArea(float b, float h)
{
    return 0.5 * b * h;
}

float circleArea(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float base, height, radius;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "Area of triangle = " << triangleArea(base, height) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area of circle = " << circleArea(radius) << endl;

    return 0;
}

