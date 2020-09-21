#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
		int ans=0;
		if(a==c&&b==d){
			ans=1;
		}
		else if(a==c){
			ans=abs(b-d)+1; 
		}
		else if(b==d){
			ans=abs(a-c)+1;
		}
		else{
			ans=abs(b-d)+abs(a-c)+__gcd(abs(b-d),abs(a-c));//cannot gcd include 0
		}
		cout<<ans<<"\n";
	}
 return 0 ;
}

