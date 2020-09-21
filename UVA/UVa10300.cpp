#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t,n;
	double a,b,c;
	cin>>t;
	for(int i=0 ; i<t ; i++){
		double sum=0;
		cin>>n;
		for(int j=0 ; j<n ; j++){
			cin>>a>>b>>c;
			sum+=(a/b)*c*b;
		}
		cout<<(int)sum<<"\n";
	}
 return 0 ;
}

