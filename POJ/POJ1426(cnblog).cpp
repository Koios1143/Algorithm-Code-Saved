#include<iostream>
using namespace std;
int n;
int dfs(unsigned long long x,int t){
	if(t>19)	return 0;
	if(x%n==0){
		cout<<x<<"\n";
		return 1;
	}
	if(dfs(x*10,t+1))return 1;
	if(dfs(x*10+1,t+1))return 1;
	return 0;
}
int main(){
	while(cin>>n){
		if(n==0)
			break;
		dfs(1,0);
	}
 return 0 ;
}

