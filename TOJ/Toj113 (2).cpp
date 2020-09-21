//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}

int main(){
	init();
	int n;
	string s;
	char c;
	
	cin>>n>>s>>c;
	int pos=0;
	for(int i=0 ; i<n ; i++){
		if(s[i]=='P'){
			pos=i;
			break;
		}
	}
	if(c=='L'){
		swap(s[pos],s[pos-1]);
	}
	else{
		swap(s[pos],s[pos+1]);
	}
	cout<<s<<'\n';
	return 0;
}

