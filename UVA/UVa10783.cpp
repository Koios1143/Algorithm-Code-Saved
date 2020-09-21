#include<iostream>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	for(int i=1 ; i<=t ; i++){
		int sum=0;
		cin>>a>>b;
		if(a>b)
			swap(a,b);
		for(int j=a ; j<=b ; j++){
			sum+= (j%2==0) ? 0 : j;
		}
		cout<<"Case "<<i<<": "<<sum<<"\n";
	}
 return 0 ;
}

