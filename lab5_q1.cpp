#include<iostream>
using namespace std;

int main()
{
int a,b;	// to ask the user for input and get two integers as output.
	cout<< "Please enter any two positive integers. We'll compare them. " <<endl;
	cin>> a;
	cin>> b;
	
	      // to check which no. is greater
	if(a>b)
	{			//to print the statement of result in the first case
	cout<< "Your first input is greater than the second one."<< a <<" greater than "<< b << endl;
	}
	else if(a<b)    // to print the statement of result in the third case
	{cout<< "Your second input was greater than the second one. "<< b <<" greater than "<< a <<endl;
	}
	// to print the statement of result in the equality case
	if(a==b){cout<< "You entered the same number twice."<< a << "=" << b << endl;
	}			
	return 0;	
}
