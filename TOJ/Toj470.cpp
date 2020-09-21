//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n;
long long tmp,ans=0,dp[2][2];
int main(){
	IOS
	while(cin>>n){
		ans=0;
		memset(dp,0,sizeof(dp));
		for(int i=1 ; i<=n ; i++){
			cin>>tmp;
			dp[i%2][0]=max(dp[(i-1)%2][1],dp[(i-1)%2][0]);
			dp[i%2][1]=max(dp[(i-1)%2][0]+tmp,dp[i%2][1]);
			ans=max(dp[i%2][0],dp[i%2][1]);
			dp[(i-1)%2][0] = dp[(i-1)%2][1] = 0;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

