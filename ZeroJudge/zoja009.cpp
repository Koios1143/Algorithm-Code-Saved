#include<iostream>
using namespace std;
int main()//-7
{
	string s;
	while(cin>>s)
	{
		for(int i=0 ; i<s.size() ; i++)
		{
			cout<<(char)(s[i]-7);
		}
		cout<<endl;
	}

 return 0 ;
}

