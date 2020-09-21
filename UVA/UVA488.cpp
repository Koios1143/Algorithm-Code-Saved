#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,f;
	for(int t=0 ; t<n ; t++)
	{
		cin>>a>>f;
		for(int m=0 ; m<f ; m++)
		{
			for(int i=1 ; i<=a ; i++)
			{
				for(int j=0 ; j<i ; j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
			for(int i=a-1 ; i>0 ; i--)
			{
				for(int j=0 ; j<i ; j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
			if(t+1!=n)
			{
				cout<<endl;	
			}
		}
	}
 return 0 ;
}

