#include<iostream>
using namespace std;
int main ()
{
	int a ;
	a=9.6;
	cout <<a<<endl;//OUTPUT 9
	
	double b;
	b=9.6;
	cout <<b<<endl ;//OUTPUT 9.6
	
	bool c;
	c=9.6;
	cout<<c<<endl;//OUTPUT 1
	
	bool test ;
	test = (a>b)||(a>c);
	cout<<test<<endl;//OUTPUT 1
	
	bool test2;
	test = 2>1 ;
	cout <<"test2"<<"="<<test<<endl;//OUTPUT 1
	
	bool test3;
	test3=true;
	cout<<test3<<endl;//OUTPUT 1
	
	bool test4;
	test4=false;
	cout<<test4<<endl;//OUTPUT 0
	
	char d ;
	d = 9.6 ;
	cout<<d<<endl;//OUTPUT " "
	
	
	
	system ("pause");
 } 
