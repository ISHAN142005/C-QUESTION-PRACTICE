#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int shifts;
    int bits = sizeof(int) * 8; 

    cout << "Enter an integer: ";
    cin >> n;
    cout << "Enter the number of bits to shift: ";
    cin >> shifts;

    shifts = shifts % bits;

    unsigned int leftRotated = (n << shifts) | (n >> (bits - shifts));
    unsigned int rightRotated = (n >> shifts) | (n << (bits - shifts));

    cout << "Original value: " << n << endl;
    cout << "After circular left shift: " << leftRotated << endl;
    cout << "After circular right shift: " << rightRotated << endl;

    return 0;
}
