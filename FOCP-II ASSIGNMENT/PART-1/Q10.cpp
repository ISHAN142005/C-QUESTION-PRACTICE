/*
10.Develop a program that takes two integers as input and determines
 if the first is a multiple of the second using relational and logical operators.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter the  first number:";
    cin >> n1;
    cout << "Enter the  second number:";
    cin >> n2;

    if (n1 % n2 == 0 && n2!=0)
    {
        cout << "The first number is a multiple of second one!" << endl;
    }
    else
    {
        cout << "The first number is not a multiple of second one!" << endl;
    }

    return 0;
}