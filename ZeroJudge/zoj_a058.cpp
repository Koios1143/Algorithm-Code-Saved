//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int ans[3];
int main(){
	init();
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ans[n%3]++;
	}
	cout<<ans[0]<<' '<<ans[1]<<' '<<ans[2]<<'\n';

	return 0;
}

