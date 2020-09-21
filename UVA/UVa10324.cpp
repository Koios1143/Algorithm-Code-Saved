//By Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
string s;
int n,times=1;;
int arr[1000010];
int main(){
	init();
	while(cin>>s){
		cout<<"Case "<<times++<<":\n";
		arr[0]=0;
		for(int i=1 ; i<s.size() ; i++){
			if(s[i]!=s[i-1]){
				arr[i]=arr[i-1]+1;
			}
			else{
				arr[i]=arr[i-1];
			}
		}
		cin>>n;
		for(int i=0,a,b ; i<n ; i++){
			cin>>a>>b;
			if(arr[b]-arr[a]==0){
				cout<<"Yes\n";
			}
			else{
				cout<<"No\n";
			}
		}
	}
	return 0;
}

