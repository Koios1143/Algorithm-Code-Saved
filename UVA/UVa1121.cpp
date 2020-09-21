//by Koios1143
#include<iostream>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		freopen("UVa1121.txt","r",stdin);
		//freopen("UVa1121_out.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	
	int n,s;
	while(cin>>n>>s){
		int arr[n+1];
		arr[0]=0;
		for(int i=1,tmp ; i<=n ; i++){
			cin>>tmp;
			arr[i]=arr[i-1]+tmp;
		}
		bool YN=false;
		for(int num=1 ; num<=n ; num++){
			if(YN)
				break;
			for(int cnt=num ; cnt<=n ; cnt++){
				int tmp=arr[cnt]-arr[cnt-num];
				//cout<<"num="<<num<<" cnt="<<cnt<<" "<<tmp<<"\n";
				if(tmp>=s){
					cout<<num<<"\n";
					YN=true;
					break;
				}
			}
		}
		if(!YN)
			cout<<"0\n";
	}
	
		
 return 0 ;
}

