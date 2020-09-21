//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,m,s=0,arr[25];

int main(){
	IOS
	cin>>n>>m;
	for(int i=0 ; i<n ; i++){
		int Max=0;
		for(int j=0,tmp ; j<m ; j++){
			cin>>tmp;
			Max=max(Max,tmp);
		}
		arr[i]=Max;
		s+=Max;
	}
	cout<<s<<'\n';
	bool found = false;
	for(int i=0 ; i<n ; i++){
		if(s%arr[i] == 0){
			if(found) cout<<' ';
			else found=true;
			cout<<arr[i];
		}
	}
	if(!found) cout<<"-1";
	cout<<'\n';
	return 0;
}

