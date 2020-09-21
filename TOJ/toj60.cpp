#include<iostream>
#include<vector>
#include<memory.h>
#include<algorithm>
#include<queue>
#define Max 100010
using namespace std;
struct node{
	int u,v,w;
	node(int a,int b,int c){
		u=a,v=b,w=c;
	}
};

vector<node> edge;
vector<pair<int,int>> mst[Max];
int dis[Max];

void init(){
	for(int i=0 ; i<Max ; i++){
		dis[i]=i;
	}
}

int find(int n){
	return dis[n]==n ? n : find(dis[n]);
}

bool same(int a,int b){
	return find(a)==find(b);
}

void Union(int a,int b){
	dis[find(a)]=find(b);
}

bool cmp(node a,node b){
	return a.w<b.w;
}

int Kruskal(int room,int road,int wlan){
	int ans=0;
	int check=0;
	int r_tot=road-wlan;
	init();
	sort(edge.begin(),edge.end(),cmp);
		for(auto i: edge){
			if(same(i.u,i.v))
				continue;
			Union(i.u,i.v);
			mst[i.v].push_back(make_pair(i.u,i.w));
			mst[i.u].push_back(make_pair(i.v,i.w));
			check++;
			if(r_tot>0){
				ans+=i.w;
			}
		}
	if(road!=check){
		return -1;
	}
	else{
		return ans;
	}
}

int main(){
	int room,road,wlan;
	cin>>room>>road>>wlan;
	for(int i=0,from,to,cost ; i<road ; i++){
		cin>>from>>to>>cost;
		edge.push_back(node(from,to,cost));
	}
	cout<<Kruskal(room,road,wlan)<<"\n";
	


 return 0 ;
}

