#include<bits/stdc++.h>
using namespace std;
void func(int x)
{
	cout<<x<<"\n";
	if(x==1)
	{
		return;
	}
	else
	{
		if(x%2==1)
		{
			return func(3*x+1);
		}
		else
		{
			return func(x/2);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	func(n);


 return 0 ;
}

