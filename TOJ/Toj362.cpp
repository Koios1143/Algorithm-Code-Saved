#include<iostream>
using namespace std;
int arr[10][20];
bool ans=false;
void DFS(int a,int b,int c,int d)
{
	if(a>=13&&b>=13&&c>=13&&d>=13)
	{
		ans=true;
		return;
	}
	int v1=arr[1][a],v2=arr[2][b],v3=arr[3][c],v4=arr[4][d];
	if(v1==v2&&v1!=0&&v2!=0&&v1<=13&&v2<=13)
	{
		DFS(a+1,b+1,c,d);
	}
	if(v1==v3&&v1!=0&&v3!=0&&v1<=13&&v3<=13)
	{
		DFS(a+1,b,c+1,d);
	}
	if(v1==v4&&v1!=0&&v4!=0&&v1<=13&&v4<=13)
	{
		DFS(a+1,b,c,d+1);
	}
	if(v2==v3&&v3!=0&&v2!=0&&v2<=13&&v3<=13)
	{
		DFS(a,b+1,c+1,d);
	}
	if(v2==v4&&v2!=0&&v4!=0&&v2<=13&&v4<=13)
	{
		DFS(a,b+1,c,d+1);
	}
	if(v3==v4&&v3!=0&&v4!=0&&v3<=13&&v4<=13)
	{
		DFS(a,b,c+1,d+1);
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	bool FK=false;
	for(int i=1 ; i<=4 ; i++)
	{
		for(int j=1 ; j<=13 ; j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]!=j)
				FK=true;
		}
	}
	if(!FK)
	{
		cout<<"YES\n";
		return 0;
	}
	DFS(1,1,1,1);
	if(ans)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
 return 0 ;
}

