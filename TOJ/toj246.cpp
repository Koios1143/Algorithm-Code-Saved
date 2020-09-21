#include<iostream>
using namespace std;
int main()
{
	long long a,m,b;
	cin>>a>>m>>b;
	for(long long i=0 ; i<m ; i++)
	{
		long long n;
		char ch;
		cin>>n>>ch;
		if(ch=='*')
		{
			a=a*n;
		}	
		else if(ch=='/')
		{
			a/=n;
		}
		else if(ch=='+')
		{
			a+=n;
		}
		else if(ch=='-')
		{
			a-=n;
		}
		else if(ch=='%')
		{
			a%=n;
		}
		
	}
	if(b==0)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<a%b<<endl;
	}
	


 return 0 ;
 
}



