#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y;
	while(cin>>a>>b>>x>>y)
	{
		if(x>a||y>b)
		{
			cout<<"0 0"<<endl;
		}
		else
		{
			int n=a/x,m=b/y;
			if(n*y<b)
			{
				cout<<n*x<<" "<<n*y<<endl;
			}
			else if(m*x<a)
			{
				cout<<m*x<<" "<<m*y<<endl;
			}
			else
			{
				cout<<a<<" "<<b<<endl;
			}
		}
	}
 return 0 ;
}

