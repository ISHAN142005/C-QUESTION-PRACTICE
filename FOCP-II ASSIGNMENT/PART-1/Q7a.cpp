/*
7.Write a program to swap two numbers using a
temporary variable and then without using a temporary variable.
*/
#include <iostream>
using namespace std;
void swap(int *a, int *b);
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

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