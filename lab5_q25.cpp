#include<iostream>
#include<cstring>
using namespace std;	// to write the main library

int main()
{
	cout<< " What is your name?" << endl;	// to ask the user for name
	string variable;
	getline(cin, variable);			// to get string input of more than one word


		cout<< "Hello, " << variable <<" here is the list of all the even numbers from 1 to 100 "<<endl;
							// to print the statement before result
	int i=2;
	while(i<=100){
		cout<< i <<endl;
		i=i+2;}
	return 0;
}

