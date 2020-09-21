#include<iostream>
using namespace std;
int main()
{
	long long dp[101];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=3 ; i<101 ; i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	int n;
	while(cin>>n)
	{
		cout<<dp[n]<<"\n";
	}


 return 0 ;
}

