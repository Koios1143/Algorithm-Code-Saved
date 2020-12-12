//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
char arr[105][105];
bool inq[105][105];
int n,res[105][105],dir[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
queue<pii> q;
bool cango(int x,int y){
	if(x<0 || y<0 || x>=n || y>=n) return false;
	return true;
}
int main(){
	IOS;
	while(cin>>n){
		while(!q.empty())
			q.pop();
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				inq[i][j]=false;
				res[i][j]=0;
				cin>>arr[i][j];
				if(arr[i][j] == '3'){
					q.emplace(i,j);
					inq[i][j]=true;
				}
			}
		}
		int ans=0;
		while(!q.empty()){
			int x,y;
			tie(x,y) = q.front();
			q.pop();
			if(arr[x][y] == '1'){
				ans=max(ans,res[x][y]);
			}
			for(int i=0 ; i<4 ; i++){
				int nx=x+dir[i][0];
				int ny=y+dir[i][1];
				if(cango(nx,ny) && !inq[nx][ny]){
					q.emplace(nx,ny);
					inq[nx][ny]=true;
					res[nx][ny]=res[x][y]+1;
				}
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}

