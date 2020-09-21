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
	string s;
	signed int ans=1;
	while(cin>>s){
		if(s=='\n'){
			
		}
		else{
			int size=s.size();
			bool YN=true;
			for(int i=0 ; i<size ; i++){
				if(s[i]=='/'){
					YN=false;
					break;
				}
			}
			if(!YN){
				continue;
			}
		}
	}
	
		
 return 0 ;
}

