#include<iostream>
using namespace std;
long long f(int n)
{
	long long arr[n];
	arr[0]=1;
	arr[1]=1;
	for(int i=2 ; i<n ; i++)
	{
		arr[i]=arr[i-2]+arr[i-1];
	}
	return arr[n-1];
}
int main()
{
	long long n;
	cin>>n;
	if(n>0)
	{
		cout<<f(n)<<endl;
	}
	else if(n==0)
	{
		cout<<0<<endl;
	}
	else if(n<0&&((-1)*n)%2==0)
	{
		cout<<f(n)<<endl;
	}
	else
	{
		cout<<(-1)*f((-1)*n)<<endl;
	}


 return 0 ;
}

