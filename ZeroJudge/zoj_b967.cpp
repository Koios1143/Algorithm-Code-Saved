//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n;
pii far;
vector<int> v[100005];
void dfs(int now,int last,int depth){
	far = max(far,{depth,now});
	for(auto i: v[now]){
		if(i==last)
			continue;
		dfs(i,now,depth+1);
	}
}
int main(){
	IOS
	while(cin>>n){
		for(int i=0 ; i<n ; i++){
			v[i].clear();
		}
		for(int i=0,a,b ; i<n-1 ; i++){
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		far = {0,0};
		dfs(0,-1,0);
		dfs(far.second,-1,0);
		cout<<far.first<<"\n";
	}
	return 0;
}

