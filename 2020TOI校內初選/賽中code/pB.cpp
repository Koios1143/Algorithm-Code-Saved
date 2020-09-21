#include<iostream>
#include<queue>
using namespace std;
int n,m,x,y,nx,ny;
char map[1005][1005];
int res[1005][1005];
bool inq[1005][1005];
queue<pair<int,int>> q;
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>map[i][j];
			if(map[i][j]=='9'){
				q.emplace(i,j);
				res[i][j]=1;
				inq[i][j]=true;
			}
		}
	}
	int ans=0;
	while(!q.empty()){
		x=q.front().first;
		y=q.front().second;
		q.pop();
		if(map[x][y]=='0'){
			ans+=res[x][y];
			continue;
		}
		for(int i=0 ; i<4 ; i++){
			nx=x+dir[i][0];
			ny=y+dir[i][1];
			if(nx<0 || ny<0 || nx>=n || ny>=m){
				continue;
			}
			if(map[nx][ny]+1==map[x][y]){
				res[nx][ny]+=res[x][y];
				if(!inq[nx][ny]){
					inq[nx][ny]=true;
					q.emplace(nx,ny);
				}
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}

