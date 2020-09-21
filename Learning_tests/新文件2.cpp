#include<iostream>
using namespace std;
bool Palin(string s)
{
	char arr[20000];
	for(int i=s.size()-1 , timer=0 ; i>=0 ; i-- , timer++)
	{
		arr[timer]=s[i];
	}
	if(arr==s)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	string s;
	int T;
	cin>>T;
	for(int i=0 ; i<T ; i++)
	{
		cin>>s;
		if(Palin(s)==1)
		{
			if(s.size()/2!=0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		/*else
		{
			char arr[3005];
			
		}*/
	}

 return 0 ;
}

