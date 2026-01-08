#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Integer;
    float Decimal;
    char Character;

    cout << "Enter the Integer Number here: ";
    cin >> Integer;
    cout << "Enter the Decimal Number here: ";
    cin >> Decimal;
    cout << "Enter the Character here: ";
    cin >> Character;

    
    cout << left << setw(15) << "Number"
         << setw(20) << "Decimal Number"
         << setw(10) << "Character" << endl;

    cout << setfill('-') << setw(45) << "" << endl;
    cout << setfill(' '); 

    
    cout << left << setw(15) << Integer
         << setw(20) << fixed << setprecision(2) << Decimal
         << setw(10) << Character << endl;

    return 0;
}