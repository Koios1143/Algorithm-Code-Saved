//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int n,k,Min=0,Max=0,arr[605];
int search(int l,int r,int p){
	while(l<r){
		int mid=(l+r)>>1;
		int dis=arr[0],day=0;
		for(int i=1 ; i<=n ; i++){
			if(dis+arr[i]>mid){
				day++;
				dis=arr[i];
			}
			else dis+=arr[i];
		}
		if(dis<=mid) day++;
		if(day>p) l=mid+1;
		else r=mid;
	}
	return l;
}
int main(){
	while(cin>>n>>k){
		Min=Max=0;
		for(int i=0 ; i<=n ; i++){
			cin>>arr[i];
			Min=max(Min,arr[i]);
			Max+=arr[i];
		}
		cout<<search(Min,Max,k+1)<<"\n";
	}
	return 0;
}

