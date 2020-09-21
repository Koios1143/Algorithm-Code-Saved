//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
string s;
bool solve(){
	int now=0;
	for(int i=0 ; i<s.size() ; i++)
		now=(now*10+(s[i]-'0'))%17;
	return now==0;
}
int main(){
	IOS
	while(cin>>s && s!="0"){
		if(solve())
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}

