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
	int a,b;
	bool c;
	while(cin>>a>>b>>c){
		bool YN=false;
		if((a!=0&&b!=0)==c){
			cout<<"AND\n";
			YN=true;
		}
		if((a!=0||b!=0)==c){
			cout<<"OR\n";
			YN=true;
		}
		if(((a!=0)^(b!=0))==c){
			cout<<"XOR\n";
			YN=true;
		}
		if(!YN)
			cout<<"IMPOSSIBLE\n";
	}
	
		
 return 0 ;
}

