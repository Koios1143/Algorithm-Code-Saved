//By Koios1143
#include<bits/stdc++.h>
using namespace std;
string s;
long long ans=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>s;
	for(unsigned int i=0 ; i<s.size() ; i++){
		ans+=s[i]-'0';
	}
	if(ans%3==0){
		cout<<"You are lucky.\n";
	}
	else{
		cout<<"Sorry...\n";
	}


	return 0;
}

