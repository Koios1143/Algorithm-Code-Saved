//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
const int MaxN = 100005;
int n,k,arr[MaxN],dp[MaxN];
int main(){
	IOS
	while(cin>>n>>k){
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
			dp[i]=INT_MAX;
		}
		dp[0]=0;
		for(int i=1 ; i<n ; i++){
			for(int j=1 ; i-j>=0 && j<=k ; j++){
				dp[i]=min(dp[i], dp[i-j] + abs(arr[i]-arr[i-j]));
			}
		}
		cout<<dp[n-1]<<'\n';
	}
	return 0;
}

