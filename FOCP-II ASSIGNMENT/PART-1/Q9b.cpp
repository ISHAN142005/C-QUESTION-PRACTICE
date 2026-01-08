#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 5; 
    int integers[SIZE];
    float decimals[SIZE];
    char characters[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter Integer for row " << i+1 << ": ";
        cin >> integers[i];
        cout << "Enter Decimal for row " << i+1 << ": ";
        cin >> decimals[i];
        cout << "Enter Character for row " << i+1 << ": ";
        cin >> characters[i];
        cout << endl;
    }

    // Header
    cout << left << setw(15) << "Number"
         << setw(20) << "Decimal Number"
         << setw(10) << "Character" << endl;

    cout << setfill('-') << setw(45) << "" << endl;
    cout << setfill(' '); // reset fill

    // Output loop
    for (int i = 0; i < SIZE; i++) {
        cout << left << setw(15) << integers[i]
             << setw(20) << fixed << setprecision(2) << decimals[i]
             << setw(10) << characters[i] << endl;
    }

    return 0;
}