//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
int n,m,nxt[1000010];
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
	while(cin>>n>>m){
		memset(nxt,0,sizeof(nxt));
		for(int i=2 ; i<=n ; i++){
			nxt[i-1]=i;
		}
		for(int i=0,q ; i<m ; i++){
			cin>>q;
			if(nxt[q]==0){
				cout<<"0u0 ...... ?\n";
			}
			else{
				cout<<nxt[q]<<'\n';
				int ans=nxt[q];
				nxt[q]=nxt[nxt[q]];
				nxt[ans]=0;
			}
		}
	}
		
 return 0 ;
}

