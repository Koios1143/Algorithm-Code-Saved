//by Koios1143
#include<iostream>
#include<queue>
using namespace std;
int n;
int main(){
//---------------------------------
	#ifdef local
		freopen("in.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	while(cin>>n && n){
		queue<int> q;
		queue<int> dis;
		for(int i=1 ; i<=n ; i++){
			q.push(i);
		}
		while(q.size()>1){
			int tmp=q.front();
			q.pop();
			dis.push(tmp);
			tmp=q.front();
			q.pop();
			q.push(tmp);
		}
		cout<<"Discarded cards:";
		bool out=false;
		while(!dis.empty()){
			if(!out){
				cout<<' '<<dis.front();
				out=true;
			}
			else{
				cout<<", "<<dis.front();
			}
			dis.pop();
		}
		cout<<'\n';
		cout<<"Remaining card: "<<q.front()<<"\n";
	}
	
		
 return 0 ;
}

