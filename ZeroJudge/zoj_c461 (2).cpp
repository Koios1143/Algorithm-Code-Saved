//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
bool c;
int A,B;
int main(){
	IOS
	while(cin>>A>>B>>c){
		bool a=(A>0) ? true : false;
		bool b=(B>0) ? true : false;
		bool out=false;
		if((a && b) == c){
			cout<<"AND\n";
			out=true;
		}
		if((a || b) == c){
			cout<<"OR\n";
			out=true;
		}
		if((a ^ b) == c){
			cout<<"XOR\n";
			out=true;
		}
		if(!out)
			cout<<"IMPOSSIBLE\n";
	}
	return 0;
}

