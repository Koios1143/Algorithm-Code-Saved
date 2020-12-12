#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const int MaxN = 1048577;
int n,m,prime[MaxN],tbl[MaxN],mPrime[MaxN];
void init(){
	for(int i=1 ; i<MaxN ; i++){
		tbl[i]=0;
		mPrime[i]=0;
	}
	int tmp=m;
	while(tmp>1){
		mPrime[prime[tmp]]++;
		tmp/=prime[tmp];
	}
}
void update_tbl(int x){
	while(x>1){
		tbl[prime[x]]++;
		x/=prime[x];
	}
}
void update_prime(){
	prime[1]=1;
	for(int i=2 ; i<=MaxN ; i++){
		if(prime[i]) continue;
		for(int j=i ; j<=MaxN ; j+=i){
			if(!prime[j])
				prime[j]=i;
		}
	}
}
int main(){
	update_prime();
	while(cin>>n>>m){
		init();
		for(int i=2 ; i<=n ; i++){
			update_tbl(i);
		}
		int ans1=2147483647;
		for(int i=2 ; i<=m ; i++){
			if(mPrime[i]){
				ans1=min(ans1, tbl[i]/mPrime[i]);
			}
		}
		double ans2=0;
		for(int i=1 ; i<=n ; i++){
			ans2+=log(i)/log(m);
		}
		ans2=(int)(ans2)+1;
		cout<<fixed<<setprecision(0)<<ans1<<' '<<ans2<<"\n";
	}
	return 0;
}
