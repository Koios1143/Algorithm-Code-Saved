//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int t,n;
int main(){
	init();
	while(cin>>t){
		double tot=0;
		for(int i=0 ; i<t ; i++){
			cin>>n;
			tot+=n;
		}
		if(tot/(double)t > 59.0)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}


	return 0;
}

