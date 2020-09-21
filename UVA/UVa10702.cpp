//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int c,s,e,t,arr[105][105],dp[1005][105][105];
vector<int> last;

int DP(int n,int i,int j){
	if(n==1){
		return (i==j) ? dp[n][i][j]=-2147483647 : dp[n][i][j]=arr[i][j];
	}
	if(dp[n][i][j]){
		return dp[n][i][j];
	}
	for(int k=1 ; k<=c ; k++){
		dp[n][i][j]=max(dp[n][i][j], DP(n-1,i,k)+DP(1,k,j));
	}
	if(dp[n][i][j])
		return dp[n][i][j];
	else
		return -2147483647;
}

int main(){
	IOS
	while(cin>>c>>s>>e>>t && c){
		while(!last.empty())last.pop_back();
		memset(dp,0,sizeof(dp));
		for(int i=1 ; i<=c ; i++){
			for(int j=1 ; j<=c ; j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0,tmp ; i<e ; i++){
			cin>>tmp;
			last.push_back(tmp);
		}
		int ans=0;
		for(auto i: last){
			ans=max(ans,DP(t,s,i));
		}
		cout<<ans<<"\n";
	}
	return 0;
}

