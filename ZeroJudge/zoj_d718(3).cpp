//by Koios1143
#include<iostream>
#include<memory.h>
#include<queue>
#define int long long
using namespace std;
int n,m,team[10000100],T=0;
bool inq[1010];
string cmd;
queue<int> out;
queue<int> members[1010];
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
	while(cin>>n && n){
		cout<<"Line #"<<++T<<'\n';
		memset(team,0,sizeof(team));
		memset(inq,false,sizeof(inq));
		while(!out.empty()){
			out.pop();
		}
		for(int i=0 ; i<1010 ; i++){
			while(!members[i].empty())
				members[i].pop();
		}
		for(int i=1,t ; i<=n ; i++){
			cin>>t;
			for(int j=0,tmp ; j<t ; j++){
				cin>>tmp;
				team[tmp]=i;
			}
		}
		while(cin>>cmd){
			if(cmd[0]=='E'){
				cin>>m;
				if(team[m]==0){
					//have no team;
					out.push(-m);
				}
				else{ 
					if(inq[team[m]]){
						members[team[m]].push(m);
					}
					else{
						out.push(team[m]);
						inq[team[m]]=true;
						members[team[m]].push(m);
					}
				}
			}
			else if(cmd[0]=='D'){
				int now=out.front();
				if(now<=0){
					cout<<-now<<'\n';
					out.pop();
				}
				else{
					cout<<members[now].front()<<'\n';
					members[now].pop();
					if(members[now].empty()){
						out.pop();
						inq[now]=false;
					}
				}
			}
			else if(cmd[0]=='S'){
				break;
			}
			else{
				while(true){}
			}
		}
	}
	
		
 return 0 ;
}

