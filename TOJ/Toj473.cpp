//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n,m;
string s;
int main(){
	init();
	cin>>n>>m;
	cin.get();
	getline(cin,s);
	for(int j=0 ; j<m ; j++){
		for(n-- ; n>0 && s[n-1]!=' ' ; n--);
	}
	for(int j=0 ; j<n ; j++){
		cout<<s[j];
	}
	cout<<'\n';
	return 0;
}

