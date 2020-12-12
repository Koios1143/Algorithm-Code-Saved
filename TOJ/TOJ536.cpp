//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int n,m,p,q;
	cin>>n>>m>>p>>q;
	if((p<=n && q>=m) || (p<=m && p>=n) || (q<=m && q>=n))
		cout<<"yes\n";
	else
		cout<<"no\n";
	return 0;
}

