//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,m,k;
vector<pii> v;
int main(){
	IOS
	cin>>n>>m>>k;
	for(int i=1 ; i<=n ; i++) v.emplace_back(i,i);
	int last=0;
	while(k--){
		last=(last+m-1)%n;
		n--;
		v[last].first=INT_MAX;
		sort(v.begin(),v.end());
	}
	cout<<v[(last)%n].second<<"\n";
	return 0;
}

