#include<iostream>
using namespace std;
void normal_startree2(int n , int o)
{
	int p=o;
	for(int i=0 , m=1 ; i<n ; i++)
	{
		for(int j=p-1 ; j>0 ; j-- )
		{
			cout<<" ";
		}
		for(int k=0 ; k<m ; k++)
		{
			cout<<"*";
		}
		cout<<endl;
		m+=2;
		p--;
	}
}
void chrismas_startree(int n)
{
	for(int I=1 ; I<=n ; I++)
	{
		
		normal_startree2(I,n);
	}
}
int main()
{
	int n;
	cin>>n;
	chrismas_startree(n);


 return 0 ;
 
}



