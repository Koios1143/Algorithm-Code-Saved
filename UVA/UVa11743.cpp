//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int t,tmp,odd,even;
int add(int n){
	int ret=0;
	while(n){
		ret+=n%10;
		n/=10;
	}
	return ret;
}
int main(){
	IOS
	cin>>t;
	while(t--){
		odd=0,even=0;
		for(int i=0 ; i<4 ; i++){
			cin>>tmp;
			bool is_odd=true;
			while(tmp){
				if(is_odd)
					odd+=tmp%10;
				else
					even+=add((tmp%10)*2);
				tmp/=10;
				is_odd=!is_odd;
			}
		}
		if((odd+even)%10!=0)
			cout<<"Invalid\n";
		else
			cout<<"Valid\n";
	}
	return 0;
}

