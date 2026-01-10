#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00; 
    int choice;
    double amount;

    do {
        cout << "\n--- ATM MACHINE ---" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount > balance) {
                    cout << "Error: Insufficient balance." << endl;
                } else if (amount <= 0) {
                    cout << "Error: Invalid withdrawal amount." << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid input. Please choose an option between 1 and 4." << endl;
        }

    } while (choice != 4);

    return 0;
}
