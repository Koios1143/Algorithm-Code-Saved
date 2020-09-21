#include<iostream>
#include<queue>
#include<stack>
using namespace std;
struct dot{
	int x,y;
};
int map[5][5];
bool inq[5][5];
int ans[5][5];
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

bool check(int x,int y)
{
	if(x<0||y<0||x>=5||y>=5)
	{
		return 0;
	}
	else if(inq[x][y]||map[x][y]==1)
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
	for(int i=4 ; i>=0 ; i--)
	{
		for(int j=0 ; j<5 ; j++)
		{
			cin>>map[i][j];
		}
	}
	inq[0][0]=true;
	ans[0][0]=0;
	queue<dot>q;
	dot d;
	d.x=0,d.y=0;
	q.push(d);
	while(!q.empty())
	{
		int fx=q.front().x;
		int fy=q.front().y;
		if(fx==4&&fy==4)
		{
			break;
		}
		for(int i=0 ; i<4 ; i++)
		{
			int nx=fx+dir[i][0];
			int ny=fy+dir[i][1];
			if(check(nx,ny))
			{
				inq[nx][ny]=true;
				ans[nx][ny]=fx*5+fy;
				cout<<"ans["<<nx<<"]["<<ny<<"]="<<ans[nx][ny]<<"\n";
				d.x=nx,d.y=ny;
				q.push(d);
			}
		}
		q.pop();
	}
	stack<dot>s;
	int nx=4,ny=4;
	dot d2;
	d2.x=nx,d2.y=ny;
	s.push(d2);
	while(ans[nx][ny]!=0)
	{
		int xx=ans[nx][ny];
		nx=xx/5;
		ny=xx-xx/5;
		d2.x=nx,d2.y=ny;
		s.push(d2);
	}
	
	while(!s.empty())
	{
		cout<<"("<<s.top().x<<" ,"<<s.top().y<<")\n";
		s.pop();
	}


 return 0 ;
}

