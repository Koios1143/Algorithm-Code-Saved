#include<iostream>
using namespace std;
int main()
{
	int n;//3
	cin>>n;
	for(int i=1 ;i<=n ; i+=2)//123//3  
	{
		for(int j=(n-1);j>=i;j--)
		{
			cout<<" ";
		}
		
		for(int k=1 ;k<=2*n+1 ; k+=2)
		{
			for(int l=1;l<=k;l++)
			{
				cout<<"*";
			}
			
			cout<<endl;
		}
	
	}
		
	

 return 0 ;
 
}



