//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n,k,arr[2000010];
int ans=0;
int main(){
	init();
	cin>>n>>k;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	for(int i=0 ; i<n ; i++){
		for(int j=i+1 ; j<n ; j++){
			ans=max(ans,arr[j]-arr[i]);
		}
	}
	cout<<ans<<'\n';

	return 0;
}

