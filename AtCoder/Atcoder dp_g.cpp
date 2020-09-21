//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
struct dot{
	int val=0;
	vector<int> from;
}dots[100005];
int n,m;

int dfs(int px){
	if(dots[px].from.empty())
		return dots[px].val=0;
	if(dots[px].val)
		return dots[px].val;
	int res=0;
	for(auto i: dots[px].from){
		res=max(res,dfs(i));
	}
	return dots[px].val=res+1;
}

int main(){
	IOS
	while(cin>>n>>m){
		for(int i=0,a,b ; i<m ; i++){
			cin>>a>>b;
			dots[b].from.push_back(a);
		}
		int ans=0;
		for(int i=1 ; i<=n ; i++){
			ans=max(ans,dfs(i));
		}
		cout<<ans<<"\n";
	}
	return 0;
}

