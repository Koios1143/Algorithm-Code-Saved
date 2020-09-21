#include<iostream>
using namespace std;
int GCD(int a,int b)
{
	if(a<b) swap(a,b);
	if(b==0) return 0;
	if(a%b==0) return b;
	else return GCD(a%b,b);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		int a,b;
		cin>>a>>b;
		cout<<GCD(a,b)<<endl;
	}
	
	


 return 0 ;
 
}



