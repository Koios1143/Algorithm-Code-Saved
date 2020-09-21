//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int g,n;
string s;
int main(){
	IOS
	while(cin>>g && g){
		cin>>s;
		n=s.size()/g;
		for(int i=0 ; i<s.size() ; i+=n){
			for(int j=i+n-1 ; j>=i ; j--){
				cout<<s[j];
			}
		}
		cout<<'\n';
	}
	return 0;
}

