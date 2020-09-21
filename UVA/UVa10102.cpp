//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,ans,dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
char arr[105][105];
bool inq[105][105];
int dis(int x,int y,int fx,int fy){
	return abs(x-fx)+abs(y-fy);
}
bool ok(int x,int y){
	return (x>=0) && (x<n) && (y>=0) && (y<n);
}
int main(){
	IOS
	while(cin>>n){
		ans=0;
		queue<pii> q;
		vector<pii> px;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				cin>>arr[i][j];
				if(arr[i][j] == '1'){
					px.emplace_back(i,j);
				}
			}
		}
		//BFS every vector
		for(auto i: px){
			int fx,fy;tie(fx,fy)=i;
			q.emplace(fx,fy);
			inq[fx][fy]=true;
			while(!q.empty()){
				int x,y;tie(x,y)=q.front();
				q.pop();
				//end
				if(arr[x][y]=='3'){
					ans=max(ans, dis(x,y,fx,fy));
					break;
				}
				for(int i=0 ; i<4 ; i++){
					int nx=x+dir[i][0];
					int ny=y+dir[i][1];
					if(ok(nx,ny) && !inq[nx][ny]){
						inq[nx][ny]=true;
						q.emplace(nx,ny);
					}
				}
			}
			while(!q.empty()){
				q.pop();
			}
			for(int i=0 ; i<105 ; i++){
				for(int j=0 ; j<105 ; j++){
					inq[i][j]=false;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

