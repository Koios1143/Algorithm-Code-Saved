#include<iostream>
using namespace std;
void DP(int arr[][M+2])
{
	
}
int main()
{
	int t;
	cin>>t;
	int n,m;
	while(t--)
	{
		cin>>n>>m;
		int arr[n+2][m+2];
		for(int i=0 ; i<m+2 ; i++)
		{
			arr[0][i]=0;
			arr[n+1][i]=0;
		}
		for(int i=0 ; i<n+2 ; i++)
		{
			arr[i][0]=0;
			arr[i][m+1]=0;
		}
		for(int i=1 ; i<m+1 ; i++)
		{
			for(int j=1 ; j<n+1 ; j++)
			{
				arr[j][i]=1;
			}
		}
		string s;
		for(int i=1 ; i<n+1 ; i++)
		{
			getline(cin,s);
			int flag=0;
			while(flag<s.size())
			{
				
			}
		}
		for(int i=0 ; i<n+2 ; i++)
		{
			for(int j=0 ; j<m+2 ; j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}

 return 0 ;
}

