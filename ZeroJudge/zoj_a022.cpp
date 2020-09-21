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
		bool YN=true;
		for(int i=0,j=s.size()-1 ; i<s.size() && j>=0 && i<=j ; i++,j--){
			if(s[i]!=s[j]){
				YN=false;
				break;
			}
		}
		if(YN){
			cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}
	}


	return 0;
}

