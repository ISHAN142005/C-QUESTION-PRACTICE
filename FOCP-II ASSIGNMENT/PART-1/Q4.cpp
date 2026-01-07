/*
4.Take two floating-point numbers as input 
and display their division result with two decimal places.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float a,b;
cout<<"Enter the first number :";
cin>>a;
cout<<"Enter the second number :";
cin>>b;
cout<<"The quotient of both the numbers is:"<<fixed<<setprecision(2)<<a/b<<endl;


    return 0;
}