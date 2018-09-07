#include<iostream>
using namespace std;
int main()
{	//to get the dimension of square as input
	int n;
	cout<<"Please input the height of the right triangle to be printed"<<endl;
	cin>> n;
	//for the different rows do the following
	for(int i=1;i<=n;i++){
		//print i no. of stars
		for(int j=0;j<i;j++){
		cout<<"*";
		}
		//end the line
		cout<<endl;
	}
	return 0;
}
	

