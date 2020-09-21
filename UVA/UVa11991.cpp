//by Koios1143
#include<iostream>
#include<memory.h>
#include<vector>
using namespace std;
int n,m;
vector<int> v[1000000];
int main(){
//---------------------------------
	#ifdef local
		freopen("11991_in.txt","r",stdin);
		freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	while(cin>>n>>m){
			int arr[n+1];
		for(int i=1 ; i<=n ; i++){
			cin>>arr[i];
		}
		memset(v,0,sizeof(v));
		for(int i=1 ; i<=n ; i++){
			v[arr[i]].push_back(i);
		}
		for(int i=0,k,w ; i<m ; i++){
			cin>>k>>w;
			if(v[w].size()<k)
				cout<<0<<"\n";
			else
				cout<<(v[w])[k-1]<<"\n";
		}
	}
	
		
 return 0 ;
}

