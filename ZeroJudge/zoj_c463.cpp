//By Koios1143
#include<iostream>
#include<vector>
#define int long long
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
bool has_father[100010];
vector<int> to[100010];
int height[100010];
int n,m,start,ans=0;
int rec(int px){
	if(to[px].size()==0){
		return 0;
	}
	if(height[px])
		return height[px];
	int h=0;
	for(auto i: to[px]){
		h=max(h,rec(i)+1);
	}
	height[px]=h;
	ans+=h;
	return h;
}
signed main(){
	init();
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		cin>>m;
		for(int j=1,node ; j<=m ; j++){
			cin>>node;
			has_father[node]=true;
			to[i].push_back(node);
		}
	}
	for(int i=1 ; i<=n ; i++){
		if(has_father[i]==false){
			start=i;
		}
	}
	rec(start);
	cout<<start<<'\n'<<ans<<'\n';

	return 0;
}

