#include<iostream>
using namespace std;

int main()
{		//to declare the main variable
	int n;
	cout<< "hello, we are here to print natural numbers from the number you enter till 1 in reverse order. Enter any natural number:" << endl;
	cin>> n;	//to ask the user for input and garb it
			
			//to loop the variabnle while increasing it by one
	int i=n;
	cout<< "Here are all the natural no. from "<< n <<" to 1."<<endl;
	while(i>=1){
		cout<< i <<endl;
		i--;}
	return 0;
} 
