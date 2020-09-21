//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n;
string ans="";
void print_all(int l,int r){
	if(l==r && l==n){
		cout<<ans<<'\n';
		return;
	}
	if(n-l>0){
		ans+='(';
		print_all(l+1,r);
		ans.resize(ans.size()-1);
	}
	if(l-r>0){
		ans+=')';
		print_all(l,r+1);
		ans.resize(ans.size()-1);
	}
	
}
int main(){
	//init();
	while(cin>>n){
		print_all(0,0);
	}


	return 0;
}

