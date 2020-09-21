//by Koios1143
#include<iostream>
#include<memory.h>
#include<queue>
using namespace std;
int n,m,team[1000010],times=0;
bool inq[210000];
string cmd;
queue<int> teams;
queue<int> members[210000];
void Clear(queue<int>& q){
	queue<int> emp;
	swap(emp,q);
}
void _init(){
	memset(team,-1,sizeof(team));
	memset(inq,false,sizeof(inq));
	Clear(teams);
	for(int i=0 ; i<210000 ; i++){
		Clear(members[i]);
	}
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
		cout<<"Line #"<<++times<<'\n';
		_init();
		for(int i=0,t ; i<n ; i++){
			cin>>t;
			for(int j=0,tmp ; j<t ; j++){
				cin>>tmp;
				team[tmp]=i;
			}
		}
		while(cin>>cmd){
			if(cmd[0]=='E'){
				cin>>m;
				if(team[m]==-1){
					team[m]=++n;
				}
				if(inq[team[m]]){
					members[team[m]].push(m);
				}
				else{
					teams.push(team[m]);
					members[team[m]].push(m);
					inq[team[m]]=true;
				}
			}
			else if(cmd[0]=='D'){
				if(teams.empty()){
					while(true){}
				}
				int now=teams.front();
				cout<<members[now].front()<<'\n';
				members[now].pop();
				if(members[now].empty()){
					teams.pop();
					inq[now]=false;
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

