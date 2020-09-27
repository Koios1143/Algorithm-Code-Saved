//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int dp[2][510][510]={1},bug[510],n,m,b,mod,ans=0;
int main(){
	cin>>n>>m>>b>>mod;
	for(int i=1 ; i<=n ; i++){
		cin>>bug[i];
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=0 ; j<=m ; j++){
			for(int k=0 ; k<=b ; k++){
				if(j && k>=bug[i]) dp[i%2][j][k] = (dp[i%2][j-1][k-bug[i]] + dp[!(i%2)][j][k])%mod;
				else dp[i%2][j][k] = dp[!(i%2)][j][k];
				if(i==n && j==m) ans=(ans+dp[i%2][j][k])%mod;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}

