#include<iostream>		// to write the library code
using namespace std;

int main(){

		cout <<" What is your name?" << endl;	// to print question asking user's name
		string variable;
		getline(cin, variable);		// to get string input of more han one word
		

float C;					// to declare temperature variable

		cout<< " Hello " << variable <<" ,Please input temperature in celsius." << endl;
		cin>> C;			// to get temperature input.
		
float F=9*C/5 + 32;
		cout<<" Your temperature in farhenheit scale  is "<< F << endl;
		cout<< endl;
                				// to print the final results to the user.
		cout<< "Thanks for getting your values converted" << endl;
}
