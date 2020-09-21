//By Koios1143
#include<iostream>
#include<vector>
#define int long long
#define pii pair<int,int>
using namespace std;
const int Max_N = 1e7+10;
int t,n,m,arr[Max_N];
vector<int> st;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	while(cin>>t){
		st.clear();
		for(int i=1 ; i<=t ; i++){
			cin>>arr[i];
			while(!st.empty() && arr[i]>arr[st.back()])
				st.pop_back();
			if(i-1) cout<<' ';
			if(st.empty()) cout<<i-1;
			else cout<<(i-st.back()-1);
			st.push_back(i);
		}
		cout<<"\n";
	}
	return 0;
}

