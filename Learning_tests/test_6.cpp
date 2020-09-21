#include<iostream>
using namespace std;
int main()
{
	cout<<"   *   "<<endl;
	cout<<"*******"<<endl;
	cout<<" ***** "<<endl;
	cout<<"*******"<<endl;
	cout<<"   *   "<<endl;
	
	for(int i=0 ; i<3 ; i++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;
	for(int i=0 ; i<2*3+1 ; i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<" ";
	for(int i=0 ; i<2*3-1 ; i++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(int i=0 ; i<2*3+1 ; i++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(int i=0 ; i<3 ; i++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;


 return 0 ;
 
}



