//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
void print_star(int m){
	//up_tree
	for(int i=0 ; i<m-3 ; i++){
		for(int j=0 ; j<m-1-i ; j++){
			cout<<' ';
		}
		for(int j=0 ; j<(i+1)*2-1 ; j++){
			cout<<'*';
		}
		cout<<'\n';
	}
	//mid_lines
	for(int i=0 ; i<2*m-1 ; i++){
		cout<<'*';
	}
	cout<<"\n ";
	for(int i=0 ; i<2*m-3 ; i++){
		cout<<'*';
	}
	cout<<"\n";
	for(int i=0 ; i<2*m-1 ; i++){
		cout<<'*';
	}
	cout<<'\n';
	//down_tree
	for(int i=0 ; i<m-3 ; i++){
		for(int j=0 ; j<3+i ; j++){
			cout<<' ';
		}
		for(int j=0 ; j<(m-3)*2-1-2*i ; j++){
			cout<<'*';
		}
		cout<<'\n';
	}
}
int main(){
	init();
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		print_star(m);
	}


	return 0;
}

