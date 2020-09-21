//by Koios1143
#include<iostream>
#include<sstream>
#include<memory.h>
using namespace std;
bool prime[32780];

int qpow(int a,int b){
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2==0){
		int res=qpow(a,b/2);
		return res*res;
	}
	else{
		int res=qpow(a,b-1);
		return a*res;
	}
}

int main(){
//---------------------------------
	#ifdef local
		freopen("UVa516.txt","r",stdin);
		freopen("UVa516_out.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	
	
	
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	for(int i=2 ; i<32780 ; i++){
		for(int j=i+i ; j<32780 ; j+=i){
			prime[j]=false;
		}
	}
	
	string x;
	while(getline(cin,x)){
		if(x=="0")
			return 0;
		stringstream ss;
		ss<<x;
		int a,b,tot=1;
		while(ss>>a>>b){
			tot*=qpow(a,b);
		}
		tot--;
		for(int i=tot ; i>=2 ; i--){
			if(prime[i]==false)
				continue;
			else{
				if(tot%i!=0)
					continue;
				int cnt=0;
				while(tot%i==0){
					cnt++;
					tot/=i;
				}
				cout<<i<<" "<<cnt;
				if(tot!=1)
					cout<<' ';
			}
		}
		cout<<'\n';
	}

 return 0 ;
}

