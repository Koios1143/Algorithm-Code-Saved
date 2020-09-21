#include<iostream>
using namespace std;
void normal_startree(int n)
{
	if(n==0)
	{
		cout<<endl;
	}
	else
	{
		for(int i=0 , m=1 ; i<n ; i++)
		{
		for(int j=0 ; j<n-i-1 ; j++ )
		{
			cout<<" ";
		}
		for(int k=0 ; k<m ; k++)
		{
			cout<<"*";
		}
		cout<<endl;
		m+=2;
		}
	}
	
}
void normal_startree2(int n , int o)
{
	if(n==0)
	{
		cout<<endl;
	}
	else
	{
		int p=o;
		for(int i=0 , m=1 ; i<n ; i++)
		{
			for(int j=p-1 ; j>0 ; j-- )
			{
				cout<<" ";
			}
			for(int k=0 ; k<m ; k++)
			{
				cout<<"*";
			}
			cout<<endl;
			m+=2;
			p--;
		}
	}
	
}
void double_startree(int n)
{
	for(int i=0 ; i<2 ; i++)
	{
		normal_startree(n);
	}
}
void chrismas_startree(int n)
{
	for(int I=1 ; I<=n ; I++)
	{
		
		normal_startree2(I,n);
	}
}
void giant_startree(int n)
{
	normal_startree(10*n);
}
void potted_startree(int n)
{
	for(int i=0 , m=1 ; i<n ; i++)
	{
		for(int j=n+1-i ; j>0 ; j-- )
		{
			cout<<" ";
		}
		for(int k=0 ; k<m ; k++)
		{
			cout<<"*";
		}
		cout<<endl;
		m+=2;
	}
	for(int i=0 ; i<2*(n+1)+1 ; i++)
	{
		cout<<"#";
	}
	cout<<endl;
}
void f(int n)
{
	normal_startree(2*n);
}
void g(int n)
{
	normal_startree(3*n);
}
void h(int n)
{
	normal_startree(7*n);
}
void I(int n)
{
	normal_startree(4*n-1);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		char c;
		int num;
		cin>>c;
		cin>>num;
		if(c=='A')
		{
			normal_startree(num);
		}
		else if(c=='B')
		{
			double_startree(num);
		}
		else if(c=='C')
		{
			chrismas_startree(num);
		}
		else if(c=='D')
		{
			giant_startree(num);
		}
		else if(c=='E')
		{
			potted_startree(num);
		}
		else if(c=='F')
		{
			f(num);
		}
		else if(c=='G')
		{
			g(num);
		}
		else if(c=='H')
		{
			h(num);
		}
		else if(c=='I')
		{
			I(num);
		}
	}
	cout<<endl;
 return 0 ;
 
}



