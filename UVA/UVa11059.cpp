#include<iostream>
using namespace std;
int n,arr[20],Case=1;
long long ans,tmp;
int main(){
	while(cin>>n){
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}
		ans=0;
		for(int i=0 ; i<n ; i++){
			tmp=1;
			for(int j=i ; j<n ; j++){
				tmp*=arr[j];
				ans=max(ans,tmp);
			}
		}
		cout<<"Case #"<<Case++<<": The maximum product is "<<ans<<".\n\n"; 
	}
	return 0;
}

