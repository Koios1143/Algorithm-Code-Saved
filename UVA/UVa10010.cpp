#include<iostream>
using namespace std;
int t,m,n,k,dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
char arr[55][55];
string query;
bool out=false;
bool cango(int x,int y){
	if(x<0 || x>=m || y<0 || y>=n) return false;
	return true;
}
bool find_ans(int x, int y, int len){
	for(int i=0 ; i<8 ; i++){
		bool end=true;
		for(int step=0 ; step<len ; step++){
			int nx=x+dir[i][0]*step;
			int ny=y+dir[i][1]*step;
			if(!cango(nx,ny) || arr[nx][ny]!=query[step]){
				end=false;
				break;
			}
		}
		if(end) return true;
	}
	return false;
}
int main(){
	cin>>t;
	while(t--){
		if(out){
			cout<<"\n";
		}
		else{
			out=true;
		}
		cin>>m>>n;
		for(int i=0 ; i<m ; i++){
			for(int j=0 ; j<n ; j++){
				cin>>arr[i][j];
				arr[i][j]=tolower(arr[i][j]);
			}
		}
		cin>>k;
		while(k--){
			cin>>query;
			for(int i=0 ; i<query.size() ; i++){
				query[i]=tolower(query[i]);
			}
			bool end=false;
			int ans_x=-1,ans_y=-1;
			for(int i=0 ; i<m ; i++){
				for(int j=0 ; j<n && !end ; j++){
					if(arr[i][j]==query[0] && find_ans(i,j,query.size())){
						cout<<i+1<<" "<<j+1<<"\n";
						end=true;
					}
				}
			}
		}
	}
	return 0;
}

