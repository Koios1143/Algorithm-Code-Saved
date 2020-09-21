#include<iostream>
using namespace std;
int main()
{
	long long sum;
	long long a,b;
	cin>>a>>b;
	for(int i=a ; i<=(b-a+1) ; i++)
	{
		sum=0;
		for(int j=1 ; j<i ; j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
	{
		cout<<i<<"為完全數"<<endl;
	}
	}
	
	
	return 0;
}

