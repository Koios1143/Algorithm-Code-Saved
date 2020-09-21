//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
void print_ans(int depth){
	if(depth==0){
		return;
	}
	int n;
	cin>>n;
	print_ans(depth-1);
	cout<<n<<'\n';
}
int main(){
	init();
	int n;
	cin>>n;
	print_ans(n);
	return 0;
}

