//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int t;
ll w,h,k;
int main(){
	IOS;
	cin>>t;
	while(t--){
		cin>>w>>h>>k;
		ll A=(w-(k-1)),B=(h-(k-1));
		A=(A>0 ? A : 0),B=(B>0 ? B : 0);
		ll row=h*A;
		ll col=w*B;
		ll diag=2*A*B;
		cout<<row+col+diag<<"\n";
	}
	return 0;
}

