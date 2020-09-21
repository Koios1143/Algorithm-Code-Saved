//by Koios1143
#include<iostream>
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
	long long i,n,m,times=0;;
	while(cin>>i>>m){
		if(i==-1&&m==-1)
			return 0;
		times++;
		n=i;
		long long ans=1;
		while(n!=1){
			(n%2==0) ? n>>=1 : n=n*3+1;
			(n<=m) ? ans++ : n=1;	
		}
		cout<<"Case "<<times<<": A = "<<i<<", limit = "<<m<<", number of terms = "<<ans<<"\n";
	}
	
		
 return 0 ;
}

