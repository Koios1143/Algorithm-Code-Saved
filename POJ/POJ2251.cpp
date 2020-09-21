#include<iostream>
#include<queue>
using namespace std;
struct dot
{
	int x;
	int y;
	int z;
	dot(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	} 
};
int main()
{
	int l,r,c;
	while(cin>>l>>r>>c)
	{
		if(l==r&&r==c&&c==0)
		{
			break;
		}
		else
		{
			int sx=0,sy=0,sz=0,ex=0,ey=0,ez=0;
			char arr[31][31][31];
			int times[31][31][31];
			bool inqu[31][31][31];
			for(int i=0 ; i<l ; i++)
			{
				for(int j=0 ; j<r ; j++)
				{
					for(int k=0 ; k<c ; k++)
					{
						cin>>arr[i][j][k];
						if(arr[i][j][k]=='S')
						{
							sx=i;
							sy=j;
							sz=k;
						}
						else if(arr[i][j][k]=='E')
						{
							ex=i;
							ey=j;
							ez=k;
						}
						times[i][j][k]=0;
						inqu[i][j][k]=false;
					}
				}
			}
			times[0][0][0]=1;
			queue<dot> q;
			dot S(sx,sy,sz);
			dot E(ex,ey,ez);
			q.push(S);
			inqu[q.front().x][q.front().y][q.front().z]=true;
			int dir[6][3]={{0,1,0},{0,-1,0},{-1,0,0},{1,0,0},{0,0,1},{0,0,-1}};
			while(!q.empty())
			{
				for(int i=0 ; i<6 ; i++)
				{
					int nx=q.front().x+dir[i][0];
					int ny=q.front().y+dir[i][1];
					int nz=q.front().z+dir[i][2];
					if(nx<0||nx==l||ny<0||ny==r||nz<0||nz==c||arr[nx][ny][nz]=='#')
					{
						continue;
					}
					if(inqu[nx][ny][nz])
					{
						continue;
					}
					else
					{
						dot d(nx,ny,nz);
						q.push(d);
						inqu[nx][ny][nz]=true;
						times[nx][ny][nz]=times[q.front().x][q.front().y][q.front().z]+1;
					}
				}
				q.pop();
			}
			int x=times[E.x][E.y][E.z]-times[S.x][S.y][S.z];
			if(x<0)
			{
				cout<<"Trapped!\n";
			}
			else
			{
				cout<<"Escaped in "<<x<<" minute(s).\n";
			}
		}
	}
 return 0 ;
}
