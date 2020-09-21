//By Koios1143
#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n,m,arr[110];
int main(){
	init();
	bitset<20010> table;
	table[10000]=1;
	cin>>n>>m;
	vector<int> ans;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
		table = (table<<arr[i]) | (table>>arr[i]);
	}
	for(int i=0 ; i<=20000 ; i++){
		if(table[i]){
			ans.push_back(i-10000);
		}
	}
	for(int i=0,q ; i<m ; i++){
		cin>>q;
		cout<<*lower_bound(ans.begin(),ans.end(),q)<<'\n';
	}

	return 0;
}
//bitset version
//O(n*6*10^2)
/*
every bits means it is possible
when add element x
table = table<<x | table>>x
*/
