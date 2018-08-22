#include<iostream> 
				// to write the library
#include<cstring>		// to write the library for including string

using namespace std;
int main(){

		cout <<" What is your name?" << endl;
		string variable;
		getline(cin, variable);		// to get string input of more han one word
		
		cout<< "Hello " << variable <<" ,We are here to calculate the area of a triangle with a 		given base and height."<< endl;
		
int b,h;					// to declare the input variables

		cout<<" Please input the height and base of your triangle."<< endl;
		cin>> b;
		cin>> h;			// to get the inputs as base and heights

float A=0.5*b*h;					// to declare the operator variable

		cout<<" The area of your triangle is "<< A <<endl;
		cout<< endl;			// to print the final results to the user.

						// to print the thanking statement
		cout<< "Thanks for getting the area of triangle.";
}
