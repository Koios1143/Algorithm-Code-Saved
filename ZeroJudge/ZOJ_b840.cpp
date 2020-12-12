//By Koios1143
#include<iostream>
using namespace std;
int n,arr[25][25],ans=0,cnt=0;
int main(){
	cin>>n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			for(int k=0 ; k+i<n ; k++){
				for(int l=0 ; l+j<n ; l++){
					cnt=0;
					for(int p=i ; p<=i+k ; p++){
						for(int q=j ; q<=j+l ; q++){
							cnt+=arr[p][q];
						}
					}
					ans=max(cnt, ans);
				}
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}

