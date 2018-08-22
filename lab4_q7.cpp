#include<iostream> 
				// to write the library
#include<cstring>		// to write the library for including string
#include<cmath>			// to write the library for including math operators
using namespace std;
int main(){
		cout<< " What is your name?" << endl;
		string variable;
		getline(cin, variable);		// to get string input of more han one word


		cout<< "Hello " << variable <<" ,We are here to calculate the area of an equilateral triangle with a given length of side."<< endl;
						// to print the starting statement to the user

int a;						// to declare the input variable

		cout<< "Please input the length of side of an equi. triangle ";
		cin>>a;				// to get the input 
		

double A=(sqrt(3)/4)*(a),power2;				//  to declare the operator variable
                
		cout<< "The area of your equi. triangle is "<<A << endl;
		cout<< endl;			// to print the final results to the user.

						// to print the thanking statement
		cout<< "Thanks for getting the area of triangle.";
}



