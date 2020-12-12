#include<iostream>
#include<cmath>
using namespace std;
int n,m;
int main(){
	while(cin>>n>>m){
		double ans=0;
		int k=(n/2 > m ? m : n-m);
		int i=1;
		while(i<=k)
			ans += (log10(n--) - log10(i++));
		cout<<(int)ans+1<<'\n';
	}
	return 0;
}

