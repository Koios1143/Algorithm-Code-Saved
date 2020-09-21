//by Koios1143
#include<iostream>
#include<memory.h>
#include<queue>
using namespace std;
int a,b,step;
bool prime[300];
void BFS(){
	queue<int> q;
	bool inq[300];
	memset(inq,false,sizeof(inq));
	q.push(a);
	inq[a]=true;
	while(!q.empty()){
		int now=q.front();
		if(now==b){
			return;
		}
		step++;
		for(int i=2 ; i<now && i<b ; i++){
			if(prime[i] && now%i==0 && !used[i]){
				q.push(i);
			}
		}
		q.pop();
	}
}
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
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2 ; i<300 ; i++){
		for(int j=i+i ; j<300 ; j+=i){
			prime[j]=false;
		}
	}
	int times=0;
	while(cin>>a>>b){
		if(a==0 && b==0)
			return 0;
		step=0;
		times++;
		cout<<"Case "<<times<<": ";
		BFS();
		step==0 ? cout<<"-1\n" : cout<<step<<"\n";
	}
		
 return 0 ;
}

