//by Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
int a,b;
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
	while(cin>>a>>b)
		cout<<__gcd(a,b)<<"\n";
	
		
 return 0 ;
}

