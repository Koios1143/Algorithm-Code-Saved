//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int a,b,c,d;
int tot_A_A=0;
int tot_A_B=0;
int tot_B_A=0;
int tot_B_B=0;
int A=0;
int B=0;
int main(){
	init();
	cin>>a>>b>>c>>d;
	tot_A_A=a+b+c+d;
	cin>>a>>b>>c>>d;
	tot_A_B=a+b+c+d;
	cout<<tot_A_A<<":"<<tot_A_B<<'\n';
	cin>>a>>b>>c>>d;
	tot_B_A=a+b+c+d;
	cin>>a>>b>>c>>d;
	tot_B_B=a+b+c+d;
	cout<<tot_B_A<<":"<<tot_B_B<<'\n';
	if(tot_A_A > tot_A_B){
		A++;
	}
	if(tot_A_B > tot_A_A){
		B++;
	}
	if(tot_B_A > tot_B_B){
		A++;
	}
	if(tot_B_B > tot_B_A){
		B++;
	}
	if(A>B){
		cout<<"Win\n";
	}
	else if(B>A){
		cout<<"Lose\n";
	}
	else{
		cout<<"Tie\n";
	}
	return 0;
}

