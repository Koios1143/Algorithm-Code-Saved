//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
const int Mod=1e9+7;
int h,w;
char arr[1005][1005];
long long dp[1005][1005];
int main(){
	IOS
	while(cin>>h>>w){
		for(int i=0 ; i<h ; i++){
			for(int j=0 ; j<w ; j++){
				cin>>arr[i][j];
			}
		}
		memset(dp,0,sizeof(dp));
		dp[1][1]=1;
		for(int i=1 ; i<=h ; i++){
			for(int j=1 ; j<=w ; j++){
				if(arr[i-1][j-1]=='#')
					continue;
				dp[i][j] += (dp[i][j-1] + dp[i-1][j])%Mod;
			}
		}
		cout<<dp[h][w]%Mod<<"\n";
	}	
	return 0;
}

