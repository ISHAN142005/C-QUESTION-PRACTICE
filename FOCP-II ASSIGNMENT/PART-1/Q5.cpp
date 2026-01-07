/*
Write a program that calculates the compound interest
for a given principal amount, rate of interest, and time period using constants
 and user input for variables
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// A=P.(1+(r/n))^n*t
// C.I=A-P

int main()
{
 
   float Principal, TotalAmount, Rate, Frequency, Duration, CompoundInterest;
    cout<<"----------WELCOME TO COUMPOUND INTREST CALCULATOR----------"<<endl;
    cout << "Enter the Principal Amount:";
    cin >> Principal;
    cout << "Enter the annual Interest rate:";
    cin >> Rate;
    cout << "Enter the duration in year:";
    cin >> Duration;
    cout << "Enter the number of times Interest is coumpounded per year:";
    cin >> Frequency;

    cout << fixed << setprecision(2) << endl;
    float w, x, y, z;
    x = ((Rate / 100) / Frequency);
    y = (x + 1);
    z = (Frequency * Duration);
    w = pow(y, z);
    TotalAmount = (w * Principal);
    CompoundInterest = TotalAmount - Principal;

    cout << "The total amount(Principal+Interest) is:" << TotalAmount << endl;
    cout << "The Compound Interest(Total Amount-Pricipal Amount) is:" << CompoundInterest << endl;

    return 0;
}