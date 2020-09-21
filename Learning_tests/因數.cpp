#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=1 ; i<=n ; i++)
	{
		if(n%i ==0)
		{
		cout<<n<<"的因數:"<<i<<endl;
		sum ++; 
		}
	}
	cout<<"共:"<<sum<<"個"<<endl; 


 return 0 ;
 
}



