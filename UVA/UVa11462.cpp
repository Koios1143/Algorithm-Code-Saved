//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
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
	int n;
	while(cin>>n){
		if(n==0)
			return 0;
		int arr[101];
		memset(arr,0,sizeof(arr));
		for(int i=0,tmp ; i<n ; i++){
			cin>>tmp;
			arr[tmp]++;
		}
		bool out=false;
		for(int i=1 ; i<101 ; i++){
			for(int j=0 ; j<arr[i] ; j++){
				if(out)
					cout<<' ';
				else
					out=true;
				cout<<i;
				
			}
		}
		cout<<'\n';
	}
	
		
 return 0 ;
}

