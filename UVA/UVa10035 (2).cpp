//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
string a,b;
int cnt=0;
void solve(){
	int A=a.size()-1,B=b.size()-1;
	int carry=0,num_A,num_B;
	while(A>=0 || B>=0){
		num_A=(A<0) ? 0 : a[A]-'0';
		num_B=(B<0) ? 0 : b[B]-'0';
		if(num_A+num_B+carry>9){
			carry=(num_A+num_B+carry)/10;
			cnt++;
		}
		else
			carry=0;
		A--,B--;
	}
}
int main(){
	IOS
	while(cin>>a>>b && (a!="0" || b!="0")){
		cnt=0;
		solve();
		if(cnt>1)
			cout<<cnt<<" carry operations.\n";
		else if(cnt==1)
			cout<<"1 carry operation.\n";
		else
			cout<<"No carry operation.\n";
	}
	return 0;
}

