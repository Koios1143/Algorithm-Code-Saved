//By Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int arr[4],now[4],tot[1000000];
int n;
int main(){
	init();
	while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]){
		memset(tot,0,sizeof(tot));
		cin>>n;
		while(n--){
			cin>>now[0]>>now[1]>>now[2]>>now[3];
			for(int i=0 ; i<4 ; i++){
				tot[arr[i]]++;
			}
			int A=0,B=0;
			for(int i=0 ; i<4 ; i++){
				if(arr[i] == now[i]){
					A++;
					tot[now[i]]--;
				}
			}
			for(int i=0 ; i<4 ; i++){
				if(arr[i] != now[i] && tot[now[i]]>0){
					B++;
					tot[now[i]]--;
				}
			}
			cout<<A<<'A'<<B<<'B'<<'\n';
		}
	}


	return 0;
}

