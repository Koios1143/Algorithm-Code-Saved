//By Koios1143
#include<iostream>
#include<algorithm>
#define int long long 
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first*b.second < b.first*a.second)
		return true;
	else
		return false;
}
pair<int,int> arr[1000010];
signed main(){
	init();
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i].first;
	}
	for(int i=0 ; i<n ; i++){
		cin>>arr[i].second;
	}
	sort(arr,arr+n,cmp);
	int now=arr[0].first;
	int ans=0;
	for(int i=1 ; i<n ; i++){
		ans+=now*arr[i].second;
		now+=arr[i].first;
	}
	cout<<ans<<'\n';

	return 0;
}

