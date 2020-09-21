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
	int arr[5][6];
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<6 ; j++){
			cin>>arr[i][j];
		}
	}
	bool YN=false;
	//row
	for(int i=0 ; i<5 && !YN ; i++){
		for(int j=0,tot=0 ; j<6 ; j++){
			if(j==0)
				tot++;
			else{
				if(arr[i][j]==arr[i][j-1]){
					tot++;
					if(tot==3){
						YN=true;
						break;
					}
				}
				else{
					tot=0;
				}
			}
		}
	}
	//col
	for(int j=0 ; j<6 && !YN ; j++){
		for(int i=0,tot=0 ; i<5 ; i++){
			if(i==0)
				tot++;
			else{
				if(arr[i][j] == arr[i-1][j]){
					tot++;
					if(tot==3){
						YN=true;
						break;
					}
				}
				else{
					tot=0;
				}
			}
		}
	}
	if(YN){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}

	return 0;
}

