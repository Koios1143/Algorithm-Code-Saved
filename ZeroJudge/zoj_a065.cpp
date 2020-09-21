//By Koios1143
#include<iostream>
#include<cmath>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}

int main(){
	init();
	string s;
	while(cin>>s){
		for(int i=1 ; i<s.size() ; i++){
			cout<<abs(s[i]-s[i-1]);
		}
		cout<<'\n';
	}


	return 0;
}

