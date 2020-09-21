//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,arr[1000],lucky=999,unlucky=-1;
int main(){
	IOS
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
		if(arr[i]>=60)
			lucky = min(lucky,arr[i]);
		else
			unlucky = max(unlucky,arr[i]);
	}
	sort(arr,arr+n);
	for(int i=0 ; i<n ; i++){
		if(i)
			cout<<" ";
		cout<<arr[i];
	}
	cout<<"\n";
	if(unlucky == -1)
		cout<<"best case\n";
	else
		cout<<unlucky<<"\n";
	if(lucky==999)
		cout<<"worst case\n";
	else
		cout<<lucky<<"\n";
	return 0;
}

