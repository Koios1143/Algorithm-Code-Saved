//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int n;
string s;
bool check(int l,int r,int err){
	for(;l<r;l++,r--){
		if(s[l]==s[r])
			continue;
		else{
			if(err==1) return false;
			return check(l+1,r,err+1) || check(l,r-1,err+1);
		}
	}
}
int main(){
	cin>>n;
	while(n--){
		cin>>s;
		cout<<(check(0,s.size()-1,0) == true ? "YES\n" : "NO\n");
	}

	return 0;
}

