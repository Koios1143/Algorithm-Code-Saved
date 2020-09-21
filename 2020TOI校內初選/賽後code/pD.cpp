//By Koios1143
#include<iostream>
#include<vector>
using namespace std;
long long i,j,px,n,m,arr[300005],map[300005],ans[300005];
long long k;
vector<long long> cycle[300005];
pair<int,int> table[300005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(i=1 ; i<=n ; i++){
		cin>>arr[i];
	}
	for(i=1 ; i<=n ; i++){
		cin>>map[i];
	}
	cin>>k;
	
	for(i=1 ; i<=n ; i++){
		px=i;
		if(table[px].first==0){
			cycle[i].push_back(px);
			table[px]=make_pair(i,0);
			for(j=1 ; j<=n ; j++){
				px=map[px];
				if(px==i){
					break;
				}
				else{
					cycle[i].push_back(px);
					table[px]=make_pair(i,j);
				}
			}
		}
	}
	/*cout<<"-- debugger --\n";
	for(j=1 ; j<=i ; j++){
		cout<<"cycle["<<j<<"]: ";
		for(auto l : cycle[j]){
			cout<<l<<' ';
		}
		cout<<"\n";
	}
	cout<<"-- end dubug --\n";*/
	for(i=1 ; i<=n ; i++){
		int from=table[i].first;
		int pos=table[i].second;
		int cycle_lenth=cycle[from].size();
		ans[cycle[from][(pos+k%cycle_lenth)%cycle_lenth]]=arr[i];
	}
	cout<<ans[1];
	for(i=2 ; i<=n ; i++){
		cout<<' '<<ans[i];
	}
	cout<<'\n';
	return 0;
}

