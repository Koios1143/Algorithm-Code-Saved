#include<iostream>
#include<memory.h>
using namespace std;
long long m=0;
long long arr[1000005];
long long num(double o)
{
	if(o>=0)
		return (long long)o;
	else
	{
		return (long long)o-1;
	}
}

long long f(long long n)
{
	if(n==0)
		return arr[0];
	if(arr[n]!=0)
	{
		return arr[n];
	}
	arr[n]=((f(num((double)n/2.0))+f(num((double)n/3.0))+f((double)n/4.0))*f(num((double)n/5.0)))%m;
	return arr[n];
}

int main()
{
	int t;
	cin>>t;
	int x;
	while(t--)
	{
		memset(arr,0,sizeof(arr));
		cin>>arr[0]>>arr[1]>>m>>x;
		cout<<f(x)<<"\n";
	}


 return 0 ;
}

