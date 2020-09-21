#include<iostream>
using namespace std;
int C[10001][10];
int main()
{
	for(int i=0 ; i<=10000 ; i++)
	{
		for(int j=0,x=0 ; j<10 ; j++)
		{
			x=0;
			int tmp=i;
			while(tmp)
			{
				if(tmp%10==j)
				{
					x++;
				}
				tmp/=10;
			}
			C[i+1][j]=C[i][j]+x;
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<10 ; i++)
		{
			if(i==9)
			{
				cout<<C[n+1][9]<<"\n";
			}
			else
			{
				cout<<C[n+1][i]<<" ";
			}
		}
	}
	

 return 0 ;
}

