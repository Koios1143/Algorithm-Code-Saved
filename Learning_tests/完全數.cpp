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
		sum+=i;	
		cout<<n<<"的因數:"<<i<<endl;
		}
	}
	sum-=n;
	if(n==sum)
	{
		cout<<n<<"是完全數"<<endl;
	}


 return 0 ;
 
}

