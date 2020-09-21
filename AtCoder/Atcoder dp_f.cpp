//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
string s,t;
int dp[3005][3005],from[3005][3005];

void print_LCS(int i,int j){
	if(i==0 || j==0)
		return;
	if(from[i][j] == 0){
		print_LCS(i-1,j-1);
		cout<<s[i-1];
	}
	else if(from[i][j] == 1)
		print_LCS(i-1,j);
	else
		print_LCS(i,j-1);
}

int main(){
	IOS
	while(cin>>s>>t){
		for(int i=0 ; i<3005 ; i++){
			dp[i][0] = dp[0][i] = 0;
		}
		for(int i=1 ; i<=s.size() ; i++){
			for(int j=1 ; j<=t.size() ; j++){
				if(s[i-1] == t[j-1]){
					dp[i][j] = dp[i-1][j-1]+1;
					from[i][j]=0;
				}
				else{
					if(dp[i-1][j] > dp[i][j-1])
						from[i][j]=1;
					else
						from[i][j]=2;
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		print_LCS(s.size(),t.size());
	}
	return 0;
}

