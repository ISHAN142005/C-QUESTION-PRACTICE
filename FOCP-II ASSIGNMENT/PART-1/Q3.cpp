/*
3.Ask the user to input two numbers and a mathematical operator (+, -, *, /) and
display the result of the operation.
 Eg 3 4 * output 12 (Hfloat: use switch case)
*/
#include <iostream>
#include<cmath>
using namespace std;
float sum(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

float sum(float a, float b)
{
    float sum = a + b;
    return sum;
}
float subtract(float a, float b)
{
    float minus = a - b;
    return minus;
}
float multiply(float a, float b)
{
    float product = a * b;
    return product;
}
float divide(float a, float b)
{
    if(b==0){
        cout<<"Division with 0 not possible!";
        return 0;
    }
    float divide = a / b;
    return divide;
}

int main()
{
    float a, b;
    int n;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;

    cout << "Select the operator-" << endl
         << "ADDITION(1)" << endl
         << "SUBTRACTION(2)" << endl
         << "MULTIPLY(3)" << endl
         << "DIVIDE(4)"
         << endl;
    cout << "Enter selected operation:";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "The sum of both the number is:" << sum(a, b);
        break;
    case 2:
        cout << "The difference of both the number is:" << abs(subtract(a, b));//here i used abs function to get positive value only
        break;
    case 3:
        cout << "The product of both the number is:" << multiply(a, b);
        break;
    case 4:
        cout << "The quotient of both the number is:" << divide(a, b);
        break;
    default:
        cout << "Invalid Selection!";
    }
    return 0;
}
