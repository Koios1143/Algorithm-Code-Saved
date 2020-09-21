//by Koios1143
#include<iostream>
#include<stack>
#define int long long
using namespace std;
int n,arr[1000010],ans=0;
signed main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	stack<int> s,w;
	for(int i=0 ; i<n ; i++){
		while(!s.empty() && s.top()<arr[i]){
			ans+=w.top();
			s.pop();
			w.pop();
		}
		if(!s.empty() && s.top()==arr[i]){
			ans+=w.top();
			w.top()++;
		}
		else{
			s.push(arr[i]);
			w.push(1);
		}
		if(s.size()>1)
			ans++;
	}
	cout<<ans*2<<"\n";
		
 return 0 ;
}

