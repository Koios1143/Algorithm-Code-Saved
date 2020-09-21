#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int n;

int main() {
	while(cin>>n && n){
		map<vector<int>,int>m;
		int table[10010];
		for(int i=0 ; i<10010 ; i++){
			table[i]=0;
		}
		int Max=0;
		for(int i=0,tmp ; i<n ; i++){
			vector<int>v;
			for(int j=0 ; j<5 ; j++){
				cin>>tmp;
				v.push_back(tmp);
			}
			sort(v.begin(),v.end());
			m[v]+=1;
			if(m[v]>Max)
				Max=m[v];
		}
		int res=0;
		bool YN=true;
		for(auto i:m){
			if(i.second==Max){
				res+=i.second;
			}
		}
		cout<<res<<"\n";
	}
	
	return 0;
}
