//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
void print_ans(int n){
	if(n<2){
		cout<<n;
		return;
	}
	print_ans(n/2);
	cout<<n%2;
	return;
}
int main(){
	init();
	int n;
	while(cin>>n){
		print_ans(n);
		cout<<'\n';
	}


	return 0;
}

