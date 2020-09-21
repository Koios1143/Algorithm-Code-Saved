#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a,b,c;
	while(n--){
		cin>>a>>b>>c;
		if(a>b)	swap(a,b);
		if(b>c) swap(b,c);
		if(a>c) swap(a,c);
		if(a+b<=c || a<0 || b<0 || c<0)	cout<<"illegal triangle\n";
		else if(a*a+b*b==c*c)	cout<<"right triangle\n";
		else if(a*a+b*b>c*c)	cout<<"obtuse triangle\n";
		else	cout<<"acute triangle\n";
	}
 return 0 ;
}

