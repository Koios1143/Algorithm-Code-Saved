//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,k,l;
int v[105][105];
pii ans;
bool used[105];
int rec(int px){
	int dep=0;
	for(int i=0 ; i<105 ; i++){
		if(v[px][i]==-1){
			break;
		}
		//avoid same point occur
		if(used[v[px][i]]){
			continue;
		}
		else{
			used[v[px][i]]=true;
			dep += (rec(v[px][i])+1);
		}
	}
	return dep;
}
int main(){
	IOS
	while(cin>>n && n){
		//init
		ans = make_pair(0,0);
		for(int i=0 ; i<105 ; i++){
			for(int j=0 ; j<105 ; j++){
				v[i][j]=-1;
			}
		}
		//input
		for(int i=1 ; i<=n ; i++){
			cin>>k;
			for(int j=0 ; j<k ; j++){
				cin>>l;
				v[i][j]=l;
			}
		}
		//rec every point
		for(int i=1,tmp ; i<=n ; i++){
			tmp = rec(i);
			for(int i=0 ; i<105 ; i++){
				used[i]=false;
			}
			if(tmp > ans.first){
				ans = make_pair(tmp,i);
			}
		}
		cout<<ans.second<<"\n";
	}
	return 0;
}

