//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n;
int _max,_min;
int main(){
	init();
	while(cin>>n){
		_max=-2147483648;
		_min=2147483647;
		for(int i=0,tmp ; i<n ; i++){
			cin>>tmp;
			_max=max(_max,tmp);
			_min=min(_min,tmp);
		}
		cout<<_min<<' '<<_max<<' ';
		if(_max-_min+1 == n)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}


	return 0;
}

