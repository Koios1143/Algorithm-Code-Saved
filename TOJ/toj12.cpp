#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cin>>arr[i][j];
		}
	}
	int q;
	cin>>q;
	char c;
	int ans=0;
	for(int l=0,i,j,k,x1,y1,x2,y2 ; l<q ; l++)
	{
		ans=0;
		cin>>c;
		if(c=='Q')
		{
			cin>>x1>>y1>>x2>>y2;
			for(int o=x1 ; o<=x2 ; o++)
			{
				for(int p=y1 ; p<=y2 ; p++)
				{
					ans+=arr[o-1][p-1];
				}
			}
			cout<<ans<<endl;
		}
		else
		{
			cin>>i>>j>>k;
			arr[j-1][i-1]=k;
		}
	}


 return 0 ;
}

