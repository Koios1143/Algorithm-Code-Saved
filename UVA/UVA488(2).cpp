#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		
		int f,a;
		cin>>f>>a;
		int m=a;
		for(int m=0 ; m<a ; m++)
		{
			cout<<"\n";
			for(int i=1 ; i<=f ; i++)
			{
				for(int j=0 ; j<i ; j++)
				{
					cout<<i;
				}
				cout<<"\n";
			}
			for(int i=f-1 ; i>0 ; i--)
			{
				for(int j=0 ; j<i ; j++)
				{
					cout<<i;
				}
				cout<<"\n";
			}
			if(m+1!=a)
			{
				cout<<"\n";
			}
		}
		if(n)
		{
			cout<<"\n";
		}
	}


 return 0 ;
}

