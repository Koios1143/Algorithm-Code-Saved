//By Koios1143
#include<iostream>
#include<cmath>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}

int main(){
	init();
	int t,n,m,times=1;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int ans=0;
		for(int i=n ; i<=m ; i++){
			int res=sqrt(i);
			if(res*res == i){
				ans+=i;
			}
		}
		cout<<"Case "<<times++<<": "<<ans<<'\n';
	}


	return 0;
}

