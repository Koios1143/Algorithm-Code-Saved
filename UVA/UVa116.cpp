//By Koios1143
#include<iostream>
#include<memory.h>
#define int long long
const int N = 15;
const int M = 105;
using namespace std;
int n,m,arr[N][M],dp[N][M];
pair<int,int> to[N][M];
int dir[3]={-1,0,1};
int nxt_x(int x){
	if(x<0)
		return n-1;
	else if(x>=n)
		return 0;
	else
		return x;
}
int min_path(int x,int y){
	if(y==0){
		//to[x][y]=make_pair(x,y);
		dp[x][y]=arr[x][y];
		return dp[x][y];
	}
	int res=2147483647;
	pair<int,int> nxt=make_pair(-1,-1);
	for(int i=0 ; i<3 ; i++){
		int nx=nxt_x(x+dir[i]);
		int ny=y-1;
		if(dp[nx][ny]==-1){
			//not travaled
			dp[nx][ny]=min_path(nx,ny);
		}
		if(dp[nx][ny]<res){
			res=dp[nx][ny];
			nxt=make_pair(nx,ny);
		}
		else if(dp[nx][ny]==res && nx<nxt.first){
			res=dp[nx][ny];
			nxt=make_pair(nx,ny);
		}
	}
	dp[x][y]=res+arr[x][y];
	//to[x][y]=make_pair(nxt.first,nxt.second);
	to[nx][ny]=make_pair(x,y);
	return dp[x][y];
}
void print_ans(int x,int y){
	while(to[x][y]!=make_pair(x,y)){
		cout<<x<<' ';
		x=to[x][y].first;
		y=to[x][y].second;
	}
	cout<<x<<'\n';
}
signed main(){
	#ifdef local
		freopen("in.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif
	while(cin>>n>>m){
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin>>arr[i][j];
				dp[i][j]=-1;
				if(j+1==m)
					to[i][j]=make_pair(i,j);
				else
					to[i][j]=make_pair(-1,-1);
			}
		}
		int res=2147483647;
		pair<int,int> ans=make_pair(-1,-1);
		for(int i=0 ; i<n ; i++){
			int tmp=min_path(i,m-1);
			if(tmp<res){
				res=tmp;
				ans=make_pair(i,m-1);
			}
		}
		print_ans(ans.first,ans.second);
		cout<<'\n';
		cout<<res<<'\n';
	}
	return 0;
}
