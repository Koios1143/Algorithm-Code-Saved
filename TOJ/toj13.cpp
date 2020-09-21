#include<iostream>
#include<memory.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int v,n;
	while(cin>>v>>n){
		int weight[n];
		int val[n];
		for(int i=0 ; i<n ;  i++){
			cin>>weight[i]>>val[i];
		}
		int dp[v+10];
		memset(dp,0,sizeof(dp));
		for(int i=0 ; i<n ; i++){
			for(int j=1 ; j<=v ; j++){
				if(j-weight[i]>=0)
					dp[j]=max(dp[j],dp[j-weight[i]]+val[i]);
			}
		}
		cout<<dp[v]<<"\n";
	}
 return 0 ;
}

