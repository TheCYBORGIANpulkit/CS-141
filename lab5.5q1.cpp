#include<iostream>
using namespace std;
int main()
{
	int a,b;
		cout<<"Please input the rows and columns of the square to be printed"<<endl;
		cin>> a>> b;	
	int i=0;
	for( i=0;i<b;i++)
	{	cout<<"*";
			for(int j=0;j<a;j++)
			{	cout<<"*";
			}
				cout<<endl;
		
	}
	return 0;
}
