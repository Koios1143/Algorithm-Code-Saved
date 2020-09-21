#include<iostream>
using namespace std;
int main(){
	int row,col,mov;
	while(cin>>row>>col>>mov){
		int arr[row][col];
		for(int i=0 ; i<row ; i++){
			for(int j=0 ; j<col ; j++){
				cin>>arr[i][j];
			}
		}
		int rev=0,turn=0;
		for(int i=0,tmp ; i<mov ; i++){
			cin>>tmp;
			tmp==0 ? turn++ : rev++;
		}
		turn%=4;
		rev%=2;
		if(rev==1){
			for(int i=0 ; i<row/2 ; i++){
				for(int j=0 ; j<col ; j++){
					swap(arr[i][j],arr[row-1-i][j]);
				}
			}
		}
		if(turn==0){
			cout<<row<<" "<<col<<"\n";
			for(int i=0 ; i<row ; i++){
				for(int j=0 ; j<col ; j++){
					cout<<arr[i][j];
					if(j!=col-1)
						cout<<" ";
				}
				cout<<"\n";
			}
		}
		if(turn==1){
			cout<<col<<" "<<row<<"\n";
			for(int i=0 ; i<col ; i++){
				for(int j=row-1 ; j>=0 ; j--){
					cout<<arr[j][i];
					if(j!=0)
						cout<<' ';
				}
				cout<<"\n";
			}
		}
		else if(turn==2){
			cout<<row<<" "<<col<<"\n";
			for(int i=row-1 ; i>=0 ; i--){
				for(int j=col-1 ; j>=0 ; j--){
					cout<<arr[i][j];
					if(j!=0)
						cout<<" ";
				}
				cout<<"\n";
			}
		}
		else if(turn==3){
			for(int i=col-1 ; i>=0 ; i--){
				for(int j=0 ; j<row ; j++){
					cout<<arr[j][i];
					if(j!=row-1)
						cout<<" ";
				}
				cout<<"\n";
			}
		}
	}


 return 0 ;
}

