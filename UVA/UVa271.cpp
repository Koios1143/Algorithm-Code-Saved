//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		freopen("UVa271.txt","r",stdin);
		freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	bool alpha[128];
	memset(alpha,false,sizeof(alpha));
	for(int i='p' ; i<='z' ; i++){
		alpha[i]=true;
	}
	alpha['N']=alpha['C']=alpha['D']=alpha['E']=alpha['I']=true;
	
	string s;
	while(cin>>s){
		int size=s.size();
		bool YN=true;
		int cnt=0;
		for(int i=size-1 ; i>=0 ; i--){
			if(!alpha[s[i]]){
				YN=false;
				break;
			}
			if(s[i]=='N'){
				if(cnt>=1){
					//cnt--;
				}
				else{
					YN=false;
					break;
				}
			}
			else if(s[i]>='A'&&s[i]<='Z'){
				if(cnt>=2)
					cnt--;
				else{
					YN=false;
					break;
				}
			}
			else{
				cnt++;
				
			}
		}
		if(cnt>1)
			YN=false;
		if(YN)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}	
 return 0 ;
}

