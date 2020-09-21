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
	int prince=0;
	int princess=0;
	int a,b;
	while(n--){
		cin>>a>>b;
		if((a==2&&b==5) || (a==0&&b==2) || (a==5&&b==0)){
			prince++;
		}
		else if(a==b){
			continue;
		}
		else{
			princess++;
		}
	}
	if(prince>princess){
		cout<<"The prince wins.\n";
	}
	else if(princess>prince){
		cout<<"The princess wins.\n";
	}
	else{
		cout<<"The referee wins.\n";
	}

	return 0;
}

