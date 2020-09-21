//By Koios1143
#include<iostream>
using namespace std;
int n;
string ordi="";
bool out[1200];
int main(){
	while(cin>>n){
		getchar();
		getline(cin,ordi);
		for(int i=0 ; i<1200 ; i++)out[i]=false;
		for(int i=0 ; i<ordi.size()/n ; i++){
			for(int j=i ; j<ordi.size() && !out[j] ; j+=n){
				cout<<ordi[j];
				out[j]=true;
			}
		}
		cout<<'\n';
	}
	return 0;
}
