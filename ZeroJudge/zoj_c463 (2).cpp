//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,t;
long long ans=0;
vector<int> Next[100005];
bool par[100005];
long long dfs(int now,int last){
	bool end=true;
	long long h=0;
	for(auto i: Next[now]){
		if(i==last)
			continue;
		long long tmp = dfs(i,now);
		h=max(h,tmp);
		ans+=tmp;
		end=false;
	}
	if(end)
		return 0;
	return h+1;
}
int main(){
	IOS
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		cin>>t;
		for(int j=0,tmp ; j<t ; j++){
			cin>>tmp;
			Next[i].push_back(tmp);
			Next[tmp].push_back(i);
			par[tmp] = true;
		}
	}
	int root=0;
	for(int i=1 ; i<=n ; i++){
		if(!par[i]){
			root=i;
			cout<<root<<"\n";
			break;
		}
	}
	ans += dfs(root,-1);
	cout<<ans<<"\n";
	return 0;
}

