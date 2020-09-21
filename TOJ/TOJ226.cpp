#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	string in;
	for(int i=0 ; i<t ; i++){
		cin>>in;
		int check1=0;
		bool check2=false;
		int size=in.size();
		int numbers[10]={0,0,0,0,0,0,0,0,0,0};
		for(int j=0 ; j<size ; j++){
			check1+=in[j]-'0';
			if(in[j]=='0'){
				check2=true;
			}
			numbers[in[j]-'0']++;
		}
		if(check2==false||check1%3!=0){
			cout<<"-1\n";
			continue;
		}
		for(int j=9 ; j>=0 ; j--){
			for(int k=0 ; k<numbers[j] ; k++){
				cout<<j;
			}
		}
		cout<<"\n";
	}

 return 0 ;
}

