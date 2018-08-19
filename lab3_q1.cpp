# include<iostream>			// to write the main liobrary code
using namespace std;

int main () {				// to declare the primary the function
  
int a=2;				// to declare the types of variables
float P=3.14;
double G=3.145962;
char q='b';
bool statement= (2==3);			
					// to print the line with the value of the declared 						variable

	cout << "the value of integer data type is " << a <<endl;
	cout << "the value of float data type is " << P <<endl;		
	cout << "the value of double data type is " << G <<endl;
	cout << "the value of char data type is " << q <<endl;
	cout << endl;
					// to print the line with the size and the value of 						the declared variable

cout << "the size of integer is " << sizeof(a)<< "bits " << "the value of the integer is "<< a <<endl;
cout << "the size of float is " << sizeof(P)<< "bits " << "the value of the float is"<< P  <<endl;
cout << "the size of double is " << sizeof(G)<< "bits " << "the value of the double is "<<G <<endl; 
cout << "the size of char is " << sizeof(q)<< "bits " << "the value of the char is "<<q <<endl;
					// to print the line containing the bool variable

	cout << "the value of my statement in bool is " << statement << endl; 
}

