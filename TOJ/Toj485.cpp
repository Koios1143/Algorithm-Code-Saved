//By Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n;
char arr[10010];
bool check(int l,int r){
	while(l<r){
		if(arr[l] != arr[r])
			return false;
		else{
			l++;
			r--;
		}
	}
	return true;
}

int main(){
	init();
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	//enum start
	for(int i=0 ; i<n ; i++){
		if(check(i,n-1)){
			cout<<i<<'\n';
			return 0;
		}
	}

	return 0;
}

