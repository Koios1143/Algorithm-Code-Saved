//By Koios1143
#include<iostream>
#include<sstream>
#include<cmath>
const int MaxN = 32768;
int fact[MaxN], ans[MaxN][2];
using namespace std;
string s;
bool fir;
int x,n,a,b,p,cnt,px;
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
    while(getline(cin,s)){
    	if(s=="0") break;
    	fir=true; n=1; px=0;
    	stringstream ss;
    	ss<<s;
    	while(ss>>x){
    		if(fir) a=x;
    		else{
    			b=x;
				n*=pow(a,b);	
			}
    		fir=!fir;
		}
		n--;
		while(n!=1){
			p=fact[n];
			cnt=0;
			while(n%p==0){
				cnt++;
				n/=p;
			}
			ans[px][0]=p;
			ans[px][1]=cnt;
			px++;
		}
		for(int i=px-1 ; i>=0 ; i--){
			if(i!=px-1) cout<<" ";
			cout<<ans[i][0]<<" "<<ans[i][1];
		}
		cout<<"\n";
	}
	return 0;
}

