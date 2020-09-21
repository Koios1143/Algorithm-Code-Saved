//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
priority_queue<ll,vector<ll>,greater<ll>> Mh;
priority_queue<ll> mh;
ll n;
int main(){
	while(cin>>n){
		if(mh.empty() || mh.top()>n){
			mh.emplace(n);
		}
		else{
			Mh.emplace(n);
		}
		
		if(mh.size() > Mh.size()+1){
			Mh.emplace(mh.top());
			mh.pop();
		}
		else if(Mh.size() > mh.size()+1){
			mh.emplace(Mh.top());
			Mh.pop();
		}
		
		if(mh.size() == Mh.size()){
			cout<<(mh.top()+Mh.top())/2<<'\n';
		}
		else if(mh.size() > Mh.size()){
			cout<<mh.top()<<'\n';
		}
		else{
			cout<<Mh.top()<<'\n';
		}
	}

	return 0;
}

