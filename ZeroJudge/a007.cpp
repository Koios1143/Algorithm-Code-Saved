//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
bool prime[47000];
vector<int> primes;
int n,sq=sqrt(2147483647);
int main(){
	IOS;
	for(int i=0 ; i<sq ; i++){
		prime[i]=true;
	}
	prime[0]=prime[1]=false;
	for(int i=2 ; i<sq ; i++){
		if(prime[i]){
			primes.push_back(i);
			for(int j=i*i ; j<sq ; j+=i){
				prime[j]=false;
			}
		}
	}
	while(cin>>n){
		int sq=sqrt(n);
		bool is_prime=true;
		for(auto i: primes){
			if(i>=sq) break;
			if(n%i==0){
				is_prime=false;
				break;
			}
		}
		if(is_prime && n!=1) cout<<"質數\n";
		else cout<<"非質數\n";
	}
	return 0;
}

