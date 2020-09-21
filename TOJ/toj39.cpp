//by Koios1143
#include<iostream>
#define int long long
using namespace std;
int Stoi(string s){
	int res=0,size=s.size();
	res=s[0]-'0';
	for(int i=1 ; i<size ; i++){
		res*=10;
		res+=(s[i]-'0');
	}
	return res;
}
signed main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	string c;
	int ans=1;
	while(cin>>c && c!="EOF"){
		if(c=="%"){
			cout<<ans<<"\n";
			ans=1;
		}
		else{
			ans*=Stoi(c);
			ans%=479001599;
		}
	}
 return 0 ;
}

