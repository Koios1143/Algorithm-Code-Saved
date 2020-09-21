//By Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n;
unsigned long long arr[10];
unsigned long long ans[10];
bool used[10];
void dfs(int depth){
	if(depth == n){
		for(int i=0 ; i<n ; i++){
			if(i){
				cout<<' ';
			}
			cout<<ans[i];
		}
		cout<<'\n';
		return;
	}
	for(int i=0 ; i<n ; i++){
		if(!used[i]){
			used[i]=true;
			ans[depth]=arr[i];
			dfs(depth+1);
			ans[depth]=-1;
			used[i]=false;
		}
	}
}
int main(){
	init();
	while(cin>>n){
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		dfs(0);
	}


	return 0;
}

