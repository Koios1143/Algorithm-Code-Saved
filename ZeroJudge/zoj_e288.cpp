//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,m,ans=0;
long long mask,tmp;
string s;
map<long long, int> mp;
int char_to_num(char c){
	if(c>='A' && c<='Z'){
		return c-'A';
	}
	else{
		return 26+c-'a';
	}
}
int main(){
	IOS
	cin>>n>>m;
	for(int i=0 ; i<n ; i++){
		mask |= (1LL << i);
	}
	for(int i=0 ; i<m ; i++){
		cin>>s;
		tmp=0;
		for(int j=0 ; j<s.size() ; j++){
			tmp |= (1LL<<(char_to_num(s[j])));
		}
		if(mp.count(tmp ^ mask)) ans+= mp[tmp ^ mask];
		if(mp.count(tmp)) mp[tmp]++;
		else mp[tmp]=1;
	}
	cout<<ans<<'\n';
	return 0;
}

