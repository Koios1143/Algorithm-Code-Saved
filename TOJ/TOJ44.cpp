#include<iostream>
#include<queue>
using namespace std;
struct dot{
	int x;
	int y;
	dot(int a,int b)
	{
		x=a;
		y=b;
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int dis[n][m];
	bool inqu[n][m];
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cin>>arr[i][j];
			dis[i][j]=0;
			inqu[i][j]=false;
		}
	}
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	queue<dot> q;
	dot d(x1,y1);
	q.push(d);
	inqu[x1][y1]=true;
	dis[x1][y1]=1;
	int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
	while(!q.empty())
	{
		for(int i=0 ; i<4 ; i++)
		{
			int nx=q.front().x+dir[i][0];
			int ny=q.front().y+dir[i][1];
			if(nx<0||nx>=n||ny<0||ny>=m||arr[nx][ny]==1)
			{
				continue;
			}
			if(inqu[nx][ny])
			{
				continue;
			}
			else
			{
				dot d2(nx,ny);
				q.push(d2);
				inqu[nx][ny]=true;
				dis[nx][ny]=dis[q.front().x][q.front().y]+1;
			}
		}
		q.pop();
	}
	cout<<dis[x2][y2]-dis[x1][y1]<<endl;
 return 0 ;
}

