//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
ll b,p,m;

ll solve(int x,int y,int mod){
	if(y==0)
		return 1;
	if(y%2)
		return (x*solve(x,y-1,mod))%mod;
	else{
		ll half=solve(x,y/2,mod);
		return (half*half)%mod;
	}
}

int main(){
	while(cin>>b>>p>>m){
		cout<<solve(b,p,m)<<"\n";
	}
	return 0;
}

