//by Koios1143
#include<iostream>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		freopen("10035.txt","r",stdin);
		freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	int a,b;
	while(cin>>a>>b){
		if(a==b&&a==0)
			return 0;
		int a1,b1,c=0;
		int ans=0;
		while(a||b){
			a1=a%10;
			b1=b%10;
			a/=10;
			b/=10;
			if(a1+b1+c>9){
				ans++;
				c=(a1+b1+c)/10;
			}
			else
				c=0;
		}
		if(ans==0){
			cout<<"No carry operation.\n";
		}
		else if(ans==1){
			cout<<"1 carry operation.\n";
		}
		else{
			cout<<ans<<" carry operations.\n";
		}
	}
 return 0 ;
}
