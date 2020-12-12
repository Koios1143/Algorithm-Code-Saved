//By Koios1143
#include<iostream>
#include<cmath> 
using namespace std;
const double eps=1e-7;
double a,b,c,d;
int main(){
	cin>>a>>b>>c>>d;
	double result = a*d-b*c;
	if(fabs(result)>=eps){
		cout<<"1\n";
	}
	else{
		cout<<"0\n";
	}
	return 0;
}
