//by Koios1143
#include<iostream>
#include<sstream>
#include<map>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	map<string,string>m;
	string a,b,s;
	while(getline(cin,s)){
		if(s.size()==0)
			break;
		stringstream ss;
		ss<<s;
		ss>>a>>b;
		m.insert(pair<string,string>(b,a));	
	}
	string tmp;
	while(cin>>s){
		tmp=m[s];
		if(tmp.size())
			cout<<tmp<<"\n";
		else
			cout<<"eh\n";
	}
 return 0 ;
}

