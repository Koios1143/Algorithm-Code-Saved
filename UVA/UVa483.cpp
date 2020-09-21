#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s,s2;
	stringstream ss;
	while(getline(cin,s)){
		int size=s.size();
		for(int i=size-1 ; i>=0 ; i--)
			cout<<s[i];
		cout<<"\n";
	}
 return 0 ;
}

