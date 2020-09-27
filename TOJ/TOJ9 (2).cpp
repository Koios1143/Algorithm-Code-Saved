//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int t,n,m,s,h[10010],Goal=2147483647;
vector<int> nxt[10010];
bool inq[10010];
int get_car_time(){
	queue<pii> q;
	for(int i=0 ; i<10010 ; i++) inq[i]=false;
	q.emplace(s,0);inq[s]=true;
	while(!q.empty()){
		int now,r;
		tie(now,r)=q.front();q.pop();
		if(h[now] == Goal){
			return r*1;
		}
		int Max=0;
		for(int i=0 ; i<nxt[now].size() ; i++)
			Max=max(Max,h[now]-h[nxt[now][i]]);
		for(auto i : nxt[now]){
			if(h[now]-h[i]==Max && !inq[i]){
				q.emplace(i,r+1);
				inq[i]=true;
			}
		}
	}
	return -1;
}
int get_walk_time(){
	queue<pii> q;
	for(int i=0 ; i<10010 ; i++) inq[i]=false;
	q.emplace(s,0);inq[s]=true;
	while(!q.empty()){
		int now,r;
		tie(now,r)=q.front();q.pop();
		if(h[now]==Goal){
			return r*6;
		}
		for(int i=0 ; i<nxt[now].size() ; i++){
			if(!inq[nxt[now][i]]){
				q.emplace(nxt[now][i],r+1);
				inq[nxt[now][i]]=true;
			}
		}
	}
	return -1;
}
int main(){
	IOS;
	cin>>t;
	for(int i=1 ; i<=t ; i++){
		for(int i=0 ; i<10010 ; i++){
			nxt[i].clear();
		}
		Goal=2147483647;
		cin>>n>>m>>s;
		for(int i=0 ; i<n ; i++){
			cin>>h[i];
			Goal=min(Goal,h[i]);
		}
		for(int i=0,u,v ; i<m ; i++){
			cin>>u>>v;
			nxt[u].emplace_back(v);
			nxt[v].emplace_back(u);
		}
		int car=get_car_time();
		int walk=get_walk_time();
		cout<<"Case #"<<i<<": ";
		if(car==-1 && walk==-1)
			cout<<"Call 119!\n";
		else if(car==-1)
			cout<<walk<<"\n";
		else
			cout<<abs(car-walk)<<'\n';
	}
	return 0;
}

