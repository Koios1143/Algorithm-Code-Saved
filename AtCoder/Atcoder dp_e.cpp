//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
const int MaxN = 105,MaxV = 100005;
int n,w,cost[MaxN],value[MaxN];
long long dp[MaxV];
int main(){
	IOS
	while(cin>>n>>w){
		int tot_value=0;
		for(int i=0 ; i<n ; i++){
			cin>>cost[i]>>value[i];
			tot_value+=value[i];
		}
		for(int i=1 ; i<=tot_value ; i++){
			dp[i] = INT_MAX;
		}
		for(int i=0 ; i<n ; i++){
			for(int j=tot_value ; j>=value[i] ; j--){
				dp[j]=min(dp[j], dp[j-value[i]]+cost[i]);
			}
		}
		int ans=0;
		for(int i=tot_value ; i>0 ; i--){
			if(dp[i]<=w){
				ans=i;
				break;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

