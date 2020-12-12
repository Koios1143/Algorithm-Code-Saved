#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		int cnt=0;
		int ans=0;
		if(s=="*") break;
		for(int i=0 ; i<s.size() ; i++){
			if(s[i] == '/'){
				if(cnt == 64) ans++;
				cnt=0;
			}
			else{
				if(s[i] == 'W'){
					cnt+=64;
				}
				else if(s[i] == 'H'){
					cnt+=32;
				}
				else if(s[i] == 'Q'){
					cnt+=16;
				}
				else if(s[i] == 'E'){
					cnt+=8;
				}
				else if(s[i] == 'S'){
					cnt+=4;
				}
				else if(s[i] == 'T'){
					cnt+=2;
				}
				else if(s[i] == 'X'){
					cnt+=1;
				}
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
