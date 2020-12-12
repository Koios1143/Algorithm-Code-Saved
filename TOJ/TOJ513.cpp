//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int start=a*60+b;
	int end=c*60+d;
	if(end-start<0){
		end+=24*60;
	}
	int res=end-start;
	cout<<"totally "<< res/60 <<" hours and "<< res%60 <<" minutes.\n";

	return 0;
}

