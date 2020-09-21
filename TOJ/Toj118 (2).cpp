//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int table[1010],n,m;
int main(){
	init();
	cin>>n;
	for(int i=0,a,b ; i<n ; i++){
		cin>>a>>b;
		table[a] = a*b;
	}
	cin>>m;
	for(int i=0,a,b ; i<m ; i++){
		cin>>a>>b;
		if(table[a] == b){
			cout<<"The shopkeeper is honest.\n";
		}
		else{
			cout<<b-table[a]<<'\n';
		}
	}


	return 0;
}

