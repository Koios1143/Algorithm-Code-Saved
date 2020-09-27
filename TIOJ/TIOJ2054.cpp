//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
int n,l,w;
vector<pii> v;
int solve(){
	int res=0;
	for(int L=0,R=0 ; L<n && R<n ; ){
		if(L==R){
			res=max(res,1);
			R++;
		}
		else if(v[R].first-v[L].first>w){
			L++;
		}
		else{
			vector<pii> tmp;
			for(int i=L ; i<=R ; i++){
				tmp.emplace_back(v[i].second,v[i].first);
			}
			sort(tmp.begin(),tmp.end());
			int m=tmp.size();
			for(int D=0,T=0 ; D<m && T<m ; ){
				if(D==T){
					T++;
				}
				else if(tmp[T].first-tmp[D].first>l){
					D++; 
				}
				else{
					res=max(res,T-D+1);
					T++;
				}
			}
			R++;
		}
	}
	return res;
}
int main(){
	IOS;
	cin>>n>>l>>w;
	for(int i=0,x,y ; i<n ; i++){
		cin>>x>>y;
		v.emplace_back(x,y);
	}
	sort(v.begin(),v.end());
	cout<<solve()<<'\n';
	return 0;
}

