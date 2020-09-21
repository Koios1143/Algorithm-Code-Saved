//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,arr[10000];
int main(){
	IOS
	while(cin>>n && n){
		cin>>arr[1];
		for(int i=2,tmp ; i<=n ; i++){
			cin>>tmp;
			arr[i]=arr[i-1]+tmp;
		}
		int ans=-2147483647;
		for(int i=1 ; i<=n ; i++){
			for(int j=i ; j<=n ; j++){
				ans=max(ans, (arr[j]-arr[i-1]));
			}
		}
		if(ans>0)
			cout<<"The maximum winning streak is "<<ans<<".\n";
		else
			cout<<"Losing streak.\n";
	}
	return 0;
}

