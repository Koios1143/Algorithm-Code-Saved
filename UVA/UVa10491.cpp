#include<iostream>
#include<iomanip>
using namespace std;
double NCOWS, NCARS, NSHOW;
int main(){
	while(cin>>NCOWS>>NCARS>>NSHOW){
		double tot=NCOWS+NCARS;
		//choose cow
		double p1 = (NCOWS/tot) * (NCARS/(tot-1-NSHOW));
		double p2 = (NCARS/tot) * ((NCARS-1)/(tot-1-NSHOW));
		cout<<fixed<<setprecision(5)<<p1+p2<<"\n";
	}
	return 0;
}
