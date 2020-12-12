//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int t,n,a,b,c,ans;
int main(){
	IOS;
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		for(int i=0 ; i<n ; i++){
			cin>>a>>b>>c;
			ans += a*c;
		}
		cout<<ans<<'\n';
	}
	return 0;
}

