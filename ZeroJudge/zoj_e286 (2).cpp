//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int tmp,A_win=0,B_win=0,tot_a=0,tot_b=0;;
int main(){
	IOS
	for(int k=0 ; k<2 ; k++){
		tot_a = tot_b = 0;
		for(int i=0 ; i<4 ; i++){
			cin>>tmp;
			tot_a+=tmp;
		}
		for(int j=0 ; j<4 ; j++){
			cin>>tmp;
			tot_b+=tmp;
		}
		cout<<tot_a<<":"<<tot_b<<"\n";
		if(tot_a>tot_b)
			A_win++;
		else if(tot_a<tot_b)
			B_win++;
	}
	if(A_win>B_win)
		cout<<"Win\n";
	else if(B_win>A_win)
		cout<<"Lose\n";
	else
		cout<<"Tie\n";
	return 0;
}

