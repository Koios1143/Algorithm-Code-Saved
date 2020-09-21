//By Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
long long n,k,arr[200010];
int main(){
	init();
	cin>>n>>k;
	for(long long i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long ans=0;
	long long tmp_tot=0;
	for(int i=0,j=0 ; i<n ; i++){
		if(j<i){
			j=i;
			tmp_tot=arr[i];
		}
		for( ; j<n && arr[j]-arr[i]<=k ; j++){
			tmp_tot+=arr[j];
		}
		ans=max(ans,tmp_tot);
		tmp_tot-=arr[i];
	}
	cout<<ans<<'\n';
	return 0;
}

