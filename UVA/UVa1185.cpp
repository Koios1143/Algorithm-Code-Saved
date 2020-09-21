//by Koios1143
#include<iostream>
#include<cmath>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		freopen("UVa1185_in.txt","r",stdin);
		freopen("UVa1185_out.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		double ans=0;
		for(int i=1 ; i<=n ; i++){
			ans+=log10(i);
			//cout<<"log "<<log10(i)<<"\n";
		}
		cout<<(int)ans+1<<"\n";
	}
 return 0 ;
}

