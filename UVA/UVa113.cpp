#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double n,p;
int main(){
	while(cin>>n>>p){
		cout<<setprecision(10)<<pow(p,1.0/n)<<'\n';
	}
	return 0;
}

