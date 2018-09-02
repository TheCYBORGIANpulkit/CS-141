#include<iostream>
using namespace std;

int main()
{
int a,b,c;	// to ask the user for input and get two integers as output.
	cout<< "Please enter any three positive integers. We'll compare them. " <<endl;
	cin>> a;
	cin>> b;
	cin>> c;
	
	if(a>b && a>c) //to compare them and execute the first case
	{
	cout<< "Your first input i.e. "<< a << " is the greatest."<< endl;
	}
	else if(b>a && b>c)
	{
	cout<< "Your second input i.e. "<< b << "  was greater than the other two."<< endl;
	}
	if(c>a && c>b) 
	{
	cout<< "Your third input i.e. "<< c << " was greater than the other two."<<endl;
	}
	return 0;
}

