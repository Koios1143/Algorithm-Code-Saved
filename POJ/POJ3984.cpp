#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int map[5][5];
bool inq[5][5];
int ans[5][5];

bool check(int x,int y)
{
	if(x<0||y<0||x>=5||y>=5||inq[x][y]||map[x][y]==1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

struct dot{
	int x,y;
};

int main()
{
	
	for(int i=4 ; i>=0 ; i--)
	{
		for(int j=0 ; j<5 ; j++)
		{
			cin>>map[i][j];
		}
	}
	
	queue<pair<int,int>>q;
	pair<int,int>start=make_pair(4,0);
	
	inq[0][0]=true;
	q.push(start);
	while(!q.empty())
	{
		int fx=q.front().first;
		int fy=q.front().second;
		if(q.front().first==4 && q.front().second==4)
		{
			break;
		}
		else
		{
			for(int i=0 ; i<4 ; i++)
			{
				int nx=fx+dir[i][0];
				int ny=fy+dir[i][1];
				if(check(nx,ny))
				{
					inq[nx][ny]=true;
					ans[nx][ny]=fx*5+fy;
					pair<int,int> in=make_pair(nx,ny);
					q.push(in);
				}
			}
		}
		q.pop();
	}
	int nx=4,ny=4;
	stack<dot> s;
	dot d1;
	d1.x=nx;
	d1.y=ny;
	s.push(d1);
	while(nx!=0&&ny!=0)
	{
		s.push(d1);
		nx=ans[nx][ny]/5;
		d1.x=nx;
		ny=ans[nx][ny]-ans[nx][ny]/5;
		d1.y=ny;
	}
	while(!s.empty())
	{
		cout<<"("<<s.top().x<<", "<<s.top().y<<")\n";
		s.pop();
	}


 return 0 ;
}

