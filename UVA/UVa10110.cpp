//by Koios1143
#include<iostream>
#include<cmath>
using namespace std;
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
	long long n;
	while(cin>>n){
		if(n==0)
			return 0;
		long long x=sqrt(n);
		if(x*x==n)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	
		
 return 0 ;
}

