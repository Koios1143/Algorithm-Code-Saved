//by Koios1143
#include<iostream>
using namespace std;
void f(char a,char b,char c,int p,int top){
	if(p<=1){
		cout<<"Move ring "<<top<<" from "<<a<<" to "<<c<<"\n";
		return;
	}	
	else{
		f(a,c,b,p-1,top);
		f(a,b,c,1,top+p-1);
		f(b,a,c,p-1,top);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	while(cin>>n){
		cout<<"\n";
		f('A','B','C',n,1);
	}
	
	
		
 return 0 ;
}

