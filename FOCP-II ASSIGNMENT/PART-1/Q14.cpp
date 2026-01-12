#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    cout << "Enter the lengths of the three sides: ";
    cin >> side1 >> side2 >> side3;

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }
    } 
    else {
        cout << "Error: These side lengths cannot form a valid triangle." << endl;
    }

    return 0;
}
