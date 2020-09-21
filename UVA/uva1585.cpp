#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int score=0;
		for(unsigned int i=0,o=1 ; i<s.size() ; i++)
		{
			if(s[i]=='O')
			{
				score+=o;
				o++;
			}
			else
			{
				o=1;
			}
		}
		cout<<score<<"\n";
	}


 return 0 ;
}

