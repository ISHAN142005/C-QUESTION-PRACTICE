/*
23.Create a program that determines
whether a given number is prime using a while loop.
*/
#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "Enter the number here:";
    cin >> number;
    cout << "The entered number is :" << number << endl;

    if (number <= 1)
    {
        cout << "Enter number is not a Prime Number!" << endl;
        return 0;
    }

    int i = 2;
    bool Prime = true;
    while (i < number)
    {
        if (number % i == 0)
        {
            Prime = false;
            break;
        }
        i++;
    }

    if (Prime)
    {
        cout << "Entered number is a prime number!" << endl;
    }
    else
    {
        cout << "Entered number is not a prime number!" << endl;
    }

    return 0;
}