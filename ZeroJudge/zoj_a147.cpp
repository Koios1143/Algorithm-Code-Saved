//By Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
bool table[10005];
int n;
int main(){
	//init();
	memset(table,true,sizeof(table));
	for(int i=0,timer=0 ; i<10005 ; i++,timer++){
		if(timer==7){
			timer=0;
			table[i]=false;
		}
	}
	while(cin>>n){
		if(n==0)
			return 0;
		for(int i=1 ; i<n ; i++){
			if(table[i]){
				if(i!=1)
					cout<<' ';
				cout<<i;
			}
		}
		cout<<'\n';
	}


	return 0;
}

