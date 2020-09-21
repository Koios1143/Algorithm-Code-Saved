#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	bool which=true;
	while(getline(cin,s))
	{
		string ans;
		int size=s.size();
		for(int i=0 ; i<size ; i++)
		{
			if(s[i]=='\"'&&which)
			{
				ans+="``";
				which=false;
			}
			else if(s[i]=='\"'&&!which)
			{
				ans+="''";
				which=true;
			}
			else
			{
				ans+=s[i];
			}
		}
		cout<<ans<<"\n";
	}


 return 0 ;
}

