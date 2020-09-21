//By Koios1143
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n,m;
int arr[105];
bool DP[105][20010];
int main(){
	init();
	cin>>n>>m;
	vector<int>ans;
	for(int i=0,tmp ; i<n ; i++){
		cin>>tmp;
		arr[i]=tmp;
	}
	DP[0][arr[0]+10000]=true;
	DP[0][-arr[0]+10000]=true;
	for(int i=1 ; i<n ; i++){
		for(int j=0 ; j<20000 ; j++){
			if(DP[i-1][j]==true){
				DP[i][j-arr[i]]=true;
				DP[i][j+arr[i]]=true;
			}
		}
	}
	for(int i=0 ; i<=20000 ; i++){
		if(DP[n-1][i]){
			ans.push_back(i-10000);
		}
	}
	for(int i=0,q ; i<m ; i++){
		cin>>q;
		cout<<*lower_bound(ans.begin(),ans.end(),q)<<"\n";
	}
	return 0;
}
//buttom-up DP version
//O(n*10^4)
