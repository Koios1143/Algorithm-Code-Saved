//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
const int MaxN = 105,MaxW = 100005;
int n,w,cost[MaxN],value[MaxN];
long long dp[MaxW];
int main(){
	IOS
	while(cin>>n>>w){
		for(int i=0 ; i<n ; i++){
			cin>>cost[i]>>value[i];
		}
		for(int i=0 ; i<n ; i++){
			for(int j=w ; j-cost[i]>=0 ; j--){
				dp[j] = max(dp[j], dp[j-cost[i]]+value[i]);
			}
		}
		cout<<dp[w]<<"\n";
	}
	return 0;
}

