#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int s;
	int n,m;
	while(cin>>s)
	{
		//input
		cin>>n>>m;
		int arr[n][m];
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				cin>>arr[i][j];
			}
		}
		
		//get start point
		int spx,spy;
		for(int i=0 ; i<m ; i++)
		{
			if(arr[0][i]==1)
			{
				spx=0;
				spy=i;
			}
		}
		
		pair<int,int> point;
		queue<pair<int,int>> q;
		point.first=spx;
		point.second=spy;
		q.push(point);
		bool inq[n][m];
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				inq[i][j]=false;
			}
		}
		inq[spx][spy]=true;
		int xl,yl;
		int px[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
		if(s==1)
		{
			xl=2;
			yl=3;
			//right / left / down
		}
		else
		{
			xl=2;
			yl=4;
			//right / left / down / up
		}
		while(!q.empty())
		{
			int nx=q.front().first,ny=q.front().second;
			for(int i=0 ; i<xl ; i++)
			{
				nx=q.front().first;
				ny=q.front().second;
				for(int j=0 ; j<yl ; j++)
				{
					nx+=px[j][0];
					ny+=py[j][1];
					
					if(nx>=n||nx<0||ny>=m||ny<0)
						continue;
					else
					{
						if(inq[nx][ny])
							continue;
						else
						{
							arr[nx][ny]=arr[q.front().first][q.front().second]+1;
							point.first=nx;
							point.second=ny;
							inq[nx][ny]=true;
							q.push(point);
						}
					}
				}
			}
			q.pop();
		}
	}
	


 return 0 ;
}

