//By Koios1143
#include<iostream>
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
		bool output=false;
		for(int i=s.size()-1 ; i>=0 ; i--){
			if(!output && s[i]=='0'){
				continue;
			}
			cout<<s[i];
			output=true;
		}
		if(!output)
			cout<<0;
		cout<<'\n';
	}


	return 0;
}

