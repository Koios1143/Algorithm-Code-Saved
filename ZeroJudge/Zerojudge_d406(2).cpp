#include<iostream>
#include<queue>
#include<set>
using namespace std;
int main()
{
	int s;
	int n,m;
	int times=0;
	while(cin>>s)
	{
		times++;
		cin>>n>>m;
		int arr[n][m];
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				cin>>arr[i][j];
				//cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<"\n";
			}
		}
		
		int sy=0;
		for(int i=0 ; i<m ; i++)
		{
			if(arr[0][i]==1)
			{
				sy=i;
				//cout<<"sy: "<<sy<<"\n";
				break;
			}
		}
		pair<int,int> p;
		queue<pair<int,int>> q;
		set<pair<int,int>> inq;
		p.first=0;
		p.second=sy;
		q.push(p);
		inq.insert(p);
		
		//right / left / below / up
		int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
		int limit = (s==1) ? 4 : 3;
		while(!q.empty())
		{
			int nx=q.front().first;
			int ny=q.front().second;
			//cout<<"nx: "<<nx<<" ny: "<<ny<<"\n";
			for(int i=0 ; i<limit ; i++)
			{
				//cout<<"still alive..."<<"\n";
				int tmx=nx+dir[i][0];
				int tmy=ny+dir[i][1];
				pair<int,int> tmp;
				tmp.first=tmx;
				tmp.second=tmy;
				//ilegal | in inq | no pipe
				if(tmx<0||tmx>=n||tmy<0||tmy>=m||inq.count(tmp)||arr[tmx][tmy]==0)
				{
					//cout<<"tmx: "<<tmx<<" tmy: "<<tmy<<" inq.count(tmp): "<<inq.count(tmp)<<" arr["<<tmx<<"]["<<tmy<<"]="<<arr[tmx][tmy]<<"\n";
					continue;
				}
				else
				{
					inq.insert(tmp);
					//cout<<"insert "<<tmp.first<<" "<<tmp.second<<"\n";
					arr[tmx][tmy]=arr[nx][ny]+1;
					q.push(tmp);
				}
			}
			/*for(int i=0 ; i<n ; i++)
			{
				cout<<arr[i][0];
				for(int j=1 ; j<m ; j++)
				{
					cout<<" "<<arr[i][j];
				}
				cout<<"\n";
			}*/
			q.pop();
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				if((i!=0&&j!=sy)&&arr[i][j]==1)
				{
					arr[i][j]=0;
				}
			}
		}
		cout<<"Case "<<times<<":\n";
		for(int i=0 ; i<n ; i++)
		{
			cout<<arr[i][0];
			for(int j=1 ; j<m ; j++)
			{
				cout<<" "<<arr[i][j];
			}
			cout<<"\n";
		}
	}

 return 0 ;
}

