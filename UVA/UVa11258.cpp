//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
long long n,dp[205][205];
string s;

int str_to_int(int l,int r){
	long long now=0;
	while(l<=r){
		now*=10;
		now+=(s[l]-'0');
		l++;
		if(now>INT_MAX){
			return 0;
		}
	}
	return now;
}

int main(){
	IOS
	cin>>n;
	while(n--){
		cin>>s;
		for(int i=0 ; i<s.size() ; i++){
			for(int j=i ; j<s.size() ; j++){
				dp[i][j]=str_to_int(i,j);
			}
		}
		for(int i=0 ; i<s.size() ; i++){
			for(int j=i ; j<s.size() ; j++){
				for(int k=i ; k<=j ; k++){
					dp[i][j]=max(dp[i][j], dp[i][k]+dp[k+1][j]);
				}
			}
		}
		cout<<dp[0][s.size()-1]<<"\n";
	}
	return 0;
}

