//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int t,n,p,arr[1005],dp[1005];
int main(){
	IOS
	cin>>t;
	while(t--){
		cin>>n>>p;
		for(int i=0 ; i<1005 ; i++)dp[i]=0;
		for(int i=0 ; i<p ; i++){
			cin>>arr[i];
		}
		dp[0]=1;
		//dp[i]=dp[i-k], k<=i
		for(int i=0 ; i<p ; i++){
			for(int j=n ; j>=arr[i] ; j--){
				if(dp[j-arr[i]])
					dp[j]=1;
			}
		}
		if(dp[n])
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

