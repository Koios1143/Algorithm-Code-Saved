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
	while(cin>>n){
		int ans=0;
		if(n>=40){
			ans=100;
			n=0;
		}
		if(n>=21 && n<40){
			ans+=(n-20)*1;
			n=20;
		}
		if(n>=11 && n<=20){
			ans+=(n-10)*2;
			n=10;
		}
		if(n>=0 && n<=10){
			ans+=(n-0)*6;
			n=0;
		}
		cout<<ans<<'\n';
	}


	return 0;
}

