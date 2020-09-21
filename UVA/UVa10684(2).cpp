//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,arr[10005],dp[10005];
int main(){
	IOS
	while(cin>>n && n){
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}
		int ans=max(-2147483647,arr[0]);
		for(int i=0 ; i<n ; i++){
			dp[i]=max(dp[i-1]+arr[i],arr[i]);
			ans=max(ans,dp[i]);
		}
		if(ans<=0)
			cout<<"Losing streak.\n";
		else
			cout<<"The maximum winning streak is "<<ans<<".\n";
	}
	return 0;
}

