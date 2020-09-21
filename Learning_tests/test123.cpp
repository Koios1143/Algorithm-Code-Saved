#include<iostream>
using namespace std;
long long factorial(int a,int b)
{
	long long ans=1;
	for(int i=a ; i<=b ; i++)
	{
		ans*=i;
	}
	return ans;
}

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		cout<<a;
		for(int i=a ; i<b ; i++)
		{
			cout<<"*"<<i+1;
		}
		cout<<"="<<factorial(a,b)<<endl;
	}
 return 0 ;
 
}



