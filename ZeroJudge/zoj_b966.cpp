//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n;
vector<pii> v,res;
int main(){
	IOS
	cin>>n;
	for(int i=0,l,r ; i<n ; i++){
		cin>>l>>r;
		v.emplace_back(l,r);
	}
	sort(v.begin(),v.end());
	int Max=0;
	for(auto i: v){
		if(i.second>Max){
			res.push_back(i);
			Max=i.second;
		}
	}
	int ans=0;
	for(int i=0 ; i<res.size()-1 ; i++){
		if(res[i].second>=res[i+1].first){
			res[i+1].first=res[i].first;
			
		}
		else{
			ans+=res[i].second-res[i].first;
		}
	}
	ans+=res[res.size()-1].second-res[res.size()-1].first;
	cout<<ans<<"\n";

	return 0;
}

