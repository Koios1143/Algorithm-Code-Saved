//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int ans=0,n,m;
int main(){
	init();
	cin>>n;
	while(n--){
		cin>>m;
		ans=max(ans,m);
	}
	cout<<ans<<'\n';

	return 0;
}

