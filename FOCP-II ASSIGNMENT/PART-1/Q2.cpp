/*
2.Write a program to take two integers as input and display their sum
*/
#include <iostream>
using namespace std;

int sum(int a, int b);
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    cout << "The sum of both numbers is :" << sum(a, b) << endl;
    return 0;
}