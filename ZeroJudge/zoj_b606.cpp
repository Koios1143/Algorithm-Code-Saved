//by Koios1143
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
long long n,arr[1000010];
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
	while(cin>>n && n){
		long long tmp,ans=0;
		priority_queue<long long,vector<long long>,greater<long long>> q;
		for(long long i=0 ; i<n ; i++){
			cin>>tmp;
			q.push(tmp);
		}
		while(q.size()>1){
			tmp=q.top();
			q.pop();
			tmp+=q.top();
			q.pop();
			q.push(tmp);
			ans+=tmp;
		}
		cout<<ans<<'\n';
	}
	
		
 return 0 ;
}

