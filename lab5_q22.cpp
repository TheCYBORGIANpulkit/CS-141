#include<iostream>
using namespace std;

int main()
{		//to declare the main variable
	int n;
	cout<< "hello, we are here to print natural numbers till the number you enter. Enter any natural number:" << endl;
	cin>> n;	//to ask the user for input and garb it
			
			//to loop the variabnle while increasing it by one
	int i=1;
	cout<< "Here are all the natural no. from 1 to" << n <<endl;
	while(i<=n){ 
		cout<< i <<endl;
		i++;
		}
	return 0;
}
	
	
