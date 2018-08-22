#include<iostream> 
				// to write the library
#include<cstring>		// to write the library for including string

using namespace std;
int main(){

		cout <<" What is your name?" << endl;
		string variable;
		getline(cin, variable);		// to get string input of more han one word
		

double l;					// to declare our input variable
		
		cout<< "Hello " << variable << ", Input length in centimeter "<< endl;  // to print question for the user
		cin>> l;			// to get input for further calculation


float m=l/100, Km=l/100000;			// to convert input in kilometers
		
		cout<< "Your length in meters is "<< m <<"."<< endl;
		cout<< "Your length in kilometers is "<< Km <<"." << endl;
		cout<< endl;
		 				// to print the final results to the user.
		cout<< "Thanks for getting your values converted" << endl;
}
