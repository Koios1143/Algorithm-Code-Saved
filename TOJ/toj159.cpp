#include<iostream>
#include<memory.h>
#include<vector>
#include<queue>
#define Max 50010
using namespace std;

struct dot{
	int val;
	vector<int> next;
};
dot d[Max];
int in[Max],out[Max],bit[Max<<1],road[Max<<1],n,m;
bool inq[Max<<1];
int order=2;
inline void DFS(int x){
	int size=d[x].next.size();
	for(int i=0 ; i<size ; i++){
		int now=d[x].next[i];
		if(!inq[now]){
			road[order]=d[now].val;
			in[now]=order++;
			inq[now]=true;
			DFS(now);
		}
	}
	road[order]=(-1)*d[x].val;
	out[x]=order++;
}

inline int lowerbit(int x){
	return x&(-x);
}
inline void add(int pos,int val){
	while(pos<=n<<1){
		bit[pos]+=val;
		pos+=lowerbit(pos);
	}
}
inline long long sum(int pos){
	long long ans=0;
	while(pos){
		ans+=bit[pos];
		pos-=lowerbit(pos);
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	in[1]=1;
	inq[1]=true;
	cin>>n>>m;
	for(int i=0,a,b ; i<n-1 ; i++){
		cin>>a>>b;
		d[a].next.push_back(b);
		d[b].next.push_back(a);
	}
	for(int i=1 ; i<=n ; i++){
		cin>>d[i].val;
	}
	road[1]=d[1].val;
	DFS(1);
	for(int i=1 ; i<=n<<1 ; i++){
		add(i,road[i]);
	}
	
	char cmd;
	long long ans=0;
	for(int i=0 ; i<m ; i++){
		cin>>cmd;
		if(cmd=='C'){
			int a,b;
			cin>>a>>b;
			d[a].val=b;
			add(in[a],b-road[in[a]]);
			add(out[a],(-1)*b-road[out[a]]);
			road[in[a]]=b;
			road[out[a]]=(-1)*b;
		}
		else if(cmd=='G'){
			int a;
			cin>>a;
			ans+=sum(in[a]);
		}
	}
	cout<<ans<<"\n";

 return 0 ;
}

