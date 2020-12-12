//By Koios1143
#include<iostream>
using namespace std;
const int MaxN = 2002;
bool prime[MaxN];
string s;
int n,tbl[128];
string crt="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int main(){
	for(int i=0 ; i<=MaxN ; i++){
		prime[i]=true;
	}
	prime[0] = prime[1] = false;
	for(long long i=2 ; i<=MaxN ; i++){
        if(prime[i]){
            for(long long j=i*i ; j<=MaxN ; j+=i){
                prime[j]=false;
            }
        }
    }
    cin>>n;
    for(int Case=1 ; Case<=n ; Case++){
    	cin>>s;
    	cout<<"Case "<<Case<<": ";
    	for(int i=0 ; i<128 ; i++){
    		tbl[i]=0;
		}
		for(int i=0 ; i<s.size() ; i++){
			tbl[s[i]]++;
		}
		bool out=false;
		for(int i=0 ; i<crt.size() ; i++){
			if(prime[tbl[crt[i]]] == true){
				cout<<crt[i];
				out=true;
			}
		}
		if(!out){
			cout<<"empty";
		}
		cout<<"\n";
	}

	return 0;
}

