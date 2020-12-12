//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int p,q,a=0,b=0;
	cin>>p>>q;
	if(p%2==0) a++;
	if(p%3==0) b++;
	if(q%2==0) a++;
	if(q%3==0) b++;
	cout<<a<<" "<<b<<'\n';
	return 0;
}

