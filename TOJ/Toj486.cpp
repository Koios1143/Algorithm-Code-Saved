//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
string a;
long long b,t=1,res=0;
int main(){
	init();
	cin>>a>>b;
	b=abs(b);
	if(b==0){
		cout<<"No\n";
		return 0;
	}
	int end=(a[0]=='-' ? 1 : 0);
	for(int i=a.size()-1 ; i>=end ; i--,t=(t*10)%b){
		res = (res + (a[i]-'0')*t)%b;
	}
	if(res==0){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}

	return 0;
}

