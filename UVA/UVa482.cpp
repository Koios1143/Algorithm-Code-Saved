#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
pair<int,string>p[100000000];
int n,m;
string val;
int main(){
	cin>>n;
	while(n--){
		stringstream ss;
		string s;
		getline(cin,s);
		ss<<s;
		int i=0;
		while(ss>>m){
			p[i].first=m;
			i++;
		}
		ss.clear();
		getchar();
		getline(cin,s);
		ss<<s;
		i=0;
		while(ss>>val){
			p[i].second=val;
		}
		sort(p,p+i);
		for(int j=0 ; j<i ; j++){
			cout<<p[j].second<<"\n";
		}
	}

 return 0 ;
}

