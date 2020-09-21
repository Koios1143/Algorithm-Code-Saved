//By Koios1143
#include<iostream>
using namespace std;
long long n,arr[5000005],ans=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	cin>>arr[0];
	ans=arr[0];
	for(long long i=1 ; i<n ; i++){
		cin>>arr[i];
		arr[i]=max(arr[i-1]+arr[i],arr[i]);
		ans=max(arr[i],ans);
	}
	cout<<ans<<"\n";
	return 0;
}

