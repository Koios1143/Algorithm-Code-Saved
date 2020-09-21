//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,ans=0,rock=0;
char arr[5][5];
bool put[5][5];
bool ok(int x,int y){
	for(int i=y-1 ; i>=0 ; i--){
		if(arr[x][i] == 'X')
			break;
		if(put[x][i])
			return false;
	}
	for(int i=x-1 ; i>=0 ; i--){
		if(arr[i][y] == 'X')
			break;
		if(put[i][y])
			return false;
	}
	return true;
}
pii Next(int x,int y){
	if(y+1>=n){
		return make_pair(x+1,0);
	}
	else{
		return make_pair(x,y+1);
	}
}
int dfs(pii px){
	int x=px.first,y=px.second;
	if(x==n-1 && y==n-1){
		//end
		if(arr[x][y] == 'X')
			return false;
		if(ok(x,y))
			return true;
		else
			return false;
	}
	int ret=0;
	if(arr[x][y] == '.'){
		if(ok(x,y)){
			put[x][y]=true;
			rock++;
			ret=max(ret,dfs(Next(x,y)))+1;
			put[x][y]=false;
			rock--;
		}		
		ret=max(ret,dfs(Next(x,y)));
	}
	else{
		ret=max(ret,dfs(Next(x,y)));
	}
	return ret;
}
int main(){
	IOS
	while(cin>>n && n){
		memset(put,false,sizeof(put));
		for(int i=0 ; i<n ; i++)
			for(int j=0 ; j<n ; j++)
				cin>>arr[i][j];
		cout<<dfs(make_pair(0,0))<<"\n";
	}
	return 0;
}

