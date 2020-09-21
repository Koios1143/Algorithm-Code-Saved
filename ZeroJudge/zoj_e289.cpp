//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int m,n,ans=0,cnt=0;
string tmp[200005];
map<string, int> mp;
int main(){
	IOS
	mp.clear();
	cin>>m>>n;
	for(int i=0,head=0 ; i<n ; i++){
		cin>>tmp[i];
		if(i<m-1){
			if(mp.count(tmp[i])) mp[tmp[i]]++;
			else mp[tmp[i]]=1,cnt++;
		}
		else{
			if(mp[tmp[i]]) mp[tmp[i]]++;
			else mp[tmp[i]]=1,cnt++;
			if(cnt == m) ans++;
			if(mp[tmp[head]]-1) mp[tmp[head]]--;
			else mp.erase(tmp[head]),cnt--;
			head++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}

