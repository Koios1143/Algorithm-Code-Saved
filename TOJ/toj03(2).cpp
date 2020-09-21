#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=0 ; i<n ; i++)
	{
		int a;
		int b;
		cin>>a>>b;
		
		if(a>b)
		{
			swap(a,b);
		}
		for(int j=1 ; j<=a ; j++)
		{
			if(a%j==0)
			{
				if(b%j==0)
				{
					flag=j;
				}
			}
		}
		cout<<flag<<endl;
	}


 return 0 ;
 
}



