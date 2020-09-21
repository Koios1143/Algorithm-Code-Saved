#include<iostream>
using namespace std;
int main()
{
	char a='O' , b='X' , c='#';
	char n1,n2,n3,n4,n5,n6,n7,n8,n9;
	cin>>n1>>n2>>n3;

	cin>>n4>>n5>>n6;

	cin>>n7>>n8>>n9;
	if( ( (n1==a) && (n2==a) && (n3==a) ) || ( (n1==a) && (n5==a) && (n9==a) ) || ((n1==a) && (n4==a) && (n7==a) ) )
	{
		cout<<"A wins!"<<endl;
	 } 
	 else if( ( (n1==b) && (n2==b) && (n3==b) ) || ( (n1==b) && (n5==b) && (n9==b) ) || ((n1==b) && (n4==b) && (n7==b) ) )
	 {
	 	cout<<"B wins!"<<endl;
	 }
	 else if( (n1==c)|| (n2==c) || (n3==c) || (n4==c) || (n5==c) || (n6==c) || (n7==c) || (n8==c) || (n9==c) )
	 {
	 	cout<<"Playing"<<endl;
	 }
	 else
	 {
	 	cout<<"Draw"<<endl;
	 }

 return 0 ;
 
}



