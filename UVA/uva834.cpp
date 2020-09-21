//by Koios1143
#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<'[';
		cout<<a/b<<';';
		a-=b*(a/b);
		while(a!=1){
			swap(a,b);
			if(a/b){
				cout<<a/b<<',';
				a-=b*(a/b);
			}
		}
		cout<<b<<"]\n";
	}
	
		
 return 0 ;
}
