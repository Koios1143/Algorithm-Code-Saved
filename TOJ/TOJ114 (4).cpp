//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int arr[5][6];
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<6 ; j++){
			cin>>arr[i][j];
		}
	}
	bool find_ans=false;
	// row
	for(int i=0,cnt=1 ; i<5 ; i++,cnt=1){
		for(int j=1 ; j<6 && !find_ans ; j++){
			if(arr[i][j] == arr[i][j-1])
				cnt++;
			else
				cnt=1;
			if(cnt==3)
				find_ans=true;
		}
	}
	// col
	for(int j=0,cnt=1 ; j<6 ; j++,cnt=1){
		for(int i=1 ; i<5 && !find_ans ; i++){
			if(arr[i][j] == arr[i-1][j])
				cnt++;
			else
				cnt=1;
			if(cnt==3)
				find_ans=true;
		}
	}
	
	if(find_ans)
		cout<<"Yes\n";
	else
		cout<<"No\n";

	return 0;
}

