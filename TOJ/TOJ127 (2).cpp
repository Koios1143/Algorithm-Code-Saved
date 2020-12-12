//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	n%=26;
	for(int i=0 ; i<s.size() ; i++){
		if(s[i]-n < 'A')
			s[i]=s[i]-n+26;
		else
			s[i]=s[i]-n;
	}
	cout<<s<<"\n";
	return 0;
}
