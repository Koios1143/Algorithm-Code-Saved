//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int t,n;
long long ans=1;
int main(){
	init();
	cin>>t;
	while(t--){
		cin>>n;
		if(n==0){
			cout<<0<<'\n';
			continue;
		}
		ans=1;
		while(n){
			ans*=(n%10);
			n/=10;
		}
		cout<<ans<<'\n';
	}


	return 0;
}

