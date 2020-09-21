//By Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
const int MaxN=1e8+10;
bool prime[MaxN];
void build_table(){
	memset(prime,true,sizeof(prime));
	prime[0] = prime[1] = false;
	for(long long i=2 ; i<MaxN ; i++){
		if(!prime[i])
			continue;
		for(long long j=i*i ; j<MaxN ; j+=i){
			prime[j]=false;
		}
	}
}
int n,m;
int main(){
	init();
	build_table();
	while(cin>>n>>m){
		int ans=0;
		for(int i=n ; i<=m ; i++){
			if(prime[i])
				ans++;
		}
		cout<<ans<<'\n';
	}


	return 0;
}

