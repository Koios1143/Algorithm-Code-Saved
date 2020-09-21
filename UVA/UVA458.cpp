#include<iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int size=s.size();
		for(int i=0 ; i<size ; i++)
		{
			s[i]-=7;
		}
		cout<<s<<"\n";
	}


 return 0 ;
}

