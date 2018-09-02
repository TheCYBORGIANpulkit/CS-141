#include<iostream>
using namespace std;

int main()	// defining the min funct.
{
char X;		//declaring the input variable	
	cout<< "Please input any alphabet. Computer would tell you whether it's a vowel or a consonant." <<endl;
	cin>> X;	//to print the intro statement and get input
			
			//to check the input character and print the result
	if(X=='e' || X=='a' || X=='i' || X=='o' || X=='u')
	{cout<< "You have entered a vowel."<<endl;}
	else		//to print the other result statement
	{
	cout<< "You have entered a consonant."<<endl;
	}
	return 0;
}
