//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int ans=0,arr[5][6];
int main(){
	IOS;
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<6 ; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ;  j<6 ; j++){
			// right
			if(j<=2){
				if(arr[i][j]==arr[i][j+1] && arr[i][j]==arr[i][j+2]){
					ans++;
				}
			}
			// down
			if(i<=3){
				if(arr[i][j]==arr[i+1][j] && arr[i][j]==arr[i+2][j]){
					ans++;
				}
			}
		}
	}
	if(ans>0){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
	return 0;
}

