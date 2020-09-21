//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
int t,n,m;
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
	cin>>t;
	while(t--){
		cin>>n>>m;
		int arr[n];
		memset(arr,0,sizeof(arr));
		for(int i=0,a,b ; i<m ; i++){
			cin>>a>>b;
			if(a<b)
				swap(a,b);
				arr[b]=arr[a]+1;
		}
		for(int i=1 ; i<n ; i++){
			cout<<arr[i]<<"\n";
		}
	}
	
		
 return 0 ;
}

