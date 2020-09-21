//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
long long n,m,arr[200010];
int main(){
	init();
	cin>>n;
	for(long long i=1 ; i<=n ; i++){
		cin>>arr[i];
		if(i)
			arr[i]+=arr[i-1];
	}
	cin>>m;
	for(long long i=0,a,b ; i<m ; i++){
		cin>>a>>b;
		if(a>b)
			swap(a,b);
		cout<<arr[b]-arr[a-1]<<'\n';
	}
	return 0;
}

