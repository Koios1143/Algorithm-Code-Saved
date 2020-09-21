#include<iostream>
#include<cmath>
#include<memory.h>
using namespace std;
int  arr[1010][1010];
bool use[1010][1010];
int cx,cy,px,py;
bool flag=false;
void DFS(int x,int y)
{
	if(use[x][y])//don't use again
		return;
	use[x][y]=true;//tag use
	if(abs(x-px)+abs(y-py)<=3)//in attack range
	{
		flag=true;
		return;
	}
	if(arr[x+1][y]-arr[x][y]<=1&&arr[x+1][y]-arr[x][y]>=-2&&arr[x+1][y]!=-1)//down
		DFS(x+1,y);
	if(arr[x-1][y]-arr[x][y]<=1&&arr[x-1][y]-arr[x][y]>=-2&&arr[x-1][y]!=-1)//up
		DFS(x-1,y);
	if(arr[x][y+1]-arr[x][y]<=1&&arr[x][y+1]-arr[x][y]>=-2&&arr[x][y+1]!=-1)//right
		DFS(x,y+1);
	if(arr[x][y-1]-arr[x][y]<=1&&arr[x][y-1]-arr[x][y]>=-2&&arr[x][y-1]!=-1)//left
		DFS(x,y-1);
	return;
}
int main()
{
	memset(arr,-1,sizeof(arr));//use -1 surround arr
	int n,m;
	cin>>n>>m;
	for(int i=1 ; i<=n ; i++)
	{
		for(int j=1 ; j<=m ; j++)
		{
			cin>>arr[i][j];
		}
	}
	cin>>cx>>cy>>px>>py;
	DFS(cx,cy);
	if(flag)
		cout<<"yes\n";
	else
		cout<<"no\n";
 return 0 ;
}

