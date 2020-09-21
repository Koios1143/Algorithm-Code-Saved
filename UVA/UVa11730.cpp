//by Koios1143
#include<iostream>
#include<memory.h>
#include<queue>
#include<vector>
using namespace std;
int a,b;
bool prime[1300];
int step[1300];
vector<int> fact[1300];
void BFS(){
	queue<int> q;
	bool inq[1300];
	memset(inq,false,sizeof(inq));
	memset(step,0,sizeof(step));
	q.push(a);
	inq[a]=true;
	while(!q.empty()){
		int now=q.front();
		int size=fact[now].size();
		for(int i=0,fac ; i<size ; i++){
			fac=fact[now][i];
			if(!inq[now+fac] && fac+now<=b){
				q.push(fac+now);
				inq[fac+now]=true;
				step[now+fac]=step[now]+1;
				if(now+fac==b){
					return;
				}
			}
		}
		q.pop();
	}
}
int main(){
//---------------------------------
	#ifdef local
		freopen("11730.txt","r",stdin);
		freopen("11730_.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2 ; i<1300 ; i++){
		for(int j=i+i ; j<1300 ; j+=i){
			prime[j]=false;
		}
	}
	for(int i=2 ; i<1300 ; i++){
		for(int j=2 ; j<i ; j++){
			if(i%j==0 && prime[j]){
				fact[i].push_back(j);
			}
		}
	}
	int times=0;
	while(cin>>a>>b){
		if(a==0 && b==0)
			return 0;
		times++;
		cout<<"Case "<<times<<": ";
		if(a>b)
			cout<<"-1\n";
		else if(a==b){
			cout<<"0\n";
		}
		else{
			BFS();
			step[b]==0 ? cout<<"-1\n" : cout<<step[b]<<"\n";
		}
	}
		
 return 0 ;
}

