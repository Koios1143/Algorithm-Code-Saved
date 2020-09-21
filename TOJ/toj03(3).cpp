#include<iostream>
using namespace std;
int GCD(int a, int b)
{
	if(a<b) swap(a,b);
	if(b==0) return a;
	else if(a%b==0) return b;
	else GCD(a-b,b);
}
int main()
{
	int a,b,t;
	cin>>t;
	for(int i=0 ; i<t ; i++)
	{
		cin>>a>>b;
		if(a<b) swap(a,b);
		if(b==0) cout<<0<<endl;
		else if(b==1) cout<<1<<endl;
		else cout<<GCD(a,b)<<endl;
	}
	



 return 0 ;
 
}



