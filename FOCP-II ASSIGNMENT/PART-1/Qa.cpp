#include <iostream>
using namespace std;

class Employee {
    int id;
    static int count;

public:
    void setData() {
        cout << "Enter the Employee ID: ";
        cin >> id;
        count++;
    }

    void getData() {
        cout << "Employee ID " << id << " is employee number " << count << endl;
    }

    static void getCount() {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count = 1000;

int main() {
    Employee harry, rohan, lovish;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
