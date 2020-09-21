//By Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
int n,arr[105][105],dp[105][105][105][105];
int main(){
	while(cin>>n){
		memset(arr,0,sizeof(arr));
		memset(dp,0,sizeof(dp));
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=n ; j++){
				cin>>arr[i][j];
			}
		}
		int ans=-2147483647;
		for(int x=1 ; x<=n ; x++){
			for(int y=1 ; y<=n ; y++){
				for(int nx=x ; nx<=n ; nx++){
					for(int ny=y ; ny<=n ; ny++){
						if(nx==x && ny==y){
							//dot
							dp[x][y][nx][ny]=arr[nx][ny];
						}
						else if(nx==x){
							dp[x][y][nx][ny] = dp[1][1][x][y] - dp[1][1][x-1][y] - dp[x][1][x][y-1] + arr[nx][ny];
						}
						else if(ny==y){
							dp[x][y][nx][ny] = dp[1][1][x][y] - dp[1][1][x][y-1] - dp[x-1][1][x][y-1] + arr[nx][ny];
						}
						else if(x==1){
							dp[x][y][nx][ny]=dp[1][1][x][y] - dp[1][1][x][y-1] + arr[nx][ny];
						}
						else if(y==1){
							dp[x][y][nx][ny]=dp[1][1][x][y] - dp[1][1][x-1][y] + arr[nx][ny];
						}
						else{
							dp[x][y][nx][ny] = dp[1][1][x][ny] - dp[1][1][x][ny-1] + dp[1][1][nx][ny-1] /*- dp[1][1][x-1][ny]*/ - dp[1][1][nx][y-1] + arr[1][1];
						}
						if(dp[x][y][nx][ny]>ans)
							ans=dp[x][y][nx][ny];
					}
				}
			}
		}
		cout<<'\n';
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=n ; j++){
				for(int k=1 ; k<=n ; k++){
					for(int l=1 ; l<=n ; l++){
						cout<<dp[i][j][k][l]<<' ';
					}
					cout<<'\n';
				}
				cout<<'\n';
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}

