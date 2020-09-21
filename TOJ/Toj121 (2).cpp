//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}

int main(){
	init();
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<i ; j++){
			cout<<' ';
		}
		for(int j=0 ; j<2*(n-i)-1 ; j++){
			cout<<(char)('A'+n-i-1);
		}
		cout<<'\n';
	}


	return 0;
}

