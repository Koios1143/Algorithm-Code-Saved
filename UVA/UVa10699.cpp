//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
bool prime[1000010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	for(int i=2 ; i<1000010 ; i++){
		for(int j=i+i ; j<1000010 ; j+=i){
			prime[j]=false;
		}
	}
	
	int n,m;
	while(cin>>n){
		if(n==0)
			return 0;
		m=n;
		int cnt=0;
		for(int i=2 ; i<=n ; i++){
			if(!prime[i])
				continue;
			if(n%i==0){
				cnt++;
				while(n%i==0){
					n/=i;
				}
			}
		}
		cout<<m<<" : "<<cnt<<"\n";
	}


 return 0 ;
}

