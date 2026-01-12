#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Coefficient 'a' cannot be 0 for a quadratic equation." << endl;
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);

        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);

        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
