/*
8.Write a program that takes the user's full name and age as input and displays a 
greeting with the name and the number of days they have lived.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string Name;
    int age;
    int year;
    int days = 0;

    cout << "Enter your full name: ";
    getline(cin, Name); 

    cout << "Enter your age in years: ";
    cin >> age;

    cout << "Enter the year you were born: ";
    cin >> year;

    for (int i = 0; i < age; i++) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            days += 366;  
        } else {
            days += 365;
        }
        year++;
    }

    cout << "Hello " << Name << "!" << endl;
    cout << "You have lived approximately " << days << " days." << endl;

    return 0;
}