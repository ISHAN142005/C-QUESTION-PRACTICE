#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 90)
    {
        grade = 'A';
    }
    else if (marks >= 75)
    {
        grade = 'B';
    }
    else if (marks >= 60)
    {
        grade = 'C';
    }
    else if (marks >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "Grade (if-else): " << grade << endl;

    switch (marks / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    case 5:
        grade = 'D';
        break;
    case 4:
        grade = 'D';
        break;
    default:
        grade = 'F';
    }

    cout << "Grade (switch-case): " << grade << endl;

    return 0;
}