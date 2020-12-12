//By Koios1143
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int gcd(int n, int m){
	if(n%m == 0){
		return m;
	}
	return gcd(m, n%m);
}
int main(){
	int n;
	while(cin>>n && n){
		int arr[55];
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}
		int a=0,b=0;
		for(int i=0 ; i<n ; i++){
			for(int j=i+1 ; j<n ; j++){
				a++;
				if(gcd(arr[i], arr[j]) == 1)
					b++;
			}
		}
		if(b==0)
			cout<<"No estimate for this data set.\n";
		else
			cout<<fixed<<setprecision(6)<<sqrt((double)(a*6.0/b))<<"\n";
	}
	return 0;
}

