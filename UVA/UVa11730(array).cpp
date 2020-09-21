//by Koios1143
#include<iostream>
#include<memory.h>
#include<vector>
using namespace std;
int a,b,times=0;
bool prime[1300],used[1300];
int step[1300],arr[100000];
vector<int> fact[1300];

void init(){
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
}

void BFS(){
	memset(used,false,sizeof(used));
	memset(arr,0,sizeof(arr));
	memset(step,0,sizeof(step));
	arr[0]=a;step[a]=0;used[a]=true;
	for(int i=0,j=1 ; i<j ; i++){
		int now=arr[i];
		int size=fact[now].size();
		for(int k=0 ; k<size ; k++){
			int tmp=fact[now][k];
			if(now+tmp<=b && !used[now+tmp]){
				used[now+tmp]=true;
				step[now+tmp]=step[now]+1;
				arr[j]=now+tmp;
				j++;
				if(now+tmp==b){
					return;
				}
			}
		}
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
	init();
	while(cin>>a>>b){
		if(a==0 && b==0){
			return 0;
		}
		times++;
		cout<<"Case "<<times<<": ";
		if(a>b)
			cout<<"-1\n";
		else if(a==b)
			cout<<"0\n";
		else{
			BFS();
			step[b]==0 ? cout<<"-1\n" : cout<<step[b]<<"\n";
		}
	}
		
 return 0 ;
}

