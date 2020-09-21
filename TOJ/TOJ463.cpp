#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int cucumber,absorb,above=0,below=0,tot=0;
	cin>>cucumber>>absorb;
	pair<int,int>val[cucumber];
	for(int i=0 ; i<cucumber ; i++){
		cin>>val[i].first>>val[i].second;
	}
	sort(val,val+cucumber);
	for(int i=0 ; i<absorb*2 ; i++){
		tot+=val[cucumber-1-i].first;
	}
	cout<<tot<<"\n";

 return 0 ;
}

