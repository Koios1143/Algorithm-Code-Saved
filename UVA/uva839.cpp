#include<iostream>
using namespace std;
int n,a,b,c,d;
bool YN=true;
int f(){
	int a,b,c,d,left=0,right=0,lw=0,rw=0;
	cin>>a>>b>>c>>d;
	left=a*b,right=c*d,lw=a,rw=c;
	if(a==0){
		lw=f();
		left=b*lw;
	}
	if(c==0){
		rw=f();
		right=d*rw;
	}
	if(left!=right){
		YN=false;
	}
	return lw+rw;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	bool first=false;
	cin>>n;
	while(n--){
		if(!first){
			first=true;
		}
		else{
			cout<<'\n';
		}
		YN=true;
		f();
		if(YN){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
