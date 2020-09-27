//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int n,q,k,arr[100010];
string solve(){
	for(int i=0,j=0 ; i<n && j<n ; ){
		int calc=abs(arr[i]-arr[j]);
		if(calc == k){
			return "YES";
		}
		else{
			if(calc < k){
				j++;
			}
			else{
				i++;
			}
		}
	}
	return "NO";
}
int main(){
	IOS;
	cin>>n>>q;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0 ; i<q ; i++){
		cin>>k;
		cout<<solve()<<"\n";
	}
	return 0;
}

