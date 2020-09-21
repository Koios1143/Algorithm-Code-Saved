#include<iostream>
using namespace std;
string s;
void f(int now,string ns){
	if(now==s.size())
		cout<<ns<<"\n";
	else{
		for(int i=0 ; i<=ns.size() ; i++){
			f(now+1,ns.substr(0,i)+s[now]+ns.substr(i));
		}
	}
}
int main(){
	bool YN=false;
	while(cin>>s){
		if(YN)
			cout<<'\n';
		else
			YN=true;
		f(0,"");
	}

 return 0 ;
}

