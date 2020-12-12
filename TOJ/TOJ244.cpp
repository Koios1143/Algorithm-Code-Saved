//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	for(int i=0 ; i<s.size() ; i++){
		if(s[i]<='Z'){
			cout<<(char)(s[i]-'A'+'a');
		}
		else
			cout<<(char)(s[i]-'a'+'A');
	}
	cout<<"\n";

	return 0;
}

