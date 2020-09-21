//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int t;string s,tmp;
vector<string> input;
vector<string> news;
vector<string> ans;
bool used[100];
void dfs(int depth, int size, int last){
	if(depth == 0){
		bool out=false;
		for(auto i: ans){
			if(out)
				cout<<", ";
			else
				out = true;
			cout<<i;
		}
		cout<<'\n';
		return;
	}
	for(int i=last ; i<news.size() ; i++){
		if(!used[i]){
			used[i]=true;
			ans.push_back(news[i]);
			dfs(depth-1,size,i);
			ans.pop_back();
			used[i]=false;
		}
	}
}
int main(){
	IOS
	cin>>t;
	getline(cin,s);getline(cin,s);
	bool out=false;
	while(t--){
		if(out){
			cout<<'\n';
		}
		else{
			out=true;
		}
		input.clear();
		news.clear();
		ans.clear();
		memset(used,sizeof(used),false);
		getline(cin,s);
		stringstream ss(s);
		while(ss>>tmp){
			input.push_back(tmp);
		}
		while(getline(cin,s) && (int)(s[0])!=0){
			news.push_back(s);
		}
		if(input.size() == 1){
			if(input[0]=="*"){
				for(int i=1 ; i<=news.size() ; i++){
					cout<<"Size "<<i<<"\n";
					dfs(i,i,0);
					cout<<"\n";
				}
			}
			else{
				int in0 = stoi(input[0]);
				cout<<"Size "<<in0<<"\n";
				dfs(in0,in0,0);
				cout<<"\n";
			}
		}
		else{
			int in0=stoi(input[0]);
			int in1=stoi(input[1]);
			for(int i=in0 ; i<=in1 ; i++){
				cout<<"Size "<<i<<'\n';
				dfs(i,i,0);
				cout<<"\n";
			}
		}
	}
	return 0;
}

