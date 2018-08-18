#include<iostream>
using namespace std;
int main(){
int a,b;

cout<<"Input two numbers:";
cin>> a;
cin>> b;

int addition=a+b, substraction=a-b, multiplication=a*b, division=a/b;

cout<< "The value of the sum is: "<< addition <<endl;
cout<< "The value of the difference is: "<< substraction <<endl;
cout<< "The value of the product is: "<< multiplication <<endl;
cout<< "The value of the quotient is: "<< division <<endl;
return 0;
}
