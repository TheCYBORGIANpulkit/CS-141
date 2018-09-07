#include<iostream>
using namespace std;
int main()
{	// to get the length and breadth of the rectangle as input
	int a,b;
		cout<<"Please input the rows and columns of the square to be printed"<<endl;
		cin>> a>> b;	
	int i=0;	//to print the stars in a column
	for( i=0;i<b;i++)
	{		//to print the stars in a row for every column 
			for(int j=0;j<a;j++)
			{	cout<<"*";
			} //to end the line
				cout<<endl;
		
	}
	return 0;
}
