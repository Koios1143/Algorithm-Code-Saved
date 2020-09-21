//By Koios1143
#include<iostream>
#define int long long
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int gcd(int a,int b){
	if(a==0 || b==0)
		return max(a,b);
	return gcd(b,a%b);
}
int n,m;
signed main(){
	//init();
	while(cin>>n>>m){
		cout<<gcd(n,m)<<'\n';
	}


	return 0;
}

