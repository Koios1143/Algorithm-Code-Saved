//By Koios1143
#include<iostream>
const int MaxN = 1e6+5;
int fact[MaxN],ans[MaxN];
using namespace std;
int t,x;
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
    for(int i=1 ; i<=MaxN ; i++){
    	ans[i]=1;
	}
    for(int i=2 ; i<=MaxN ; i++){
    	int tmp=i;
    	while(tmp!=1){
    		int p=fact[tmp], cnt=0;
    		while(tmp%p==0){
    			tmp/=fact[tmp];
    			cnt++;
			}
    		ans[i]*=(cnt+1);
		}
	}
	int n=2,m=ans[2];
	for(int i=2 ; i<=MaxN ; i++){
		if(ans[i]>=m){
			m=ans[i];
			n=i;
		}
		ans[i]=n;
	}
	cin>>t;
	while(t--){
		cin>>x;
		cout<<ans[x]<<"\n";
	}
	return 0;
}

