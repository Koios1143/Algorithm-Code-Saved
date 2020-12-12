#include<iostream>
using namespace std;
int r,c,m,arr[15][15],op[15];
bool out=false;
void rotate(){
	int tmp[15][15];
	swap(r,c);
	for(int i=0 ; i<r ; i++){
		for(int j=0 ; j<c ; j++){
			tmp[i][j] = arr[j][r-i-1];
		}
	}
	swap(arr,tmp);
}
void mirror(){
	int tmp[15][15];
	for(int arr_x=r-1, tmp_x=0 ; arr_x>=0 ; arr_x--, tmp_x++){
		for(int j=0 ; j<c ; j++){
			tmp[tmp_x][j] = arr[arr_x][j];
		}
	}
	swap(arr,tmp);
}
int main(){
	while(cin>>r>>c>>m){
		if(out){
			cout<<"\n";
		}
		else{
			out=true;
		}
		for(int i=0 ; i<r ; i++){
			for(int j=0 ; j<c ; j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0 ; i<m ; i++){
			cin>>op[i];
		}
		for(int i=m-1 ; i>=0 ; i--){
			if(op[i]==0){
				rotate();
			}
			else{
				mirror();
			}
		}
		cout<<r<<" "<<c<<"\n";
		for(int i=0 ; i<r ; i++){
			for(int j=0 ; j<c ; j++){
				if(j) cout<<' ';
				cout<<arr[i][j];
			}
			cout<<"\n";
		}
	}
	return 0;
}
