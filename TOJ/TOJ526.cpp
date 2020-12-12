//By Koios1143
#include<iostream> 
using namespace std;
int main(){
	int n,m=0;
	cin>>n;
	while(n){
		m*=10;
		m+=(n%10);
		n/=10;
	}
	cout<<m<<'\n';
	return 0;
}
