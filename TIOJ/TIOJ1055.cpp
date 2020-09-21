#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a<b)
	{
		while(a<=b)
		{
			for(int i=0 ; i<a ; i++)
			{
				cout<<"*";
			}
			cout<<endl;
			a++;
		}
	}
	else
	{
		while(a>=b)
		{
			for(int i=0 ; i<a ; i++)
			{
				cout<<"*";
			}
			cout<<endl;
			a--;
		}
	}

 return 0 ;
}

