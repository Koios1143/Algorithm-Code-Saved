//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
double coin[11]={100,50,20,10,5,2,1,0.5,0.2,0.1,0.05};
int ans=0;
void res(double now){
	if(now==0.0){
		ans++;
		return;
	}
	if(now<0.05)
		return;
	for(int i=0 ; i<11 ; i++){
		if(now>=coin[i])
			res(now-coin[i]);
	}
}
double n;
int main(){
	init();
	while(cin>>n){
		ans=0;
		res(n);
		cout<<ans<<'\n';
	}


	return 0;
}

