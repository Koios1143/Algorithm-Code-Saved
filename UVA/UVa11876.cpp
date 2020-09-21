//by Koios1143
#include<iostream>
#include<memory.h>
#include<algorithm>
using namespace std;
bool prime[1000010];
void set_prime(){
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	for(int i=2 ; i<1000010 ; i++){
		for(int j=i+i ; j<1000010 ; j+=i){
			prime[j]=false;
		}
	}
}
int NOD[1000010];
int _NOD(int x){
	int ans=0;
	for(int i=2 ; i<=x ; i++){
		if(prime[i]){
			if(x%i!=0)
				continue;
			else{
				ans++;
				while(x%i==0){
					x/=i;
				}
			}
		}
	}
	return ans;
}
void set_NOD(){
	for(int i=0 ; i<1000010 ; i++){
		NOD[i]=_NOD(i);
	}
}
int N[1000000];
int _init(int x){
	if(x==0)
		return 1;
	else{
		int n=_init(x-1);
		int m=_NOD(n);
		return N[x]=n+m;
	}
}
int res[1000010];
int main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	set_prime();
	set_NOD();
	_init(1000000);
	sort(N,N+1000000);
	int now=0;
	for(int i=0 ; i<1000010 ; i++){
		if(N[i]){
			now++;
		}
		res[i]=now;
	}
	int t,a,b,i=1;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<"Case "<<i<<": "<<res[b]-res[a-1]<<"\n";
		i++;
	}
		
 return 0 ;
}

