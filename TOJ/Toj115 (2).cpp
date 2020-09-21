//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
string arr[11];
int main(){
	init();
	for(int i=0 ; i<11 ; i++){
		arr[i] = "EMPTY";
	}
	int n,m;
	string s;
	cin>>n;
	while(n--){
		cin>>s>>m;
		arr[m]=s;
	}
	for(int i=1 ; i<=10 ; i++){
		cout<<arr[i]<<"\n";
	}


	return 0;
}

