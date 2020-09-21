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
	int n,m;
	cin>>n>>m;
	int tot=2;
	while(tot%n){
		tot=tot*2+1;
	}
	if(tot%m){
		cout<<"left\n";
	}
	else{
		cout<<"right\n";
	}


	return 0;
}

