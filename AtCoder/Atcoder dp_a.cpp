//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
const int MaxN = 100005;
int n,arr[MaxN],dp[MaxN];
int main(){
	IOS
	while(cin>>n){
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}
		dp[0]=0;
		dp[1]=abs(arr[0]-arr[1]);
		for(int i=2 ; i<n ; i++){
			dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]), dp[i-2]+abs(arr[i]-arr[i-2]));
		}
		cout<<dp[n-1]<<"\n";
	}
	return 0;
}

