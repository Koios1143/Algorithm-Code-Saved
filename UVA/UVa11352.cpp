//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int t,n,m,sx,sy,ex,ey,dir[8][2]={{-1,-2},{-2,-1},{-2,1},{-1,2},{1,-2},{2,-1},{2,1},{1,2}};
int dis[105][105],mov[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
char arr[105][105],tmp;
bool inq[105][105];
bool cango(int x,int y){
	if(x<0 || x>=n || y<0 || y>=m) return false;
	return true;
}
void init(){
	for(int i=0 ; i<105 ; i++){
		for(int j=0 ; j<105 ; j++){
			arr[i][j] = '.';
			inq[i][j] = false;
			dis[i][j] = 0;
		}
	}
}
void bfs(){
	queue<pii> q;
	q.emplace(sx,sy);
	inq[sx][sy]=true;
	while(!q.empty()){
		int x,y;
		tie(x,y)=q.front();
		q.pop();
		if(arr[x][y] == 'B') return;
		for(int i=0 ; i<8 ; i++){
			int nx=x+mov[i][0];
			int ny=y+mov[i][1];
			if(cango(nx,ny) && !inq[nx][ny] && arr[nx][ny]!='X'){
				q.emplace(nx,ny);
				inq[nx][ny]=true;
				dis[nx][ny]=dis[x][y]+1;
			}
		}
	}
}
int main(){
	IOS;
	cin>>t;
	while(t--){
		init();
		cin>>n>>m;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin>>tmp;
				if(tmp == 'Z'){
					for(int k=0 ; k<8 ; k++){
						int nx=i+dir[k][0];
						int ny=j+dir[k][1];
						if(cango(nx,ny) && arr[nx][ny]=='.'){
							arr[nx][ny] = 'X';
						}
					}
					arr[i][j] = 'X';
				}
				else if(tmp == 'A'){
					sx=i,sy=j;
					arr[i][j]=tmp;
				}
				else if(tmp == 'B'){
					ex=i,ey=j;
					arr[i][j]=tmp;
				}
			}
		}
		bfs();
		if(dis[ex][ey])
			cout<<"Minimal possible length of a trip is "<<dis[ex][ey]<<'\n';
		else
			cout<<"King Peter, you can't go now!\n";
	}
	return 0;
}

