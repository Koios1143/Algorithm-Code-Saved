//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n;
double now,dp[3005];
int main(){
	IOS
	while(cin>>n){
		dp[0]=1;
		for(int i=0 ; i<n ; i++){
			cin>>now;
			for(int j=i+1 ; j>=0 ; j--){
				dp[j] = (j==0 ? 0 : dp[j-1]*now) + dp[j]*(1-now);
			}
		}
		double ans=0;
		for(int i=n/2+1 ; i<=n ; i++){
			ans+=dp[i];
		}
		cout<<fixed<<setprecision(10)<<ans<<"\n";
	}
	return 0;
}

