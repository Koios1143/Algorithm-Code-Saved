#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int flaga=0,flagb=0;
	for(int i=0 ; i<a.size() ; i++)
	{
		if(a[i]=='.')
		{
			flaga=i;
		}
		if(b[i]=='.')
		{
			flagb=i;
		}
	}
	if(flaga>flagb&&flaga!=0&&flagb!=0)
	{
		cout<<a<<endl;
	}
	else if(flagb>flaga&&flaga!=0&&flagb!=0)
	{
		cout<<b<<endl;
	}
	else
	{
		if(a>b&&b==0)
		{
			if(b.size()>a)
			{
				cout<<b<<endl;
			}
			else if(b.size()<a)
			{
				cout<<a<<endl;
			}
		}
	}


 return 0 ;
}

