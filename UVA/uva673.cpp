//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int t;
string s;
stack<char>st;
int main(){
	cin>>t;
	getchar();
	while(t--){
		getline(cin,s);
		while(!st.empty())
			st.pop();
		for(int i=0 ; i<s.size() ; i++){
			if(s[i] == '(' || s[i] == '[')
				st.push(s[i]);
			else{
				if(st.empty()){
					st.push(s[i]);
				}
				else if(st.top()=='(' && s[i]==')'){
					st.pop();
				}
				else if(st.top()=='[' && s[i]==']'){
					st.pop();
				}
				else{
					st.push(s[i]);
				}
			}
		}
		if(st.empty())
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}

	return 0;
}

