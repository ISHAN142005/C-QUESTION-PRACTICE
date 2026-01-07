/*
1.Create a program that reads a user's name and age, then
outputs: "Hello [name], you are [age] years old!"
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int age;

    cout << "Enter your name here:";
    cin >> name;
    cout << "Enter your age here:";
    cin >> age;

    cout << "Hello " << name << " ," << " you are " << age << " year old !" << endl;

    return 0;
}