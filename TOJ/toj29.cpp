#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s,s2;
	bool YN=0;
	for(int i=0,n ; i<t ; i++)
	{
		YN=0;
		cin>>s;
		cin>>n;
		for(int j=0,flag=-1 ; j<n ; j++)
		{
			cin>>s2;
			for(int k=0 ; k<s.size() ; k++)
			{
				if(s2[0]==s[k])
				{
					flag=k;
					break;
				}
			}
			if(flag==-1)
			{
				cout<<"n"<<endl;
			}
			else
			{
				for(int l=1 ; l<s2.size() ; l++)
				{
					if(s2[l]!=s[flag+l])
					{
						YN=0;
						break;
					}
					else
					{
						YN=1;
					}
				}
			}
			if(YN==1)
			{
				cout<<"y"<<endl;
			}
			else
			{
				cout<<"n"<<endl;
			}
		}
	}


 return 0 ;
}

