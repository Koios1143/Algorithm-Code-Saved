//By Koios1143
#include<iostream>
#include<cmath>
using namespace std;
int N_to_dec(int n, int num){
	int ans=0;
	for(int i=0 ; num ; i++, num/=10){
		ans+=(num%10)*pow(n,i);
	}
	return ans;
}
string dec_to_M(int m, int num){
	string ans="";
	for( ; num ; num/=m){
		ans = char(num%m + '0') + ans;
	}
	return ans;
}
int main(){
	int A,B,C;
	cin>>A>>B>>C;
	if(C==0)
		cout<<"0\n";
	else
		cout<<dec_to_M(B,N_to_dec(A,C))<<"\n";
	return 0;
}

