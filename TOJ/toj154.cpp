#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int n;
	while(t--){
		pair<int,int>arr[100010];
		cin>>n;
		long long ans=0;
		for(int i=1 ; i<=n ; i++){
			arr[i].second=i;
			cin>>arr[i].first;
			ans+=arr[i].first;
		}
		for(int i=n ; i>=1 ; i--){
			//cout<<"arr["<<i<<"]={"<<arr[i].first<<","<<arr[i].second<<"}\n";
			ans+=arr[i].first*(n-i+1);
			cout<<arr[i].second;
			if(i!=1) cout<<' ';
		}
		cout<<"\n";
		cout<<ans<<"\n";
	}


 return 0 ;
}

