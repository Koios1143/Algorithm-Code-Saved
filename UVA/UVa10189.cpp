#include<iostream>
using namespace std;
int n,m,Case=1,dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{-1,-1},{1,-1},{-1,1},{1,1}};
char arr[105][105];
bool cango(int x,int y){
	if(x<0 || x>=n || y<0 || y>=m) return false;
	return true;
}
int main(){
	bool out=false;
	while(cin>>n>>m && (n||m)){
		if(out){
			cout<<'\n';
		}
		else{
			out=true;
		}
		cout<<"Field #"<<Case++<<":\n";
		// input
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin>>arr[i][j];
			}
		}
		// solve
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				if(arr[i][j] == '*'){
					cout<<'*';
				}
				else{
					int cnt=0;
					for(int k=0 ; k<8 ; k++){
						// 枚舉八個方向 
						int nx=i+dir[k][0];
						int ny=j+dir[k][1];
						// 點在範圍內 
						if(cango(nx,ny)){
							if(arr[nx][ny] == '*'){
								cnt++;
							}
						}
					}
					cout<<cnt;
				}
			}
			cout<<'\n';
		}
	}
	return 0;
}
