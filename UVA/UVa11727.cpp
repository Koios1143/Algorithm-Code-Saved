#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a[3],n;
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		cout<<"Case "<<i<<": "<<a[1]<<"\n";
	}
 return 0 ;
}

