#include<iostream>
using namespace std;
long long arr[200010],DP[200010],sum[200010];
int main()
{
	long long n,k;
	cin>>n>>k;
	for(int i=1 ; i<=n ; i++)
	{
		cin>>arr[i];
		if(i==1)
			sum[i]=arr[i];
		else
			sum[i]=sum[i-1]+arr[i];//calculate sum
	}
	for(int i=n ; i>=k+1 ; i--)//save the number include in k
	{
		sum[i]-=sum[i-k];
	}
	for(int i=1 ; i<k ; i++)//delete numbers below k
	{
		sum[i]=0;
	}
	for(int i=1 ; i<=n ; i++)
	{
		if(i<k) //0
			DP[i]=sum[i];
		else //get or not get(continuous or not)
			DP[i]=max(DP[i-k-1]+sum[i],DP[i-1]);
	}
	cout<<DP[n]<<"\n";


 return 0 ;
}

