//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,st,arr[50][50];
int row=1,col=1;
int last=0;
string ans;
void solve(int x,int y,int face){
	if(col+row == 2*n+1)
		return;
	if(st%2==0 && col+row==2*n)
		last=1;
	else if(st%2==1 && col+row==2*n)
		last=1;
	if(face==0){
		//left
		for(int i=1 ; i<=col-last ; i++){
			ans+=(char)('0'+arr[x][y-i]);
		}
		col++;
		solve(x,y-(col-1),1);
	}
	else if(face==1){
		//up
		for(int i=1 ; i<=row-last ; i++){
			ans+=(char)('0'+arr[x-i][y]);
		}
		row++;
		solve(x-(row-1),y,2);
	}
	else if(face==2){
		//right
		for(int i=1 ; i<=col-last ; i++){
			ans+=(char)('0'+arr[x][y+i]);
		}
		col++;
		solve(x,y+(col-1),3);
	}
	else if(face==3){
		//down
		for(int i=1 ; i<=row-last ; i++){
			ans+=(char)('0'+arr[x+i][y]);
		}
		row++;
		solve(x+(row-1),y,0);
	}
}
int main(){
	IOS
	cin>>n>>st;
	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++)
			cin>>arr[i][j];
	ans+=(char)('0'+arr[n/2][n/2]);
	solve(n/2,n/2,st);
	cout<<ans<<'\n';
	return 0;
}

