//By Koios1143
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		if(s[0]=='-'){
			break;
		}
		if(s.size()>2 && s[1] == 'x'){
			// hex
			long long ans=0;
			for(int i=s.size()-1, j=0 ; i>=2 ; i--, j++){
				if(s[i]<='9')
					ans+=(s[i]-'0')*pow(16, j);
				else
					ans+=(s[i]-'A'+10)*pow(16, j);
			}
			cout<<ans<<"\n";
		}
		else{
			// dec
			long long num = 0;
			for(int i=s.size()-1, j=0 ; i>=0 ; i--, j++){
				num += (s[i]-'0')*pow(10, j);
			}
			string ans="";
			for( ; num ; num/=16){
				int m = num%16;
				if(m>=10){
					ans = char(m-10+'A') + ans;
				}
				else{
					ans = char(m+'0') + ans;
				}
			}
			cout<<"0x"<<ans<<"\n";
		}
	}
	return 0;
}

