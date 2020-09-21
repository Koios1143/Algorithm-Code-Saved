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
	int tot=0;
	for(int son=1,sum=1 ; son<=30 ; son++,sum+=son){
		tot++;//son
		int daughter = son;
		int grand = sum;
		tot += (daughter + daughter*grand);
	}
	cout<<tot<<'\n';



	return 0;
}

