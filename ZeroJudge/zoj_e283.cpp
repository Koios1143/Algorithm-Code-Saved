//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n;
int main(){
	init();
	while(cin>>n){
		string ans="";
		for(int i=0,a,b,c,d ; i<n ; i++){
			cin>>a>>b>>c>>d;
			int tmp=a*1000+b*100+c*10+d;
			if(tmp==101){
				//A
				ans+='A';
			}
			else if(tmp==111){
				//B
				ans+='B';
			}
			else if(tmp==10){
				//C
				ans+='C';
			}
			else if(tmp==1101){
				//D
				ans+='D';
			}
			else if(tmp==1000){
				//E
				ans+='E';
			}
			else if(tmp==1100){
				//F
				ans+='F';
			}
		}
		cout<<ans<<'\n';
	}


	return 0;
}

