//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
long long n,m,r,cnt;
long long reverse(long long x){
	int res=0;
	while(x){
		res*=10;
		res+=x%10;
		x/=10;
	}
	return res;
}
bool Palin(long long x){
	string s="";
	while(x){
		s=(char)(x%10 + '0') + s;
		x/=10;
	}
	for(int i=0, j=s.size()-1 ; i<s.size()/2 ; i++, j--){
		if(s[i]!=s[j])
			return false;
	}
	return true;
}
int main(){
	IOS;
	cin>>n;
	for(long long i=0 ; i<n ; i++, cnt=0){
		cin>>m;
		do{
			m+=reverse(m);
			cnt++;
		}while(!Palin(m));
		cout<<cnt<<" "<<m<<"\n";
	}
	return 0;
}

