#include<iostream>
#include<iomanip>
using namespace std;
int arr[1010],t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int avg=0;
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
			avg+=arr[i];
		}
		avg/=n;
		int tot=0;
		for(int i=0 ; i<n ; i++){
			if(arr[i]>avg)
				tot++;
		}
		cout<<fixed<<setprecision(3)<<(double)tot/(double)n*100<<"%\n";
	}
 return 0 ;
}

