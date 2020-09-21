//By Koios1143
#include<iostream>
#include<stack>
#define int long long
#define pii pair<int,int>
using namespace std;
int n,m,ans=0;
stack<int> st;
signed main(){
	while(cin>>n){
		ans=0;
		while(!st.empty()) st.pop();
		while(n--){
			cin>>m;
			while(!st.empty() && m>=st.top())
				st.pop();
			ans+=st.size();
			st.push(m);
		}
		cout<<ans<<'\n';
	}
	return 0;
}

