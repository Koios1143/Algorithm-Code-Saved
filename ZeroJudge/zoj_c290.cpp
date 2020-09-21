//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
string s;
int a=0,b=0;
int main(){
	IOS
	cin>>s;
	bool A=true;
	for(int i=s.size()-1 ; i>=0 ; i--){
		if(A)
			a+=(s[i]-'0');
		else
			b+=(s[i]-'0');
		A=!A;
	}
	cout<<abs(a-b)<<"\n";
	return 0;
}

