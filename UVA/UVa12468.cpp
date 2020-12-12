//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==-1 && b==-1)
			break;
		int forward = b-a;
		int reverse = a-b;
		if(forward<0)
			forward+=100;
		if(reverse<0)
			reverse+=100;
		cout<<min(forward, reverse)<<"\n";
	}

	return 0;
}

