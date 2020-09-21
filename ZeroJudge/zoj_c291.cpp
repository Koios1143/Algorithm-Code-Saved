//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,ans=0;
vector<int> Next[50005];
bool vis[50005];
void dfs(int px){
	vis[px]=true;
	bool end=true;
	for(auto i: Next[px]){
		if(!vis[i]){
			dfs(i);
			end=false;
		}	
	}
	if(end)
		ans++;
}
int main(){
	IOS
	cin>>n;
	for(int i=0,tmp ; i<n ; i++){
		cin>>tmp;
		Next[i].push_back(tmp);
		Next[tmp].push_back(i);
	}
	for(int i=0 ; i<n ; i++){
		if(!vis[i]){
			dfs(i);
		}
	}
	cout<<ans<<'\n';
	return 0;
}

