//By Koios1143
#include<iostream>
using namespace std;
string s;
string big,small;
string minu(string n,string m){
	string res="";
	bool minus=false;
	for(int i=n.size()-1,j=m.size()-1 ; i>=0 || j>=0 ; i--,j--){
		if(i<0){
			res=n[i]+res;
		}
		else if(j<0){
			res=m[j]+res;
		}
		else{
			int now=n[i]-m[j]-minus;
			minus=false;
			if(now<0){
				now+=10;
				minus=true;
			}
			res=(char)('0'+now)+res;
		}
	}
	return res;
}
int main(){
	while(cin>>s){
		big="";
		small="";
		for(int j=0 ; j<s.size() ; j++){
			if((s[j]-'0')%2 == 0){
				big+=(char)(s[j]+1);
				bool minus=false;
				if(s[j]=='0'){
					small+='9';
					minus=true;
					for(int k=j-1 ; k>=0 && minus ; k--){
						if(k==0 && minus){
							small[k]='0';
							break;
						}
						if((small[k]-'0')-2 <0){
							small[k]='9';
						}
						else{
							small[k]-=2;
							minus=false;
						}
					}
				}
				else
					small+=(char)(s[j]-1);
				for(int k=j+1 ; k<s.size() ; k++){
					big+='1';
					small+='9';
				}
				break;
			}
			else{
				big+=s[j];
				small+=s[j];
			}
		}
		//cout<<"ordinal: "<<s<<'\n';
		//cout<<"big: "<<big<<'\n';
		//cout<<"small: "<<small<<'\n';
		string ans=min(minu(big,s),minu(s,small));
		bool out=false;
		for(int i=0 ; i<ans.size() ; i++){
			if((ans[i]=='0' && !out && i!=ans.size()-1)){
				continue;
			}
			else{
				cout<<ans[i];
				out=true;
			}
		}
		cout<<'\n';
	}
	return 0;
}
