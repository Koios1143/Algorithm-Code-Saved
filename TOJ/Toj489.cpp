//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
long long n,k,arr[200010],tot[200010];
long long DP[200010];
int main(){
	init();
	cin>>n>>k;
	for(long long i=1 ; i<=n ; i++){
		cin>>arr[i];
		if(i==0){
			tot[i]=arr[i];
		}
		else{
			tot[i]=tot[i-1]+arr[i];
		}
	}
	for(int i=k ; i<=n ; i++){
		DP[i]=max(DP[i-k-1]+(tot[i]-tot[i-k]),DP[i-1]);
	}
	cout<<DP[n]<<"\n";
	return 0;
}

