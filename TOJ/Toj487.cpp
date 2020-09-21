//By Koios1143
#include<iostream>
#include<memory.h>
#include<queue>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
const int MIN_dis = 3;
double dis(int cx,int cy,int px,int py){
	return abs(cx-px) + abs(cy-py);
}
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int n,m,cx,cy,px,py,arr[1010][1010];
bool inq[1010][1010];
bool available(int x,int y,int nx,int ny){
	int now_h=arr[x][y];
	int next_h=arr[nx][ny];
	if(nx<1 || nx>n || ny<1 || ny>m || inq[nx][ny])
		return false;
	return ((next_h==now_h) || (next_h-now_h==1) || (now_h-next_h==1) ||(now_h-next_h==2));
}
int main(){
	init();
	cin>>n>>m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin>>arr[i][j];
		}
	}
	cin>>cx>>cy;
	cin>>px>>py;
	queue< pair<int,int> > q;
	q.emplace(cx,cy);
	inq[cx][cy]=true;
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		if(dis(x,y,px,py)<=MIN_dis){
			cout<<"yes\n";
			return 0;
		}
		for(int i=0 ; i<4 ; i++){
			int nx=x+dir[i][0];
			int ny=y+dir[i][1];
			if(available(x,y,nx,ny)){
				q.emplace(nx,ny);
				inq[nx][ny]=true;
			}
		}
	}
	cout<<"no\n";
	return 0;
}
//BFS
