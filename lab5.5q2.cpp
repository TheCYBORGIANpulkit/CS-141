#include<iostream>
using namespace std;
int main()
{
int n;	//to get the height of triangle to be printed as input
	cout<<"Please input the no. of height of the triangle to be printed"<<endl;
	cin>> n;
	int i=0; //for n columns do the following
		for( i=0;i<=n;i++)
		{	//print i-1 stars
			for(int j=0;j<i;j++)
			{	cout<<"*";
			//then end the line
			}	cout<<endl;	
		}		
	return 0;
}
