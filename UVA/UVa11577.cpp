#include<iostream>
using namespace std;
int cnt[26];
int n,px;
string s;
int main(){
	cin>>n;
	getchar();
	while(n--){
		int ans=0;
		for(int i=0 ; i<26 ; i++){
			cnt[i]=0;
		}
		getline(cin,s);
		for(int i=0 ; i<s.size() ; i++){
			if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
				px=tolower(s[i])-'a';
				cnt[px]++;
				ans=max(ans, cnt[px]);
			}
		}
		for(int i=0 ; i<26 ; i++){
			if(cnt[i]==ans){
				cout<<(char)('a'+i);
			}
		}
		cout<<'\n';
	}
	return 0;
}

