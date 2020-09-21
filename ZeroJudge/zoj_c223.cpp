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
		priority_queue<long long,vector<long long>,greater<long long> > q;
		queue<int>q2;
		for(long long i=0 ; i<n ; i++){
			cin>>tmp;
			q.push(tmp);
		}
		for(int i=0 ; i<n ; i++){
			if(q2.empty()){
				int tmp=q.top();
				q.pop();
				q2.push(tmp);
				ans+=tmp;
			}
			else if(q2.front()<=q.top()){
				int tmp=q.top();
				q.pop();
				int tmp2=q.top();
				tmp2+=q2.front();
				q2.pop();
				q2.push(tmp2);
				q.push(tmp);
				ans+=tmp2;
			}
			else{
				int tmp=q2.front();
				q.pop();
				int tmp2=q2.front();
				tmp2+=q.top();
				q.pop();
				q.push(tmp);
				q2.push(tmp2);
				ans+=tmp;
			}
		}
		cout<<ans<<'\n';
	}
	
		
 return 0 ;
}

