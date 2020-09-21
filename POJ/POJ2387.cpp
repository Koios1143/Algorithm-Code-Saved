#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct dot{
	int to,val;
	dot(int t,int v)
	{
		to=t;
		val=v;
	}
};
int main()
{
	int t,n;
	while(cin>>t>>n)//;//trail / node
	{
		int dis[2005];
		for(int i=1 ; i<=n ; i++)
		{
			dis[i]=2147483647;
		}
		dis[n]=0;
		vector<dot> arr[2005];
		for(int i=0,a,b,l ; i<t ; i++)
		{
			cin>>a>>b>>l;
			arr[a].push_back(dot(b,l));
			arr[b].push_back(dot(a,l));
		}
		queue<int> q;
		bool inq[1005];
		for(int i=0 ; i<n ; i++)
		{
			inq[i]=false;
		}
		q.push(n);
		while(!q.empty())
		{
			inq[q.front()]=true;
			int size=arr[q.front()].size();
			//cout<<q.front()<<" size:"<<size<<"\n";
			for(int i=0 ; i<size ; i++)
			{
				if(dis[arr[q.front()][i].to]>dis[q.front()]+arr[q.front()][i].val)
				{
					dis[arr[q.front()][i].to]=dis[q.front()]+arr[q.front()][i].val;
					//cout<<"dis[arr["<<q.front()<<"]["<<i<<"].to="<<dis[q.front()]+arr[q.front()][i].val<<"\n";
					if(!inq[arr[q.front()][i].to])
					{
						inq[arr[q.front()][i].to]=true;
						q.push(arr[q.front()][i].to);
					}
					
				}
			}
			q.pop();
		}
		cout<<dis[1]<<"\n";
	}
	
	
	


 return 0 ;
}

