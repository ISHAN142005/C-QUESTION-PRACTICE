#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    bool result = ((num1 ^ num2) < 0);

    cout << "Signs are opposite (1 for True, 0 for False): " << result << endl;

    return 0;
}
