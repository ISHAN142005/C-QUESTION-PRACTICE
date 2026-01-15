/*
25.Create a program that continuously accepts user input of integers
until the user types “exit”. At the end, display:
•The sum of all entered numbers.
•The count of valid integers entered.
•The maximum and minimum numbers.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int sum = 0;
    int count = 0;
    int maxNum, minNum;
    bool firstNumber = true;

    cout << "Enter integers (type 'exit' to stop):" << endl;

    while (true)
    {
        cin >> input;
        if (input == "exit")
        {
            break;
        }
        int number = stoi(input);
        sum += number;
        count++;
        if (firstNumber)
        {
            maxNum = number;
            minNum = number;
            firstNumber = false;
        }
        else
        {
            if (number > maxNum)
                maxNum = number;
            if (number < minNum)
                minNum = number;
        }
    }

    cout << "Sum of numbers: " << sum << endl;
    cout << "Count of valid integers: " << count << endl;
    if (count > 0)
    {
        cout << "Maximum number: " << maxNum << endl;
        cout << "Minimum number: " << minNum << endl;
    }
    else
    {
        cout << "No valid integers were entered." << endl;
    }

    return 0;
}