//By Koios1143
#include<iostream>
#include<memory.h>
#include<vector>
#include<queue>
using namespace std;
struct Node{
	int to,val;
	Node(int t,int v): to(t),val(v){};
	bool operator < (const Node &tmp) const{
		return val>tmp.val;
	}
};
int n,t,dis[1005],vis[1005];
vector<Node> G[1005];
int dijkstra(int st,int ed){
	dis[st]=0;
	priority_queue<Node> pq;
	pq.push(Node(st,0));
	while(!pq.empty()){
		Node nd=pq.top();
		pq.pop();
		int v=nd.to;
		vis[v]=1;
		for(int i=0 ; i<G[v].size() ; i++){
			Node it=G[v][i];
			if(!vis[it.to]&&dis[it.to]>dis[v]+it.val){
				dis[it.to]=dis[v]+it.val;
				pq.push(Node(it.to,dis[it.to]));
			}
		}
	}
	return dis[ed];
}
int main(){
	cin>>t>>n;
	for(int i=1 ; i<=n ; i++){
		dis[i]=2147483647;
		vis[i]=false;
		G[i].clear();
	}
	for(int i=0,from,to,val ; i<t ; i++){
		cin>>from>>to>>val;
		G[from].push_back(Node(to,val));
		G[to].push_back(Node(from,val));
	}
	cout<<dijkstra(1,n)<<"\n";

	return 0;
}

