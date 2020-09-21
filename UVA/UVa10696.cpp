#include<iostream>
using namespace std;
long long f91(long long n){
	if(n<=100)
		return f91(f91(n+11));
	else
		return n-10;
}
long long in;
int main(){
	while(cin>>in){
		if(in==0)
			return 0;
		cout<<"f91("<<in<<") = "<<f91(in)<<"\n";
	}
 return 0 ;
}

