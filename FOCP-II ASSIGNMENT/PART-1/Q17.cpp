#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long dividend, divisor;
    long long quotient = 0;
    long long remainder = 0;
    int sign = 1;

    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }

    if (dividend < 0) {
        sign = -sign;
        dividend = -dividend;
    }
    if (divisor < 0) {
        sign = -sign;
        divisor = -divisor;
    }

    long long tempDividend = dividend;
    while (tempDividend >= divisor) {
        tempDividend -= divisor;
        quotient++;
    }
    remainder = tempDividend;

    if (sign == -1) {
        cout << "-";
    }
    
    cout << "Integer result: " << quotient << endl;
    cout << "Floating-point result: " << quotient << ".";

    for (int i = 0; i < 6; i++) {
        remainder *= 10;
        int decimalCount = 0;
        
        while (remainder >= divisor) {
            remainder -= divisor;
            decimalCount++;
        }
        cout << decimalCount;
    }
    
    cout << endl;

    return 0;
}
