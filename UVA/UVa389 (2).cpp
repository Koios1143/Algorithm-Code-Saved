//By Koios1143
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string s;
	int n,m,res=0;
	while(cin>>s>>n>>m){
		res=0;
		for(int i=s.size()-1, j=0 ; i>=0 ; i--, j++){
			if(s[i]<='9'){
				res += (s[i]-'0')*pow(n,j);
			}
			else{
				res += (s[i]-'A'+10)*pow(n,j);
			}
		}
		string ans="";
		if(res==0){
			ans="      0";
		}
		else{
			for( ; res && ans.size()<=7 ; res/=m){
				int tmp=res%m;
				if(tmp>=10){
					ans = char(tmp-10+'A') + ans;
				}
				else{
					ans = char(tmp+'0') + ans;
				}
			}
		}
		if(ans.size() > 7){
			ans="  ERROR";
		}
		else{
			for(int i=ans.size() ; i<7 ; i++){
				ans=' ' + ans;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
