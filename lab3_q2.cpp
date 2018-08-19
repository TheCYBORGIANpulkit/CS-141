//write the library code;
#include<iostream>
// write the library code for stream
#include<string>
using namespace std;
int main(){
	
	string name;			// to print question to the user
	cout<< "What is your name?";
	cin>> name;			// to take input as user's name

	cout<< "HELLO " << name<<", We are here to perform some basic arithmetic operations."<< endl;

int a,b;				// to declare integer type variables

	cout<<"Input two numbers:";
	cin>> a;			// to take variable as inputs
	cin>> b;
					//definig operations with integer outputs

int addition=a+b, substraction=a-b, multiplication=a*b, division=a/b, remainder=a%b;

					// to print the operators with their results

	cout<< "The value of the sum is: "<< addition <<endl;
	cout<< "The value of the difference is: "<< substraction <<endl;
	cout<< "The value of the product is: "<< multiplication <<endl;
	cout<< "The value of the quotient is: "<< division <<endl;
	cout<< "The value of the remainder when b/a is "<<remainder <<endl;
	cout<< endl;
					// to print the line to extend the program
			
        cout<< "Thanks for taking part. Now we'll move to operate with decimals."<< endl;

float c,d;				// to declare decimals variables

	cout<< "Please input two decimals (with maximum seven decimal places):" <<endl;
	cin>> c;
	cin>> d;			// to take decimal inputs from the user

float sum=c+d, difference=c-d, product=c*d;
					// to define the operators in float variables

	cout<< "The value after addition is: "<<sum <<endl;
	cout<< "The value after substracting first from the second number is "<<difference <<endl;
	cout<< "The value of their product is: "<<product <<endl;
	cout<< endl;
					// to print the ending line of the program

	cout<< "Thanks for playing with numbers using our program."<< endl;
}

	 
