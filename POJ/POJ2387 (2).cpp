#include<iostream>
#include<queue>
#include<vector>
#include<tuple>
#define int long long
using namespace std;
//vector< vector< pair<int,int> > > E(20005);
pair<int,int>E[1005][1005];
int dis[1005],m,t;
//pair<int,int> tie(int fir,int sec){
//	return make_pair(fir,sec);
//}
void dijkstra(){
	const int INF = 2147483647;
	//int n = E.size();
	int n = t;
	cout<<"n:"<<n<<"\n";
	vector<int> dis(n+10,INF);
	priority_queue< pair<int,int> > pq;
	pq.emplace(dis[1]=0 , 1);
	while(pq.size()){
		int d,u;
		tie(d,u) = pq.top();
		d*=-1;
		
		pq.pop();
		if(d != dis[u])continue;
		for(auto e : E[u]){
			int w,v;
			tie(w,v) = e;
			if(dis[v] > dis[u]+w){
				dis[v] = dis[u]+w;
				pq.emplace(-dis[v],v);
			}
		}
	}
}
signed main(){
	cin>>t>>m;
	for(int i=0,from,to,val ; i<t ; i++){
		cin>>from>>to>>val;
		E[from][i] = make_pair(val,to);
	}
	dijkstra();
	for(auto i:dis){
		cout<<i<<" ";
	}
	cout<<'\n';
	cout<<dis[m-1]<<"\n";
	
	return 0;
}
