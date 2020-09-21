//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int t,d,ans,cnt[10];
string s;
void dfs(int depth, long long res){
	if(depth == s.size()){
		if(res%d == 0){
			ans++;
		}
		return;
	}
	for(int i=0 ; i<10 ; i++){
		if(cnt[i]>0){
			cnt[i]--;
			dfs(depth+1, res*10 + i);
			cnt[i]++;
		}
	}
}
int main(){
	IOS
	cin>>t;
	while(t--){
		//initialize
		for(int i=0 ; i<10 ; i++)
			cnt[i]=0;
		ans=0;
		cin>>s>>d;
		for(int i=0 ; i<s.size() ; i++){
			cnt[s[i]-'0']++;
		}
		dfs(0,0);
		cout<<ans<<"\n";
	}
	return 0;
}

