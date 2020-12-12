//By Koios1143
#include<iostream>
using namespace std;
const int MaxN = 1e7+5;
int fact[MaxN];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
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
    int n,m,fir,sec;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>m;
        fir=1, sec=1;
        while(m!=1){
            int p=fact[m];
            if(p>sec){
                fir=sec;
                sec=p;
            }
            else if(p>fir){
                fir=p;
            }
            while(!(m%p)){
                m/=p;
            }
        }
        cout<<fir<<" "<<sec<<'\n';
    }
    return 0;
}
