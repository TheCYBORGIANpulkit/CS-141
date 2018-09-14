#include<iostream>
using namespace std;

//defining the sum
void funcR(int a, int b, int &t){
	t=a+b;
}

//defining the main function
int main(){
	int a,b, sum;
	cout<< "please input two numbers. We'll input them."<<endl;
		cin>>a>>b;
	//declaring the variable
	
	//call the function
	funcR(a,b,sum);
		//ask the user for input and gather it;
		
		cout<<"The sum of your numbers is "<< sum<<endl;
		return 0;
}
