#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		int a=0,b=0;
		a=(pow(26,2)*(int)(s[0]-'A')+pow(26,1)*(int)(s[1]-'A')+pow(26,0)*(int)(s[2]-'A'));
		b=(pow(10,3)*(int)(s[4]-'0')+pow(10,2)*(int)(s[5]-'0')+pow(10,1)*(int)(s[6]-'0')+pow(10,0)*(int)(s[7]-'0'));
		if(abs(a-b)<=100)
		{
			cout<<"nice\n";
		}
		else
		{
			cout<<"not nice\n";
		}
	}


 return 0 ;
}

