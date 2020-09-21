#include<iostream>
using namespace std;
bool check_zero_one(int check_num){
	while(check_num>0){
		int tmp=check_num%10;
		//cout<<"check_num"<<":"<<check_num<<" tmp:"<<tmp<<"\n";
		if(tmp!=0 && tmp!=1){
			return false;
		}else{
			check_num/=10;
		}
	}
	return true;
}
int main(){
	int input;
	while(cin>>input){
		if(input==0)
			break;
		for(int j=1 ; ; j++){
			if(check_zero_one(input*j)){
				cout<<input*j<<"\n";
				break;
			}else{
				continue;
			}
		}
	}
 return 0 ;
}

