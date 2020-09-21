//by Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
long long gcd(long long a,long long b){
	if(a%b)
		return gcd(b,a%b);
	else
		return b;
}
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
	string s,trash;
	long long a,b;
	while(cin>>s){
		cin>>trash>>a>>trash>>b>>trash;
		if(s=="GCD"){
			cout<<gcd(a,b)<<"\n";
		}
		else if(s=="LCM"){
			cout<<a*b/gcd(a,b)<<"\n";
		}
		else if(s=="ADD"){
			cout<<a+b<<"\n";
		}
		else if(s=="SUB"){
			cout<<a-b<<"\n";
		}
		else if(s=="MUL"){
			cout<<a*b<<"\n";
		}
		else if(s=="DIV"){
			cout<<a/b<<"\n";
		}
	}
	
		
 return 0 ;
}

