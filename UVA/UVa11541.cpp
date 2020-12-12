#include<iostream>
using namespace std;
int Case=1,t,cnt=0;
string s;
char tmp;
int main(){
	cin>>t;
	while(t--){
		cout<<"Case "<<Case++<<": ";
		cin>>s;
		cnt=0;
		for(int i=0 ; i<=s.size() ; i++){
			if(i!=s.size() && s[i]>='0' && s[i]<='9'){
				cnt*=10;
				cnt+=s[i]-'0';
			}
			else{
				if(cnt==0){
					tmp=s[i];
				}
				else{
					for(int j=0 ; j<cnt ; j++){
						cout<<tmp;
					}
					cnt=0;
					tmp=s[i];
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}

