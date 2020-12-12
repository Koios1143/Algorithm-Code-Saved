#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const double radian = asin(1.0)/90;
int a,b,s,m,n;
int main(){
	while(cin>>a>>b>>s>>m>>n && (a||b||s||m||n)){
		double h_len = a*m;
		double v_len = b*n;
		double angle = atan(v_len/h_len)/radian;
		double v = sqrt(pow(h_len,2)+pow(v_len,2))/s;
		cout<<fixed<<setprecision(2)<<angle<<" "<<v<<"\n";
	}
	return 0;
}
