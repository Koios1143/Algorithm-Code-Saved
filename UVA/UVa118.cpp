#include<iostream>
using namespace std;
int tbl[128],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int n,m,sx,sy,nx,ny,face,arr[55][55];
string op,dir="NESW";
char c;
int main(){
	for(int i=0 ; i<4 ; i++){
		tbl[dir[i]]=i;
	}
	cin>>n>>m;
	while(cin>>sx>>sy>>c){
		face=tbl[c];
		cin>>op;
		bool lost=false;
		for(int i=0 ; i<op.size() ; i++){
			if(op[i]=='L')
				face=(face+3)%4;
			else if(op[i]=='R')
				face=(face+1)%4;
			else{
				nx=sx+dx[face];
				ny=sy+dy[face];
				if(nx<0 || nx>n || ny<0 || ny>m){
					if(arr[sx][sy]==-1)
						continue;
					arr[sx][sy]=-1;
					lost=true;
					break;
				}
				else{
					sx=nx;
					sy=ny;
				}
			}
		}
		cout<<sx<<" "<<sy<<" "<<dir[face];
		if(lost){
			cout<<" LOST\n";
		}
		else{
			cout<<'\n';
		}
	}
	return 0;
}
