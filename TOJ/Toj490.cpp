//By Koios1143
#include<iostream>
#include<stack>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n,q,arr[1000010];
int main(){
	init();
	stack< pair<int,int> >res;
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	cin>>q;
	for(int i=0,a,b ; i<q ; i++){
		cin>>a>>b;
		if(i==0){
			res.emplace(a,b);
		}
		else{
			while(!res.empty() && a>=res.top().first){
				res.pop();
			}
			res.emplace(a,b);
		}
	}
	int last=0;
	while(!res.empty()){
		for(int i=last ; i<res.top().first ; i++){
			arr[i]=res.top().second;
		}
		last=res.top().first;
		res.pop();
	}
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<' ';
	}
	cout<<'\n';
	return 0;
}

