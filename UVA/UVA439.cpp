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
int board[8][8];
bool inque[8][8];
int main()
{
	char x1,x2;
	int y1,y2;
	//input
	while(cin>>x1>>y1>>x2>>y2)
	{
		for(int i=0 ; i<8 ; i++)
		{
			for(int j=0 ; j<8 ; j++)
			{
				board[i][j]=0;
				inque[i][j]=false;
				//system("pause");
			}
		}
		board[(int)(x2-97)][y2-1]=-1;
		//cout<<(int)(x2-97)<<" "<<y2-1<<endl;
//		system("pause");
		//new dots
		dot S((int)(x1-97),y1-1);
		dot E((int)(x2-97),y2-1);
//		cout<<"S:"<<S.x<<" "<<S.y<<endl;
//		cout<<"E:"<<E.x<<" "<<E.y<<endl;
//		system("pause");
		
		//order
		queue<dot> q;
		q.push(S);
		inque[S.x][S.y]=true;
		cout<<S.x<<" "<<S.y<<endl;
		//direction
		int dir[8][2]={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
		while(board[q.front().x][q.front().y]!=-1/*!(q.front().x==E.x&&q.front().y==E.y)*/)
		{
			dot tmp=q.front();
			/*if(tmp.x==E.x&&tmp.y==E.y)
			{
				board[E.x][E.y]=board[tmp.x][tmp.y]+1;
				break;
			}*/
			if(inque[tmp.x][tmp.y])
			{
				continue;
			}
			for(int i=0 ; i<8 ; i++)
			{
				int nx=tmp.x+dir[i][0];
				int ny=tmp.y+dir[i][1];
				if(nx<0||nx==8||ny<0||ny==8)
				{
					continue;
				}
				dot next(nx,ny);
				q.push(next);
				board[nx][ny]=board[tmp.x][tmp.y]+1;
			}
			q.pop();
		}
		cout<<board[E.x][E.y]<<endl;
	}
	

 return 0 ;
}

