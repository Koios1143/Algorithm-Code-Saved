#include<iostream>
#include<memory.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[101][101];
		memset(arr,0,sizeof(arr));
		//第o個數 前O數總和  
		for(int i=0 ; i<n ; i++)
		{
			cin>>arr[i][0];
		}
		for(int i=1 ; i<101 ; i++)
		{
			for(int j=1 ; j<n ; j++)
			{
				arr[i][j]=arr[i-1][j]+arr[i][0];
			}
		}
		
	}

 return 0 ;
}

