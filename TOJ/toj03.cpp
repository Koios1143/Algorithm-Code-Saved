#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=0;//儲存最大公因數     123 
	for(int i=0 ; i<n ; i++)
	{
		long long a,b;
		cin>>a>>b;
		if(a>b)
		{
			swap(a,b);//保證a必小於b 
		}
		for(long long  j=1 ; j<=a ; j++)//公因數最大不超過a 
		{
			if(a%j==0 && b%j==0)
			{
				flag=j;
			}
		}
		cout<<flag<<endl;
	}
 


 return 0 ;
 
}



