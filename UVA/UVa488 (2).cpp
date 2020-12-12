//By Koios1143
#include<iostream>
using namespace std;
int t,f,a;
bool out=false;
int main(){
	cin>>t;
	while(t--){
		if(out)
			cout<<"\n";
		else
			out=true;
		cin>>a>>f;
		for(int i=0 ; i<f ; i++){
			if(i!=0)
				cout<<"\n";
			// 上大三角 
			for(int j=1 ; j<=a ; j++){
				for(int k=1 ; k<=j ; k++){
					cout<<j;
				}
				cout<<'\n';
			}
			// 下小三角
			for(int j=a-1,l=0 ; j>=1 ; j--, l++){
				for(int k=a-1-l ; k>0 ; k--){
					cout<<j;
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}

