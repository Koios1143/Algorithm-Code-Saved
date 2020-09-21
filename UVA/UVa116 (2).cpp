//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int m,n,arr[15][105],Min_dis[15][105],to[15][105];
int dir[3]={-1,0,1};

int next(int x){
	if(x<0)
		return m-1;
	else if(x>=m)
		return 0;
	else
		return x;
}

int dfs(int x,int y){
	if(y+1==n){
		return Min_dis[x][y]=arr[x][y];
	}
	if(Min_dis[x][y]!=2147483647)
		return Min_dis[x][y];
	for(int i=0 ; i<3 ; i++){
		int nx=next(x+dir[i]);
		int ny=y+1;
		int dis=dfs(nx,ny);
		if(dis+arr[x][y]<Min_dis[x][y]){
			Min_dis[x][y]=dis+arr[x][y];
			to[x][y]=nx;
		}
		else if(dis+arr[x][y]==Min_dis[x][y] && to[x][y]>nx){
			to[x][y]=nx;
		}
	}
	return Min_dis[x][y];
}

int main(){
	IOS
	while(cin>>m>>n){
		//input
		for(int i=0 ; i<m ; i++){
			for(int j=0 ; j<n ; j++){
				Min_dis[i][j]=2147483647;
				cin>>arr[i][j];
			}
		}
		int ans=0,tot=2147483647;
		for(int i=0 ; i<m ; i++){
			int res=dfs(i,0);
			if(res<tot){
				tot=res;
				ans=i;
			}
		}
		bool out=false;
		for(int start=ans,j=0 ; j<n ; j++){
			if(out)
				cout<<" ";
			else
				out=true;
			cout<<start+1;
			start=to[start][j];
		}
		cout<<'\n';
		cout<<tot<<"\n";
	}
	return 0;
}

