#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,g;
	int s=0;
	cin>>a>>b>>c;
	for(int i=0;i<b;i++){
		cin>>d>>e;
		g=d*e;//�Ȧs 
		s+=g;//�`�� 
	}
	cout<<(s+a-c)/4<<endl;
	
return 0;
}
