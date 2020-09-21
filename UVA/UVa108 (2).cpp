//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,arr[105][105],col[105][105];
int main(){
	IOS
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin>>arr[i][j];
			col[i][j] = col[i][j-1]+arr[i][j];
		}
	}
	int ans=0;
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			int sum=0;
			for(int k=1 ; k<=n ; k++){
				sum+=col[k][j]-col[k][i-1];
				ans=max(ans,sum);
				if(sum<0) sum=0;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}

