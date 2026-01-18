/*
31.Develop a program to reverse the digits of a given number and
terminate early if the reverse number becomes a palindrome.
*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number here:";
    cin >> number;
    int reverse = 0, temp = number;
    while (temp > 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
        if (reverse == number)
        {
            break;
        }
    }
    cout<<"The reverse number is:";
    cout << reverse;
    return 0;
}
