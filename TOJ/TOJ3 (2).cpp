//By Koios1143
#include<iostream> 
using namespace std;
int gcd(int n,int m){
	if(n%m == 0){
		return m;
	}
	return gcd(m, n%m);
}
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<gcd(a,b)<<"\n";	
	}
	return 0;
}

