#include<iostream>
using namespace std;
int f(int n){
	int ans=0;
	while(n){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int g(int n){
	int ans=f(n);
	while(ans>=10){
		ans=f(ans);
	}
	return ans;
}
int in;
int main(){
	while(cin>>in){
		if(in==0)
			return 0;
		cout<<g(in)<<"\n";
	}
 return 0 ;
}

