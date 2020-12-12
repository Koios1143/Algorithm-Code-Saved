#include<iostream>
using namespace std;
int n;
string s;
int main(){
	while(cin>>n && n){
		cin>>s;
		n=s.size()/n;
		for(int i=n-1 ; i<s.size() ; i+=n){
			for(int j=i,cnt=0 ; cnt<n ; j--,cnt++){
				cout<<s[j];
			}
		}
		cout<<'\n';
	}
	return 0;
}

