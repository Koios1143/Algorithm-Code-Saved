#include<iostream>
using namespace std;
int arr[55];
int cnt,n,ans,Case=1;
int main(){
	while(cin>>n && n){
		cnt=0;
		ans=0;
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
			cnt+=arr[i];
		}
		cnt/=n;
		for(int i=0 ; i<n ; i++){
			if(arr[i]>cnt)
				ans+=(arr[i]-cnt);
		}
		cout<<"Set #"<<Case++<<"\n";
		cout<<"The minimum number of moves is "<<ans<<".\n\n";
	}
	return 0;
}

