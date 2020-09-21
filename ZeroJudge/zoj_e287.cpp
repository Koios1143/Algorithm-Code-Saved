//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,m,ans=0,arr[105][105],dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
bool vis[105][105];
pii start={-1,-1};
bool cango(int x,int y){
	if(x<0 || y<0 || x>=n || y>=m)
		return false;
	return true;
}
void dfs(pii s){
	int x=s.first;
	int y=s.second;
	vis[x][y]=true;
	ans+=arr[x][y];
	int Min=INT_MAX;
	pii next={-1,-1};
	for(int i=0 ; i<4 ; i++){
		int nx=x+dir[i][0];
		int ny=y+dir[i][1];
		if(!vis[nx][ny] && cango(nx,ny)){
			if(arr[nx][ny]<Min){
				next=make_pair(nx,ny);
				Min=arr[nx][ny];
			}
		}
	}
	if(next.first==-1){
		return;
	}
	else{
		dfs(next);
	}
}
int main(){
	IOS
	cin>>n>>m;
	int Min=INT_MAX;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>arr[i][j];
			if(arr[i][j]<Min){
				start=make_pair(i,j);
				Min=arr[i][j];
			}
		}
	}
	dfs(start);
	cout<<ans<<"\n";
	return 0;
}

