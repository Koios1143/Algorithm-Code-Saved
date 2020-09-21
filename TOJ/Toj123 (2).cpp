//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n;
char arr[2][100010];
int main(){
	init();
	cin>>n;
	bool YN=true;
	for(int i=0 ; i<2 && YN ; i++){
		for(int j=0 ; j<n ; j++){
			cin>>arr[i][j];
			if(i==1 && arr[i][j]=='0'){
				if(j!=0){
					if(arr[0][j-1]=='0'){
						YN=false;
						break;
					}
				}
				if(arr[0][j]=='0'){
					YN=false;
					break;
				}
				if(j!=n-1){
					if(arr[0][j+1]=='0'){
						YN=false;
						break;
					}
				}
			}
		}
	}
	if(YN){
		cout<<"FENDED OFF!\n";
	}
	else{
		cout<<"FENESTRATION FORTIFICATION FAILURE!\n";
	}

	return 0;
}

