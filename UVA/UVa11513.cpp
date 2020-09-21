//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
char tmp;
string final="123456789",res;
map<string,pair<string,string>> ans;
string input;

string fix(string s,int line, int type){
	if(type==0){
		//horizontal
		int px=line*3;
		char a=s[px],b=s[px+1],c=s[px+2];
		s[px]=b;
		s[px+1]=c;
		s[px+2]=a;
		return s;
	}
	else{
		//straight
		int px=line;
		char a=s[px],b=s[px+3],c=s[px+6];
		s[px]=c;
		s[px+3]=a;
		s[px+6]=b;
		return s;
	}
}
string fix_to_str(int line, int type){
	string ret;
	if(type==0) ret="H";
	else ret="V";
	ret+=(char)('0'+line);
	return ret;
}
int main(){
	IOS
	queue<string>q;
	map<string,bool> inq;
	q.emplace(final);
	inq[final]=true;
	ans[final]=make_pair("end","end");
	while(!q.empty()){
		string now=q.front();
		q.pop();
		for(int i=0 ; i<3 ; i++){
			res=fix(now,i,0);
			if(!inq.count(res)){
				ans[res]=make_pair(fix_to_str(i+1,0),now);
				q.emplace(res);
				inq[res]=true;
			}
			res=fix(now,i,1);
			if(!inq.count(res)){
				ans[res]=make_pair(fix_to_str(i+1,1),now);
				q.emplace(res);
				inq[res]=true;
			}
		}
	}
	while(cin>>input && input!="0"){
		for(int i=0 ; i<3 ; i++){
			for(int j=0 ; j<3 ; j++){
				if(i==0 && j==0) continue;
				cin>>tmp;
				input+=tmp;
			}
		}
		if(ans.count(input)){
			if(input==final){
				cout<<"0\n";
			}
			else{
				string nxt=input;
				int cnt=0;
				string out;
				while(ans[nxt].second!="end"){
					out+=ans[nxt].first;
					nxt=ans[nxt].second;
					cnt++;
				}
				cout<<cnt<<" "<<out<<"\n";
			}
		}
		else{
			cout<<"Not solvable\n";
		}
	}
	return 0;
}

