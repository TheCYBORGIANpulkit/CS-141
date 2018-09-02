#include<iostream>
using namespace std;

int main()
{ 			// to declare the main function

int n;
	cout<< "Hello, We are here to calculate the sum of all natural no. from 1 to n. PLease enter any natural number. "<<endl;
	cin>> n;	// to ask the user for input and get it.

	//to declare the variable for looping
int a, s=2, i=2;
	//to sum all the from 1 to n using loop
	while (i < n)
	{i=i+2,s=s+i;} 
	cout<< "sum of even numbers from 2 to "<< n <<" is "<< s <<endl;
	return 0; // to print the statement result
}
