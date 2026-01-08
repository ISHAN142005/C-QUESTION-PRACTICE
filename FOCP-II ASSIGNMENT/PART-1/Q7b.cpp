/*
7.Write a program to swap two numbers using a
temporary variable and then without using a temporary variable.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter the first number:";
    cin >> n1;
    cout << "Enter the second number:";
    cin >> n2;

    cout << "--------BEFORE SWAP--------" << endl;
    cout << "The first number is:" << n1 << endl;
    cout << "The second number is:" << n2 << endl;

    swap(n1, n2);

    cout << "--------AFTER SWAP--------" << endl;
    cout << "The first number is:" << n1 << endl;
    cout << "The second number is:" << n2 << endl;

    return 0;
}