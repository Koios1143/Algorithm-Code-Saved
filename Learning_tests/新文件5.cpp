#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	int a[n];
	
	for(int i=0 , j=1 ; i<=n ; i++ , j+=2)
	{
		a[i]=j;
		cout<<a[i]<<"	";
	}

 return 0 ;
 
}



