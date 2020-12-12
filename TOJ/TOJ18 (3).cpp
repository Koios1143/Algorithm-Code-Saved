//By Koios1143
#include<iostream>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		string tmp="";
		for(int i=0 ; i<s.size() ; i++){
			if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
				tmp+=tolower(s[i]);
		}
		bool powerful=true;
		for(int i=0, j=tmp.size()-1 ; i<tmp.size()/2 ; i++, j--){
			if(tmp[i]!=tmp[j]){
				powerful=false;
				break;
			}
		}
		if(powerful)
			cout<<"SETUP! "<<s<<"\n";
		else
			cout<<s<<"\n";
	}
	return 0;
}

