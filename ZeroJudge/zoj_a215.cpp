//By Koios1143
#include<iostream>
#include<cmath>
#define int long long
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n,m;
signed main(){
	init();
	while(cin>>n>>m){
		int res=0,ans=0;
		for(int i=n ; i<=m ; i++){
			res+=i;
			ans++;
			if(res>=m){
				cout<<ans<<'\n';
				break;
			}
		}
	}


	return 0;
}

