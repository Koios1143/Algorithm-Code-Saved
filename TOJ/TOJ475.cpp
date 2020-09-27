//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int n,q,lgN;
int P[1000010][25],D[1000010];
vector<int> nxt[1000010];

void computeP(){
	for(int i=0 ; i<lgN ; i++){
		for(int j=1 ; j<=n ; j++){
			if(P[j][i]==-1){
				P[j][i+1]=-1;
			}
			else{
				P[j][i+1]=P[P[j][i]][i];
			}
		}
	}
}

bool vis[1000010];
void computeD(int px,int h){
	D[px]=h;
	vis[px]=true;
	for(auto i: nxt[px]){
		if(!vis[i]){
			computeD(i,h+1);
		}
	}
}

int LCA(int u,int v){
	if(D[u]>D[v]) swap(u,v);
	int dis=D[v]-D[u];
	for(int i=lgN ; i>=0 ; i--){
		if(dis&(1<<i)) v=P[v][i];
	}
	if(v==u) return v;
	for(int i=lgN ; i>=0 ; i--){
		if(P[u][i] != P[v][i]){
			u=P[u][i];
			v=P[v][i];
		}
	}
	return P[u][0];
}

void init(){
	for(int i=0 ; i<1000010 ; i++){
		for(int j=0 ; j<25 ; j++){
			P[i][j]=-1;
		}
	}
}

int main(){
	IOS;
	init();
	cin>>n>>q;
	lgN=__lg(n);
	for(int i=1,p ; i<=n-1 ; i++){
		cin>>p;
		P[i][0]=p;
		nxt[p].emplace_back(i);
	}
	computeP();
	computeD(0,0);
	for(int i=0,x,l,r ; i<q ; i++){
		cin>>x;
		cin>>l;
		for(int j=0 ; j<x-1 ; j++){
			cin>>r;
			l=LCA(l,r);
		}
		cout<<l<<'\n';
	}
	return 0;
}

