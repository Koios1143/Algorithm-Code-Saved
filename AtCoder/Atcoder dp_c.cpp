//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
const int MaxN = 100005;
int n,now,dp[MaxN][3];
int main(){
	IOS
	while(cin>>n){
		for(int i=1 ; i<=n ; i++){
			for(int j=0 ; j<3 ; j++){
				cin>>now;
				dp[i][j]=max(dp[i-1][(j+1)%3], dp[i-1][((j+2)%3)]) + now;
			}
		}
		int ans=0;
		for(int i=0 ; i<3 ; i++){
			ans=max(ans, dp[n][i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

