/*
7.Write a program to swap two numbers using a
temporary variable and then without using a temporary variable.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter the first number:";
    cin >> n1; // 5
    cout << "Enter the second number:";
    cin >> n2; // 10

    cout << "--------BEFORE SWAP--------" << endl;
    cout << "The first number is:" << n1 << endl;
    cout << "The second number is:" << n2 << endl;

    n1 = n1 + n2; // 15
    n2 = n1 - n2; // 5
    n1 = n1 - n2; // 10

    cout << "--------AFTER SWAP--------" << endl;
    cout << "The first number is:" << n1 << endl;
    cout << "The second number is:" << n2 << endl;

    return 0;
}