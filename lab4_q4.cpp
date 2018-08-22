#include<iostream> 
				// to write the library
#include<cstring>		// to write the library for including string

using namespace std;
int main(){

		cout <<" What is your name?" << endl;
		string variable;
		getline(cin, variable);		// to get string input of more han one word

int d;						// to declare the variable 
		cout<< "Hello " << variable <<" ,Please input number of days you want to convert. "<< endl;
		cin>> d;			// to print question and then get input

int Y=d/365, Z=d%365, W=d/7, D=d%7;
						// to print the results with finishing statements
		cout<< "No. of years in your input is "<< Y << endl;
		cout<< "NO. of remaining days remaining after integral no. of years in your input is "<< Z<< endl;
		cout<< "No. of weeks in your input is "<< W <<endl;
		cout<< "No. of remaining days remaining after integral no. of weeks in your input is "<< D<< endl;
		cout<< endl;
						// to print the thanking statement
		cout<< "Thanks for getting your values converted" << endl;
}

		
