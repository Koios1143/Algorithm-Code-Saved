#include<queue>
#include<memory.h>
#include<iostream>
#include<tuple>
using namespace std;

char Dun[30][30][30];
int ans[30][30][30];
bool vis[30][30][30];
int dir[6][3]={{1,0,0},{0,1,0},{0,0,1},{-1,0,0},{0,-1,0},{0,0,-1}};
int times=0;
int l,r,c;
tuple<int,int,int> start,exitt;

bool check_point(int x,int y,int z)
{
	if(x<0||x>=l||y<0||y>=r||z<0||z>=c)
	{
		return 0;
	}
	else if(Dun[x][y][z]=='#')
	{
		return 0;
	}
	else if(vis[x][y][z])
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	while(cin>>l>>r>>c)
	{
		if(l==0&&r==0&&c==0)
		{
			return 0;
		}
		else
		{
			memset(Dun,'\0',sizeof(Dun));
			memset(vis,0,sizeof(vis));
			memset(ans,0,sizeof(ans));
			
			times=0;
			
			char in;
			for(int i=0 ; i<l ; i++)
			{
				for(int j=0 ; j<r ; j++)
				{
					for(int k=0 ; k<c ; k++)
					{
						cin>>in;
						Dun[i][j][k]=in;
						if(in=='S')
						{
							start=make_tuple(i,j,k);
						}
						else if(in=='E')
						{
							exitt=make_tuple(i,j,k);
						}
					}
				}
			}
			//cout<<"strtpx:"<<get<0>(start)<<get<1>(start)<<get<2>(start)<<"\n";
			queue<tuple<int,int,int>>q;
			q.push(start);
			while(!q.empty())
			{
				for(int i=0 ; i<6 ; i++)
				{
					int nx=get<0>(q.front())+dir[i][0];
					int ny=get<1>(q.front())+dir[i][1];
					int nz=get<2>(q.front())+dir[i][2];
					tuple<int,int,int>now=make_tuple(nx,ny,nz);
					if(check_point(nx,ny,nz))
					{
						vis[nx][ny][nz]=true;
						ans[nx][ny][nz]=ans[get<0>(q.front())][get<1>(q.front())][get<2>(q.front())]+1;
						q.push(now);
					}
				}
				q.pop();
			}
			/*BFS(get<0>(start),get<1>(start),get<2>(start));
			
			for(int i=0 ; i<l ; i++)
			{
				for(int k=0 ; k<r ; k++)
				{
					for(int j=0 ; j<c ; j++)
					{
						cout<<ans[i][k][j]<<"\t";
					}
					cout<<"\n";
				}
				cout<<"\n";
			}*/
			
			if(ans[get<0>(exitt)][get<1>(exitt)][get<2>(exitt)]!=0)
			{
				cout<<"Escaped in "<<ans[get<0>(exitt)][get<1>(exitt)][get<2>(exitt)]<<" minute(s).\n";
			}
			else
			{
				cout<<"Trapped!\n";
			}
		}
	}


 return 0 ;
}

