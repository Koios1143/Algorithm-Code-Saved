//By Koios1143
#include<iostream>
using namespace std;
bool same(char a,char b){
	return !((a-'a')>=0 ^ (b-'a')>=0);
}
int k;
string s;
int main(){
	while(cin>>k){
		cin>>s;
		int now=1;
		int len=0;
		int ans=0;
		for(int i=1 ; i<s.size() ; i++){
			if(same(s[i],s[i-1])){
				if(now==k){
					len+=k;
					ans=max(ans,len);
				}
				else if(now>k){
					len=min(k,len);
				}
				else{
					now++;
				}
			}
			else{
				if(now>=k){
					len+=k;
					ans=max(ans,len);
					now=1;
				}
				else{
					len=0;
					now=1;
				}
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
