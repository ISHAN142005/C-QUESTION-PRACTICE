#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b, result;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice)
        {
        case 1:
            result = a + b;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = a - b;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = a * b;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (b != 0)
            {
                result = a / b;
                cout << "Result: " << result << endl;
            }
            else
            {
                cout << "Division by zero not allowed." << endl;
            }
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}