#include<iostream>
#include<cmath>
using namespace std;
long long t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		n*=567;
		n/=9;
		n+=7492;
		n*=235;
		n/=47;
		n-=498;
		n=abs(n);
		n%=100;
		n/=10;
		cout<<n<<"\n";
	}
 return 0 ;
}

