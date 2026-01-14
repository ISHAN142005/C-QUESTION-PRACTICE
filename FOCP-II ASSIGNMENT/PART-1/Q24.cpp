/*
24.Write a program to calculate the factorial of a number using a do-while loop.
*/

#include <iostream>
using namespace std;
int main()
{

    int number;
    int i = 1;
    unsigned long long factorial = 1;
    cout << "Enter the number here:";
    cin >> number;
    cout << "The entered number is :" << number << endl;

    if (number == 0)
    {
        cout << "The factorial of the number is:1" << endl;
    }
    else
    {
        do
        {
            factorial = factorial * i;
            i++;
        } while (i <= number);
        cout << "The factorial of the number is: " << factorial << endl;
    }

    return 0;
}