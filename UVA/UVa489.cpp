//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		//freopen("UVa489_in.txt","r",stdin);
		//freopen("UVa489_out.txt","w",stdout);
	#endif
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//---------------------------------
	int n;
	string ans,in;
	int times=0;
	while(cin>>n){
		if(n==-1)
			return 0;
		times++;
		cout<<"Round "<<times<<"\n";
		cin>>ans>>in;
		int used[128];//0:no 1:ans_used 2:in_used 3:wrong_try
		memset(used,0,sizeof(used));
		int tot=0;
		for(unsigned int i=0 ; i<ans.size() ; i++){
			if(used[(int)ans[i]]==0){
				used[(int)ans[i]]=1;
				tot++;
			}
		}
		int cnt=0;
		for(unsigned int i=0 ; i<in.size() ; i++){
			if(used[(int)in[i]]==0){
				used[(int)in[i]]=3;
				cnt++;
			}
			else if(used[(int)in[i]]==1){
				used[(int)in[i]]=2;
				tot--;
			}
			if(tot<=0)
				break;
			if(cnt>=7)
				break;
		}
		if(cnt<7&&tot==0){
			cout<<"You win.\n";
		}
		else if(cnt>=7){
			cout<<"You lose.\n";
		}
		else{
			cout<<"You chickened out.\n";
		}
	}
	
		
 return 0 ;
}

