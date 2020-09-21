//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
map<string,string> m;
string s,a,b;
int main(){
	while(getline(cin,s)){
		if(s.size()==0){
			while(cin>>s){
				if(m.find(s)!=m.end())
					cout<<m[s]<<"\n";
				else
					cout<<"eh\n";
			}
			break;
		}
		stringstream ss;
		ss<<s;
		ss>>a>>b;
		m[b]=a;
	}

	return 0;
}

