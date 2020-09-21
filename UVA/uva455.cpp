#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	bool first=true;
	while(t--)
	{
		if(first)
		{
			first=false;
		}
		else
		{
			puts("");
		}
		string s;
		cin>>s;
		int sz=s.size();
		for(int i=1 ; i<sz ; i++)
		{
			if(sz%i)
			{
				continue;
			}
			else
			{
				bool YN=true;
				for(int j=0 ; j<i ; j++)
				{
					for(int k=j+i ; k<sz ; k+=i)
					{
						if(s[j]!=s[k])
						{
							YN=false;
							break;
						}
					}
					if(!YN)
					{
						break;
					}
				}
				if(YN)
				{
					cout<<i<<"\n";
					break;
				}
			}
		}
	}
 return 0 ;
}

