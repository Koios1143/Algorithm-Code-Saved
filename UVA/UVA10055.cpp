#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a,b;
	while(cin>>a>>b)
	{
		a>b ? cout<<a-b<<endl : cout<<b-a<<endl; 
	}
 return 0 ;
}

