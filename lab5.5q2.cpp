#include<iostream>
using namespace std;
int main()
{
int n;
	cout<<"Please input the no. of height of the triangle to be printed"<<endl;
	cin>> n;
	int i=0;
		for( i=0;i<=n;i++)
		{	
			for(int j=0;j<i;j++)
			{	cout<<"*";
			
			}	cout<<endl;	
		}		
	return 0;
}
