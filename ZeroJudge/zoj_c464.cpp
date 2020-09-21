//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
long long n,px[100005],w[100005],f[100005],tot=0;
bool cmp(int i,int j){
	return w[i]*f[j] < w[j]*f[i];
}
int main(){
	IOS
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>w[i];
		px[i]=i;
	}
	for(int i=0 ; i<n ; i++){
		cin>>f[i];
	}
	sort(px,px+n,cmp);
	long long ans=0;
	for(int i=0 ; i<n ; i++){
		ans+=f[px[i]]*tot;
		tot+=w[px[i]];
	}
	cout<<ans<<"\n";
	return 0;
}

