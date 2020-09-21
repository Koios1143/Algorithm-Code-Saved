#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	char a='*';
	char b='-';
	
	if(n==0)
	{
		cout<<"Nothing"<<endl;
	}
	else if(n%2==0)
	{
		for(int i=1 ; i<=n ; i++)
		{
			for(int j=1 ; j<=(n/2) ; j++)
			{
				cout<<a;
				cout<<b;
			}
			swap(a,b);
			cout<<endl;
		}
	}
	else
	{
		for(int k=1 ; k<=n ; k++)
		{
			for(int l =1 ; l<=n ; l++)
			{
				cout<<a;
				swap(a,b);
			}
			cout<<endl;
		}
	}
	
	

 return 0 ;
 
}



