//by Koios1143
#include<iostream>
#include<sstream>
using namespace std;
int length(int n){
	int res=0;
	while(n){
		res++;
		n/=10;
	}
	return res;
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
	string s,tmp;int n;
	while(getline(cin,s)){
		int ans=0;
		stringstream ss;
		ss<<s;
		while(ss>>tmp){
			stringstream ss2;
			ss2<<tmp;
			ss2>>n;
			if(tmp.size()==length(n)){
				ans+=n;
			}
		}
		cout<<ans<<'\n';
	}
	
		
 return 0 ;
}

