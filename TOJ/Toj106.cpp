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
	int tot=2;
	while(tot%71 != 0){
		tot = tot*2+1;
	}
	if(tot %3 == 0){
		cout<<"right\n";
	}
	else{
		cout<<"left\n";
	}


	return 0;
}

