//by Koios1143
#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		//freopen("UVa482.txt","r",stdin);
		//freopen("UVa482.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	int t;
	cin>>t;
	while(t--){
		int n;
		int arr[100000];
		int i=0;
		while(cin>>n){
			arr[i]=n;
			i++;
			if(cin.get()=='\n')
				break;
		}
		pair<int,string> p[i];
		for(int j=0 ; j<i ; j++){
			p[j].first=arr[j];
		}
		for(int j=0 ; j<i ; j++){
			cin>>p[j].second;
		}
		sort(p,p+i);
		for(int j=0 ; j<i ; j++){
			cout<<p[j].second<<"\n";
		}
		if(t!=0)
			cout<<'\n';
	}
	
	
		
 return 0 ;
}

