//By Koios1143
#include<iostream>
const int MaxN = 1e6+5;
int fact[MaxN];
using namespace std;
int n,cnt,p;
int main(){
	for(long long i=2 ; i<=MaxN ; i++){
        if(!fact[i]){
            fact[i]=i;
            for(long long j=i*i ; j<=MaxN ; j+=i){
                if(!fact[j]){
                    fact[j]=i;
                }
            }
        }
    }
	while(cin>>n && n){
		cnt=0;
		cout<<n<<" : ";
		while(n!=1){
			p=fact[n];
			cnt++;
			while(n%p==0){
				n/=p;
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}

