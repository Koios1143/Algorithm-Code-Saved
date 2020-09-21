//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int t,n,m;
int main(){
	IOS
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a=(n+m)/2;
		int b=n-a;
		if(a<0 || b<0 || abs(a-b)!=m)
			cout<<"impossible\n";
		else
			cout<<a<<" "<<b<<"\n";
	}
	return 0;
}

