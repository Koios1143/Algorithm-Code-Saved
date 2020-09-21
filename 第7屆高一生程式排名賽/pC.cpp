#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string a;
	long long b;
	cin>>a>>b;
	int ans=0,size=a.size();
	if(a[0]=='-')//make a positive
		a[0]='0';
	b=abs(b);//make b positive
	for(int i=0 ; i<size ; i++)//check
	{
		ans=(ans*10+a[i]-'0')%b;
	}
	if(ans)
		cout<<"No\n";
	else
		cout<<"Yes\n";

 return 0 ;
}
