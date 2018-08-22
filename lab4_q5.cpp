#include<iostream> 
				// to write the library
#include<cstring>		// to write the library for including string

using namespace std;
int main(){

		cout <<" What is your name?" << endl;
		string variable;
		getline(cin, variable);		// to get string input of more than one word

int a,b;					// to declare the input variables

		cout<< "Hello " << variable <<" ,We are here to calculate the third angle of a triangle with two knnown 		angles."<< endl;

		cout<<" Please input two angles of a triangle."<< endl;
		cin>> a;
		cin>> b;			// to get the inputs as angles

float A=180-(a+b);					// to declare the operator variable

		cout<<" The measure of the third angle of the triangle is "<<A <<endl;
		cout<< endl;			// to print the final results to the user.

						// to print the thanking statement
		cout<< "Thanks for getting your the third angle of your triangle" << endl;
}
		
