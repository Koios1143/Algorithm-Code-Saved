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
	int n,m;
	while(cin>>n>>m){
		cout<<abs(n-m)<<"\n";
	}
	
		
 return 0 ;
}

