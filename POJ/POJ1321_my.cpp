#include<memory.h>
#include<iostream>
using namespace std;

bool map[10][10];//true:shar false:dot
bool used_line[10];

int a,b,ans;

void DFS(int cur,int x,int y)
{
	if(cur==b)
	{
		ans++;
		return;
	}
	else
	{
		for(int i=x+1 ; i<=a ; i++)
		{
			for(int j=0 ; j<=a ; j++)
			{
				if(map[i][j]&&!used_line[j])
				{
					used_line[j]=true;
					DFS(cur+1,i,j);
					used_line[j]=false;
				}
			}
		}
	}
}

int main()
{
	char tmp;
	while(cin>>a>>b)
	{
		if(a==-1&&b==-1)
		{
			return 0;
		}
		else
		{
			memset(map, 0, sizeof(map));
			memset(used_line,0,sizeof(used_line));
			ans=0;
			for(int i=1 ; i<=a ; i++)
			{
				for(int j=1 ; j<=a ; j++)
				{
					cin>>tmp;
					if(tmp=='#')
					{
						map[i][j]=true;
					}
					else
					{
						map[i][j]=false;
					}
				}
			}
			DFS(0,0,0);
			cout<<ans<<"\n";
		}
	}


 return 0 ;
}

