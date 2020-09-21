#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int h,w;
	for(int times=1 ; times<=n ; times++)
	{
		//input
		cin>>h>>w;
		char arr[h][w];
		//initialization
		int use[26];//0:A,1:B...etc
		for(int i=0 ; i<26 ; i++)
		{
			use[i]=-1;
		}
		
		for(int i=0 ; i<h ; i++)
		{
			for(int j=0 ; j<w ; j++)
			{
				cin>>arr[i][j];
				if(use[(int)arr[i][j]-97]==-1)
				{
					use[(int)arr[i][j]-97]=0;
				}
			}
		}
		//build basic
		set<pair<int,int>> inarr;
		int inarr_total=0;
		while(inarr_total!=h*w)
		{
			pair<int,int> p;
			bool end=false;
			for(int i=0 ; i<h ; i++)
			{
				if(end)
					break;
				for(int j=0 ; j<w ; j++)
				{
					pair<int,int> pp(i,j);
					if(!inarr.count(pp))
					{
						p.first=i;
						p.second=j;
						//cout<<"i:"<<i<<" j:"<<j<<"\n";
						end=true;
						break;
					}
				}
			}
			vector<pair<int,int>> v;
			v.push_back(p);
			inarr.insert(p);
			inarr_total++;
			
			int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
			char current=arr[p.first][p.second];
			//cout<<"cur:"<<current<<"\n";
			while(!v.empty())
			{
				int nx=v.back().first;
				int ny=v.back().second;
				for(int i=0 ; i<4 ; i++)
				{
					int tmx=nx+dir[i][0];
					int tmy=ny+dir[i][1];
					pair<int,int> tmp(tmx,tmy);
					//ilegal inarr not the same
					if(tmx<0||tmx>=h||tmy<0||tmy>=w||inarr.count(tmp)||arr[tmx][tmy]!=current)
					{
						//cout<<"Alive\n";
						continue;
					}
					else
					{
						
						inarr.insert(tmp);
						inarr_total++;
						cout<<"insert "<<tmp.first<<" "<<tmp.second<<"\n";
						v.push_back(tmp);
						break;
					}
				}
				v.pop_back();
			}
			use[(int)current-97]++;
		}
		cout<<"World #"<<times<<"\n";
		for(int i=0 ; i<26 ; i++)
		{
			if(use[i]!=-1)
			{
				cout<<(char)(i+97)<<": "<<use[i]<<"\n";
			}
		}
		
	}


 return 0 ;
}

