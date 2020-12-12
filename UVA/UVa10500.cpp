#include<iostream>
using namespace std;
int n,m,x,y,dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
char arr[15][15], res[15][15];
bool vis[15][15];
void init(){
	for(int i=0 ; i<15 ; i++){
		for(int j=0 ; j<15 ; j++){
			arr[i][j]='X';
			res[i][j]='?';
			vis[i][j]=false;
		}
	}
}
void print_table(){
	for(int i=1 ; i<=m ; i++){
		cout<<"|---";
	}
	cout<<"|\n";
}
bool cango(int x, int y){
	if(x<0 || x>n || y<0 || y>m) return false;
	return true;
}
int main(){
	while(cin>>n>>m && (n||m)){
		init();
		cin>>x>>y;
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=m ; j++){
				cin>>arr[i][j];
			}
		}
		res[x][y]='0';
		vis[x][y]=true;
		int move=0;
		while(true){
			bool found=false;
			int found_x,found_y;
			for(int i=0 ; i<4 ; i++){
				int nx=x+dir[i][0];
				int ny=y+dir[i][1];
				res[nx][ny]=arr[nx][ny];
				if(cango(nx,ny) && arr[nx][ny]!='X' && !found && !vis[nx][ny]){
					found=true;
					found_x=nx;
					found_y=ny;
					vis[found_x][found_y]=true;
				}
			}
			if(found){
				x=found_x;
				y=found_y;
				move++;
			}
			else{
				break;
			}
		}
		cout<<"\n";
		for(int i=1 ; i<=n ; i++){
			print_table();
			for(int j=1 ; j<=m ; j++){
				if(j==1) cout<<"|";
				cout<<" "<<res[i][j]<<" |";
			}
			cout<<"\n";
		}
		print_table();
		cout<<"\n";
		cout<<"NUMBER OF MOVEMENTS: "<<move<<"\n"; 
	}

	return 0;
}
