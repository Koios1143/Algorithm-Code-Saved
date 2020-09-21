#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int DP[n][n];
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				DP[i][j]=0;
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			cin>>DP[i][0];
		}
		
		//DP[n][m]=DP[n-1][m-1]+DP[n][0] 
		int max[n];
		for(int i=0 ; i<n ; i++)
		{
			max[n]=-1010;
		}
		long long maybe_ans=0;
		for(int i=0 ; i<n ; i++)
		{
			for(int j=1 ; j<n ; j++)
			{
				if(i-1<=0||j-1<=0)
				{
					DP[i][j]=DP[i][0];
					
				}
				else
				{
					DP[i][j]=DP[i-1][j-1]+DP[n][0];
				}
				if(DP[i][j]>max[i])
				{
					max[i]=DP[i][j];
					cout<<"max["<<i<<"]=DP["<<i<<"]["<<j<<"]\n";
				}
				if(DP[i][j]>maybe_ans)
					{
						maybe_ans=DP[i][j];
					}
			}
		}
		sort(max,max+n);
		if(max[n-1]>0)
			cout<<"The maximum winning streak is "<</*max[n-1]*/maybe_ans<<".\n";
		else
			cout<<"Losing streak.\n";
	}
	

 return 0 ;
}

