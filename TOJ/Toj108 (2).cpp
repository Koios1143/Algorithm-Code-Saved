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
	int a,b,c;
	cin>>a>>b>>c;
	int tot = a;
	for(int i=0,gash,nums ; i<b ; i++){
		cin>>gash>>nums;
		tot += gash*nums;
	}
	tot -= c;
	cout<<tot/4<<'\n';


	return 0;
}

