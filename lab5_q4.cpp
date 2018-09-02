#include<iostream>
using namespace std;

int main()
{
int a,b;	// to ask the user for input and get two integers as output.
	cout<< "Please enter any two positive integers. We'll check whether they are odd or even. " <<endl;
	cin>> a;
	cin>> b;// to gather the inputs
	
	if(a%2==0 && b%2==0)// to check and print the result in the case both numbers are even
	{
	cout<< "Both the inputs are even."<< endl;
	}
	else if(a%2==0 && b%2==1)//check and print the result if one of them is odd and other is even
	{
	cout<< "The first input is even and the second one is odd."<< endl;
	}
	else if(a%2==1 && b%2==0)
	{
	cout<< "The first input is odd and the second one is even."<<endl;
	}	
	else (a%2==1 && b%2==1);//check and print the result when both inputs are even
	{
	cout<< "Both the inputs are odd."<< endl;
	}
	return 0;
}
