//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,m,k;
int solve(int people, int last){
	if(last==1){
		int res=m%people;
		return res;
	}
	if(last==n){
		int res=(solve(people-1, last-1)+m+1)%people;
		return res;
	}
	else{
		int res=(solve(people-1, last-1)+m)%people;
		return res;
	}
}
int main(){
	IOS
	cin>>n>>m>>k;
	cout<<solve(n,k)+1<<"\n";
	return 0;
}

