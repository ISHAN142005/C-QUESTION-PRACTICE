#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter values for a, b, c, and d: ";
    cin >> a >> b >> c >> d;

    int result = a ^ b + c & d;

    cout << "The result of a^b + c&d is: " << result << endl;

    return 0;
}
