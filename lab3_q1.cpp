# include<iostream>
using namespace std;
int main () 
{
  int a=2;
float P=3.14;
double G=3.145962;
char q='b';
bool statement= (2==3);
cout << "the value of integer data type is " << a <<endl;
cout << "the value of float data type is " << P <<endl;
cout << "the value of double data type is " << G <<endl;
cout << "the value of char data type is " << q <<endl;
cout << "the size of integer is " << sizeof(a)<< "bits " << "the value of integer is "<< a <<endl;
cout << "the size of float is " << sizeof(P)<< "bits " << "the value of float is "<< P  <<endl;
cout << "the size of double is " << sizeof(G)<< "bits " << "the value of double is "<<G <<endl; 
cout << "the size of char is " << sizeof(q)<< "bits " << "the value of char is "<< q <<endl;
cout << "the value of my statement in bool is " << statement << endl; 
}
