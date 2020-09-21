//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
struct _list{
	int value=-1;
	_list *pre=nullptr;
	_list *nxt=nullptr;
};
int team[1000010],index[1000010],last[1000010];
int n,m,End,size,code;
string cmd;
void _init(){
	memset(team,-1,sizeof(team));
	memset(index,-1,sizeof(index));
	memset(last,-1,sizeof(last));
	End=-1;
	size=0;
	code=0;
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
	while(cin>>n){
		_init();
		_list l[1000010];
		//input
		for(int i=0,tmp ; i<n ; i++){
			cin>>tmp;
			for(int j=0,man ; j<tmp ; j++){
				cin>>man;
				team[man]=i;
			}
		}
		//command
		while(cin>>cmd){
			if(cmd=="ENQUEUE"){
				
			}
			else if(cmd=="DEQUEUE"){
				if(End==-1){
					//not leagal
					while(true){}
				}
				else{
					if(team[End]==-1){
						//End have no team
						if(size>1){
							(**l[index[End]].pre).nxt=nullptr;
							int tmp=End;
							End=(*l[index[End]].pre).value;
							index[tmp]=-1;
						}
						else{
							index[End]=-1;
							End=-1;
						}
					}
					else{
						//End have team
						if(team[(*l[index[End]].pre).value]==team[End]){
							if(size>1){
								last[team[End]]=(*l[index[End]].pre).value;
							}
							else{
								//End is last
								int tmp=End;
								End=-1;
								last[team[tmp]]=-1;
								index[tmp]=-1;
							}
						}
					}
					size--;	
				}
			}
			else if(cmd=="STOP"){
				//stop command
				continue;
			}
			else{
				//not leagal
				while(true){}
			}
		}
	}
	
		
 return 0 ;
}

