#include <iostream>
using namespace std;

int main()
{
int x;	//to declare the main variable
	cout<<"Every week has seven days. Here we will provide you the name of the weekday according it's number in the year."<<endl;
	cout<<"Please input any natural number less than 365 :";
	cin>> x;	// to print the intro the statement and gather the input

int r;			//to declare the output variable

	if(x%7==0)		//condition for sunday
	{cout<<"It's Sunday:the starting day of the week."<<endl;
	}			//to print the day as sunday
	
	else if(x%7==1)		//condition for monday	
	{cout<<"It's Monday:the second day of the week."<<endl;
	}			//to print the day as Monday

	else if(x%7==2)		//condition for tuesday
	{cout<<"It's Tuesday:the third day of the week."<<endl;
	}
	
	else if(x%7==3)		//condition for wednesday
	{cout<<"It's Wednesday:the fourth day of the week."<<endl;
	}
	
	else if(x%7==4)		//condition for thursday
	{cout<<"It's Thursday:the fifth day of the week."<<endl;
	}
	
	else if(x%7==5)		//condition for friday
	{cout<<"It's Friday:the sixth day of the week."<<endl;
	}
	
	else if(x%7==6)		//condition for sat
	{cout<<"It's Saturday:the Seventh day of the week."<<endl;
	}
	return 0;
}
