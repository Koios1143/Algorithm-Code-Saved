//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
long long n,m;
long long owo[105][105];
long long C(long long x,long long y){
	if(x==y || y==0) return 1;
	if(x<y) return 0;
	if(owo[x][y]) return owo[x][y];
	return owo[x][y] = C(x-1,y)+C(x-1,y-1);
}
int main(){
	IOS;
	while(cin>>n>>m && !(n==0 && m==0)){
		cout<<n<<" things taken "<<m<<" at a time is "<<C(n,m)<<" exactly.\n";
	}
	return 0;
}

