//By Koios1143
#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define mp make_pair
using namespace std;
const int N = 1e5+10;
const int INF = 9223372036854775807;
int n,m,a,b,s;
vector<pii> E[N];
vector<int> dis(N,INF);
void dijkstra(){
	priority_queue<pii> pq;
	pq.emplace(dis[s]=0,s);
	while(pq.size()){
		int d,u;
		tie(d,u)=pq.top();
		d*=(-1);
		pq.pop();
		if(d!=dis[u]) continue;
		for(auto e: E[u]){
			int w,v;
			tie(w,v)=e;
			if(dis[v]<=dis[u]+a+b*w) continue;
			dis[v]=dis[u]+a+b*w;
			pq.emplace(-dis[v],v);
		}
	}
}

signed main(){
	cin>>n>>m>>a>>b>>s;
	for(int i=0,u,v,w ; i<m ; i++){
		cin>>u>>v>>w;
		E[u].emplace_back(w,v);
		E[v].emplace_back(w,u);
	}
	dijkstra();
	for(int i=1 ; i<=n ; i++){
		cout<<dis[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

