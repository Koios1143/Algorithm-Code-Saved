#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		if(s=="0")
			return 0;
		int size=s.size();
		int res=0;
		for(int i=0 ; i<size ; i++){
			res=res*10+(s[i]-'0');
			res%=17;
		}
		cout<<(res==0 ? "1" : "0")<<"\n";
	}
 return 0 ;
}

