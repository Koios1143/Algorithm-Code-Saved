//By Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int arr[1005];
int main(){
	init();
	int n;
	while(cin>>n){
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int j=0 ; j<n ; j++){
			if(j)
				cout<<' ';
			cout<<arr[j];
		}
		cout<<'\n';
	}


	return 0;
}

