#include<iostream>
using namespace std;
int main()
{	//to get the dimension of square to be printed
int n;
	cout<<"Please input the dimension of rhombus to be printed"<<endl;
	cin>> n;
	for(int i=0;i<n;i++){
		// to print n-(i+1) spaces
		for(int j=0;j<n-(i+1);j++){
			cout<<" ";} 
			// to print n stars
			for(int k=0;k<n;k++){
				cout<<"*";}
				
	// to end the line
		cout<<endl;}
	return 0;
}
