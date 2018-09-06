#include<iostream>
using namespace std;
int main()
{
	int n;
		cout<<"Please input the rows and columns of the square to be printed"<<endl;
		cin>> n;
	//to print the star of rows	
	int i=0;
	for( i=0;i<=n;i++)
		// to print all the stars in the first or the last column
		{if(i==1 || i==n)
		{	for(int j=0; j<n; j++)
				{cout<<"*";}
		}
		//to print star and space and then star for next column onwards
		else{
			for(int j=0; j<n-2; j++)
			{	cout<<" ";}
			cout<<"*";}
				//endl;
					cout<<endl;}
		return 0;
}
				
