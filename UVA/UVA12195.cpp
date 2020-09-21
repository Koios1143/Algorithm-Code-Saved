#include<iostream>
using namespace std;
int main()
{
	string s;
	int tot=0;
	while(cin>>s)
	{
		if(s=="*")
		{
			break;
		}
		
		tot=0;
		int size=s.size();
		double ans=0; 
		for(int i=1 ; i<size ; i++)
		{
			if(s[i]=='/')
			{
				if(ans==1.0)
				{
					tot++;
				}
				ans=0;
				continue;
			}
			
			if(s[i]=='W')
			{
				ans+=1;
			}
			else if(s[i]=='H')
			{
				ans+=0.5;
			}
			else if(s[i]=='Q')
			{
				ans+=0.25;
			}
			else if(s[i]=='E')
			{
				ans+=0.125;
			}
			else if(s[i]=='S')
			{
				ans+=0.0625;
			}
			else if(s[i]=='T')
			{
				ans+=0.03125;
			}
			else if(s[i]=='X')
			{
				ans+=0.015625;
			}
		}
		cout<<tot<<"\n";
	}

 return 0 ;
}

