#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0,b=0,c=n+1,d=n+1;
	int cannot=abs(a-c)+abs(b-d);
	cannot--;
	cannot*=2;
	cannot-=2;
	cannot+=__gcd(abs(a-c),abs(b-d));
	cannot-=2;
	cannot-=3;
	cout<<cannot<<"\n";


 return 0 ;
}

