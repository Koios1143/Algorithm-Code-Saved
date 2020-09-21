//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
long long n,k,base[50005];
bool ok(int len){
	int numbers=0;
	for(int i=0,now=base[0]+len ; i<n && numbers<=k+1 ; ){
		now=base[i]+len;
		numbers++;
		while(i<n && base[i]<=now)
			i++;
		
	}
	if(numbers<=k)
		return true;
	else
		return false;
}
int main(){
	IOS
	cin>>n>>k;
	for(int i=0 ; i<n ; i++){
		cin>>base[i];
	}
	sort(base,base+n);
	int low=1,high=(base[n-1]-base[0])/k+1;
	while(low<high){
		int mid=(low+high)>>1;
		if(ok(mid))
			high=mid;
		else
			low=mid+1;
	}
	cout<<low<<"\n";
	return 0;
}

