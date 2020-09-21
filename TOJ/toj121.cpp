#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=n+64;
	for(int i=0 ; i<n ; i++)
	{
		for(int k=0 ; k<i ; k++)
		{
			cout<<" ";
		}
		for(int j=2*i ; j<2*n-1 ; j++)
		{
			cout<<(char)m;
		}
		cout<<endl;
		m--;
	}


 return 0 ;
 
}



