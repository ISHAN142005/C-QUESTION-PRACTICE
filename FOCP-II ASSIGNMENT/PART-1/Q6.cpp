/*
6.
Write a program that calculates the area and perimeter of a rectangle
using user-provided length and width. Use constants where necessary.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float perimeter(float c, float d);
float area(float a, float b);

float perimeter(float c, float d)
{
    return 2 * (c + d);
}

float area(float a, float b)
{
    return a * b;
}

int main()
{
    float Length, Breadth;

    cout << "Enter the length of the rectangle:";
    cin >> Length;
    cout << "Enter the breadth of the rectangle:";
    cin >> Breadth;

    cout << fixed << setprecision(2) << endl;

    cout << "The perimeter of the rectangle is:" << perimeter(Length, Breadth) << endl;
    cout << "The area of the rectangle is:" << area(Length, Breadth) << endl;

    return 0;
}