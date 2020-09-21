//by Koios1143
#include<iostream>
using namespace std;
char arr[101][101];
int main(){
	for(int i=0 ; i<101 ; i++){
		for(int j=0 ; j<101 ; j++){
			arr[i][j]=' ';
		}
	}
	string s;int times=0,max=0;
	while(getline(cin,s)){
		int size=s.size();
		if(size>max)
			max=size;
		for(int i=0 ; i<size ; i++){
			arr[times][i]=s[i];
		}
		times++;
	}
	for(int i=0 ; i<max ; i++){
		for(int j=times-1 ; j>=0 ; j--){
			cout<<arr[j][i];
		}
		cout<<'\n';
	}
		
 return 0 ;
}

