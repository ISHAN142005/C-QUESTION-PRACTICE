#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> n;

    // Store original number for final output if needed
    int temp = n; 

    while (n > 0) {
        // Check if the last bit is 1
        if ((n & 1) == 1) {
            count++;
        }
        
        // Shift bits to the right by 1 position
        n = n >> 1;
    }

    cout << "Number of 1 bits in " << temp << " is: " << count << endl;

    return 0;
}
